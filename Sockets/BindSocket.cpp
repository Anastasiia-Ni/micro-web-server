#include "BindSocket.hpp"

/* contructor */
HDE::bindingSocket::bindingSocket(int domain, int service, int protocol, int port, u_long interface) : simpleSocket(domain, service, protocol, port, interface)
{
    
    bndg = connectToNetwork(getSock(), getAdress());
    setConnection(bndg);
    testConnection(getConnection());
}

/* desttructor */
HDE::bindingSocket::~bindingSocket() {}

/* definition of connectToNetwork virtual function from parent class */
int HDE::bindingSocket::connectToNetwork(int sock, struct sockaddr_in address)
{
    return (bind(sock, (struct sockaddr *)&address, sizeof(address))); //mayby instead const - struct
}

/* getter functions */
int HDE::bindingSocket::getBinding()
{
    return (bndg);
}