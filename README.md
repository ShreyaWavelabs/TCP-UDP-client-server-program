# TCP-UDP-client-server-program
This Repository will explain the working of client-server programs in both TCP and UDP using C++ in a Linux system

## Pre-requisites : 
C++ Compiler <br />
Basics of Socket Programming <br>

## TCP
The entire process can be broken down into following steps:

### TCP Server – 
Create a socket for the server <br>
Bind the server socket to the loopback address <br>
Listen for incoming connections <br>
Accept incoming connections <br>
Receive data from the client <br>
Send a response to the client <br>
Close the client and server sockets. <br>

### TCP Client – 
Create a socket for the client <br>
Connect the client socket to the server <br>
Send data to the server <br>
Receive data from the server <br>
Close the client socket <br>

![alt text](https://media.geeksforgeeks.org/wp-content/uploads/Socket_server-1.png)


## UDP

In UDP, the client does not form a connection with the server like in TCP and instead sends a datagram. Similarly, the server need not accept a connection and just waits for datagrams to arrive. 

### UDP Server -
Create a UDP socket. <br>
Bind the socket to the server address. <br>
Wait until the datagram packet arrives from the client. <br>
Process the datagram packet and send a reply to the client. <br>
Go back to Step 3. 

### UDP Client - 
Create a UDP socket. <br>
Send a message to the server. <br>
Wait until a response from the server is received.<br>
Process the reply and go back to step 2, if necessary.<br>
Close socket descriptor and exit. 

![alt text](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20220504170707/server-and-client.jpg)



## References 
https://www.geeksforgeeks.org/socket-programming-cc/ <br>
https://www.geeksforgeeks.org/udp-server-client-implementation-c/ <br>
https://www.youtube.com/watch?v=gntyAFoZp-E&t=3786s <br>
https://www.youtube.com/watch?v=uIanSvWou1M&t=4s





