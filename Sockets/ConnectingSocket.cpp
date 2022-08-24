#include "ConnectingSocket.hpp"

/* contructor */
HDE::connectSocker::connectSocker(int domain, int service, int protocol, int port, u_long interface) : simpleSocket(domain, service, protocol, port, interface)
{
    int conCon = connectToNetwork(getSock(), getAdress());
    setConnection(conCon);
    testConnection(getConnection());
}

/* desttructor */
HDE::connectSocker::~connectSocker() {}

/* definition of connectToNetwork virtual function from parent class */
int HDE::connectSocker::connectToNetwork(int sock, struct sockaddr_in address)
{
    return (bind(sock, (const sockaddr *)&address, sizeof(address)));
}