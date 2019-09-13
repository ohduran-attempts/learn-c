#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <string.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <netinet/in.h>


int main(void){
  int s;
  struct addrinfo hints, *res;

  //do the lookup
  memset(&hints, 0, sizeof hints); // reset memory to 0
  hints.ai_family = AF_UNSPEC; // AF_INET or AF_INET6 to force version
  hints.ai_socktype = SOCK_STREAM; // TCP
  hints.ai_flags = AI_PASSIVE;

  getaddrinfo(NULL, "3490", &hints, &res);


  int sockfd = socket(res->ai_family, res->ai_socktype, res->ai_protocol);

  //bind it to the port we passed in to getaddrinfo:
  // bind(sockfd, res->ai_addr, res->ai_addrlen);

  // And connect
  connect(sockfd, res->ai_addr, res->ai_addrlen);

}
