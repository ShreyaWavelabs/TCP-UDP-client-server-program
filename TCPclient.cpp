#include <iostream>
#include <cstring>
#include <cstdlib>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

int main() {
    // Create a socket for the client
    int clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (clientSocket == -1) {
        perror("Error creating socket");
        exit(EXIT_FAILURE);
    }

    // Connect the client socket to the server
    struct sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(8080); // Replace with the server's port
    serverAddress.sin_addr.s_addr = inet_addr("127.0.0.1"); // Loopback address

    if (connect(clientSocket, (struct sockaddr *)&serverAddress, sizeof(serverAddress)) == -1) {
        perror("Error connecting to server");
        exit(EXIT_FAILURE);
    }

    // Send data to the server
    const char *message = "Hello, Server!";
    send(clientSocket, message, strlen(message), 0);

    // Receive data from the server
    char buffer[1024];
    int bytesRead = recv(clientSocket, buffer, sizeof(buffer), 0);
    if (bytesRead == -1) {
        perror("Error receiving data");
        exit(EXIT_FAILURE);
    }
    buffer[bytesRead] = '\0'; // Null-terminate the received data
    std::cout << "Received from server: " << buffer << std::endl;

    // Close the client socket
    close(clientSocket);

    return 0;
}

