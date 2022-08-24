#include "ListeningSocket.hpp"

/* contructor */
HDE::listeningSocket::listeningSocket(int domain, int service, int protocol, int port, u_long interface, int bklg) : 
                bindingSocket(domain, service, protocol, port, interface)
{
    backlog = bklg;
    /* start listening to the network */
    startListening();
    /* confirm the connection was successful */
    testConnection(listng);
}

/* desttructor */
HDE::listeningSocket::~listeningSocket() {}

/* start listening from the network */
void HDE::listeningSocket::startListening()
{
    listng = listen(getSock(),backlog);
}

/* getter functions */
int HDE::listeningSocket::getListening()
{
    return (listng);
}

int HDE::listeningSocket::getBacklog()
{
    return (backlog);
}
