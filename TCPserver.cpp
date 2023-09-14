#include <iostream>
#include <cstring>
#include <cstdlib>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

int main() {
    // Create a socket for the server
    int serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket == -1) {
        perror("Error creating socket");
        exit(EXIT_FAILURE);
    }

    // Bind the server socket to the loopback address
    struct sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(8080); // Replace with your desired port number
    serverAddress.sin_addr.s_addr = INADDR_ANY;

    if (bind(serverSocket, (struct sockaddr *)&serverAddress, sizeof(serverAddress)) == -1) {
        perror("Error binding");
        exit(EXIT_FAILURE);
    }

    // Listen for incoming connections
    if (listen(serverSocket, 5) == -1) {
        perror("Error listening");
        exit(EXIT_FAILURE);
    }

    // Accept incoming connections
    struct sockaddr_in clientAddress;
    socklen_t clientAddressLength = sizeof(clientAddress);

    int clientSocket = accept(serverSocket, (struct sockaddr *)&clientAddress, &clientAddressLength);
    if (clientSocket == -1) {
        perror("Error accepting connection");
        exit(EXIT_FAILURE);
    }

    // Receive data from the client
    char buffer[1024];
    int bytesRead = recv(clientSocket, buffer, sizeof(buffer), 0);
    if (bytesRead == -1) {
        perror("Error receiving data");
        exit(EXIT_FAILURE);
    }
    buffer[bytesRead] = '\0'; // Null-terminate the received data
    std::cout << "Received from client: " << buffer << std::endl;

    // Send a response to the client
    const char *response = "Hello, Client!";
    send(clientSocket, response, strlen(response), 0);

    // Close the client and server sockets
    close(clientSocket);
    close(serverSocket);

    return 0;
}

