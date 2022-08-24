NAME = test.exe

SRCS = test.cpp Sockets/BindSocket.cpp Sockets/ConnectingSocket.cpp \
		Sockets/ListeningSocket.cpp Sockets/SimpleSocket.cpp	\
		Server/SimpleServer.cpp Server/TestServer.cpp

OBJS = $(SRCS:.cpp=.o)

CXX = g++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

all: $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

clean:
		$(RM) $(NAME)

fclean: clean
		$(RM) $(OBJS)

re: 	fclean all

.PHONY: all clean fclean re