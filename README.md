# TCP-UDP-client-server-program
This Repository will explain the working of client-server programs in both TCP and UDP using C++ in a Linux system

## Pre-requisites : 
C++ Compiler
Basics of Socket Programming

## TCP
The entire process can be broken down into following steps:

### TCP Server – 
Create a socket for the server
Bind the server socket to the loopback address
Listen for incoming connections
Accept incoming connections
Receive data from the client
Send a response to the client
Close the client and server sockets.

### TCP Client – 
Create a socket for the client
Connect the client socket to the server
Send data to the server
Receive data from the server
Close the client socket

![alt text](https://media.geeksforgeeks.org/wp-content/uploads/Socket_server-1.png)


## UDP

In UDP, the client does not form a connection with the server like in TCP and instead sends a datagram. Similarly, the server need not accept a connection and just waits for datagrams to arrive. 

### UDP Server -
Create a UDP socket.
Bind the socket to the server address.
Wait until the datagram packet arrives from the client.
Process the datagram packet and send a reply to the client.
Go back to Step 3.

### UDP Client - 
Create a UDP socket.
Send a message to the server.
Wait until a response from the server is received.
Process the reply and go back to step 2, if necessary.
Close socket descriptor and exit.

![alt text](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20220504170707/server-and-client.jpg)



## References 
https://www.geeksforgeeks.org/socket-programming-cc/ <br>
https://www.geeksforgeeks.org/udp-server-client-implementation-c/ <br>
https://www.youtube.com/watch?v=gntyAFoZp-E&t=3786s <br>
https://www.youtube.com/watch?v=uIanSvWou1M&t=4s





