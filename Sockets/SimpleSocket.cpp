#include "SimpleSocket.hpp"

/* default contructor */
HDE::simpleSocket::simpleSocket(int domain, int service, int protocol, int port, u_long interface)
{
    /* define address struciure */
    address.sin_family = domain;
    address.sin_port = htons(port);
    address.sin_addr.s_addr = htonl(interface);
    /* esteblish socket */
    sock = socket(domain, service, protocol);
    testConnection(sock);
}

/* desttructor */
HDE::simpleSocket::~simpleSocket() {}

/* test connection virtual function */
void HDE::simpleSocket::testConnection(int item_to_test)
{
    /* confirmation that socket or connection has been properle establish */
    if (item_to_test < 0) {
        perror("Failed to connect");
        exit(EXIT_FAILURE);
    }
}

/* getter functions */
struct sockaddr_in HDE::simpleSocket::getAdress()
{
    return (address);
}
int HDE::simpleSocket::getSock()
{
    return (sock);
}
int HDE::simpleSocket::getConnection()
{
    return (connection);
}

/* setter function */
void HDE::simpleSocket::setConnection(int con)
{
    connection = con;
}