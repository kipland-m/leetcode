#include <stdio.h>

int main(){

	struct addrinfo {
	    int              ai_flags;     // AI_PASSIVE, AI_CANONNAME, etc.
	    int              ai_family;    // AF_INET, AF_INET6, AF_UNSPEC
	    int              ai_socktype;  // SOCK_STREAM, SOCK_DGRAM
	    int              ai_protocol;  // use 0 for "any"
	    size_t           ai_addrlen;   // size of ai_addr in bytes
	    struct sockaddr *ai_addr;      // struct sockaddr_in or _in6
	    char            *ai_canonname; // full canonical hostname

	    struct addrinfo *ai_next;      // linked list, next node
	};


	struct sockaddr {
	    unsigned short    sa_family;    // address family, AF_xxx
	    char              sa_data[14];  // 14 bytes of protocol address
	};


	// (IPv4 only--see struct sockaddr_in6 for IPv6)
	struct sockaddr_in {
	    short int          sin_family;  // Address family, AF_INET
	    unsigned short int sin_port;    // Port number
	    struct in_addr     sin_addr;    // Internet address
	    unsigned char      sin_zero[8]; // Same size as struct sockaddr
	};


	// (IPv4 only--see struct in6_addr for IPv6)
	// Internet address (a structure for historical reasons)
	struct in_addr {
	    uint32_t s_addr; // that's a 32-bit int (4 bytes)
	};
	
	// Internet presentation to network
	// converts normal dot separated format to binary
	inet_pton(AF_INET, "10.12.110.57", &(sa.sin_addr)); // IPv4

	struct addrinfo ai;

	printf("%d",ai.ai_protocol);

}
