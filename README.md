# TCP-UDP-client-server-program
This Repository will explain the working of client-server programs in both TCP and UDP using C++ in a Linux system

## Pre-requisites : 
C++ Compiler <br />
Basics of Socket Programming <br>

## TCP
The entire process can be broken down into following steps:

### TCP Server – 
1. Create a socket for the server <br>
2. Bind the server socket to the loopback address <br>
3. Listen for incoming connections <br>
4. Accept incoming connections <br>
5. Receive data from the client <br>
6. Send a response to the client <br>
7. Close the client and server sockets. <br>

### TCP Client – 
1. Create a socket for the client <br>
2. Connect the client socket to the server <br>
3. Send data to the server <br>
4. Receive data from the server <br>
5. Close the client socket <br>

![alt text](https://media.geeksforgeeks.org/wp-content/uploads/Socket_server-1.png)


## UDP

In UDP, the client does not form a connection with the server like in TCP and instead sends a datagram. Similarly, the server need not accept a connection and just waits for datagrams to arrive. 

### UDP Server -
1. Create a UDP socket. <br>
2. Bind the socket to the server address. <br>
3. Wait until the datagram packet arrives from the client. <br>
4. Process the datagram packet and send a reply to the client. <br>
5. Go back to Step 3. 

### UDP Client - 
1. Create a UDP socket. <br>
2. Send a message to the server. <br>
3. Wait until a response from the server is received.<br>
4. Process the reply and go back to step 2, if necessary.<br>
5. Close socket descriptor and exit. 

![alt text](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20220504170707/server-and-client.jpg)



## References 
https://www.geeksforgeeks.org/socket-programming-cc/ <br>
https://www.geeksforgeeks.org/udp-server-client-implementation-c/ <br>
https://www.youtube.com/watch?v=gntyAFoZp-E&t=3786s <br>
https://www.youtube.com/watch?v=uIanSvWou1M&t=4s





