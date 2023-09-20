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





