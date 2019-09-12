#include <netinet/in.h>
// Holds socket address information for many types of sockets
struct sockaddr {
  unisgned short sa_family;  // address family, AF_INET (IPv4) or AF_INET6 (IPv6)
  char sa_data[14]; // 14 bytes of protocol address
};

struct addrinfo {
  int ai_flags;  // AI_PASSIVE, AI_CANONNAME, etc
  int ai_family; // AF_INET, AF_INET6, AF_UNSPEC
  int ai_socktype; // SOC_STREAM, SOCK_DGRAM
  int ai_protocol; // use 0 for 'any'
  size_t ai_addrlen; // size of ai_addr in bytes
  struct sockaddr *ai_addr; // struct sockaddr_in or _in6
  char *ai_canonname; // full canonical hostname
  struct addrinfo *ai_next; // linked list, next node
};


  // IPv4 only, see in6_addr for IPv6
  struct in_addr {
    uint32_t s_addr; // that's a 32-bit int
  };


  // IPv4 only, to deal with struct sockaddr. This structure makes it easy to reference elements of the socket address.
  struct sockaddr_in {
    short int sin_family; // address family, AF_INET, AF_INET6
    unsigned short int sin_port; // port number
    struct in_addr sin_addr; // Internet access
    unsigned char sin_zero[8]; // same size as struct sockaddr
  };


  struct in6_addr {
    unsigned char s6_addr[16]; // IPv6 address
  };


  // IPv6 only, see in_addr and sockaddr_in for IPv4
  struct sockaddr_in6 {
    u_int16_t sin6_family; // address family, AF_INET6
    u_int16_t sin6_port; // port number, Network Byte Order
    u_int32_t sin6_flowinfo; // IPv6 flow information
    struct in6_addr sin6_addr; // IPv6 address
    u_int32_t sin6_scope_id; // Scope ID
  };


struct sockaddr_storage {
  sa_family_t ss_family; // address family

  // implementation specific
  char __ss_pad1[_SS_PAD1SIZE];
  int64_t __ss_align;
  char __ss_pad2[_SS_PAD2SIZE];

};
