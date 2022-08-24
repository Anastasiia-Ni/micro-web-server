#include "SimpleServer.hpp"

/* contructor */
HDE::simpleServer::simpleServer(int domain, int service, int protocol, int port, u_long interface, int bklg)
{
    socket = new listeningSocket(domain, service, protocol, port, interface, bklg);
}

/* desttructor */
HDE::simpleServer::~simpleServer() 
{
    //delete socket;
}

/* getter function */
HDE::listeningSocket *HDE::simpleServer::getSocket()
{
    return (socket);
}