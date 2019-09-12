#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdio.h>
#include <arpa/inet.h>

int status;
struct addrinfo hints;
struct addinfo *servinfo; //will point to the results

memset(&hints, 0, sizeof hints); // make sure the struct is empty
hints.ai_family = AF_UNSPEC; // don't care IPv4 or IPv6
hints.ai_socktype = SOC_STREAM; // TCP
hints.ai_flags = AI_PASSIVE; // fill in my IP

if ((status = getaddrinfo(NULL, "3490", &hints, servinfo)) != 0){
  fprintf(stderr, "getaddrinfo error: %s\n", gai_strerror(status));
  exit(2);
}


status = getaddrinfo("www.google.com", "3490", &hints, &servinfo);
//servinfo now points to a linked list of 1 or more struct addrinfo
// ...do

freeaddrinfo(servinfo); // free the linked list
