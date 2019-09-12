
#include <stdio.h>
#include <arpa/inet.h>
struct sockaddr_in sa; // IPv4
struct sockaddr_in6 sa6; // IPv6

char ip4[INET_ADDRSTRLEN]; // space to hold the IPv4 string
char ip6[INET6_ADDRSTRLEN]; // space to hold the IPv6 string


int main(void){
  inet_ntop(AF_INET, &(sa.sin_addr), ip4, INET_ADDRSTRLEN);
  inet_ntop(AF_INET6, &(sa.sin_addr), ip6, INET6_ADDRSTRLEN);

  printf("The IPv4 address is: %s\n", ip4);
  printf("The IPv6 address is: %s\n", ip6);
}
