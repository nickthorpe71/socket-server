//
// Server.h
//

#ifndef Server_h
#define Server_h

#include <sys/socket.h>
#include <netinet/in.h>

struct Server 
{
  int domain;
  int service;
  int protocol;
  u_long interface;
  int port;
  int backlog;
  
  struct sockaddr_in_address;

  int socket;

  void (*launch)(void);
};

struct Server server_constructor(int domain, int service, int protocol, ulong interface, int port, int backlon, void (*launch)(void));

#endif /* Server_h */
