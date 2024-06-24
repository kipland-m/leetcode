#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>

int main() {

// struct addrinfo {
//		int              ai_flags;     // AI_PASSIVE, AI_CANONNAME, etc.
//		int              ai_family;    // AF_INET, AF_INET6, AF_UNSPEC
//		int              ai_socktype;  // SOCK_STREAM, SOCK_DGRAM
//		int              ai_protocol;  // use 0 for "any"
//		size_t           ai_addrlen;   // size of ai_addr in bytes
//		struct sockaddr *ai_addr;      // struct sockaddr_in or _in6
//		char            *ai_canonname; // full canonical hostname
//
//		struct addrinfo *ai_next;      // linked list, next node
//	};
//
//	
//	int getaddrinfo(const char *node,     // e.g. "www.example.com" or IP
//			const char *service,  // e.g. "http" or port number
//			const struct addrinfo *hints,
//			struct addrinfo **res);
	int status;
	struct addrinfo hints;
	struct addrinfo *servinfo;	 // will point to the results

	memset(&hints, 0, sizeof hints); // make sure the struct is empty
	hints.ai_family = AF_UNSPEC;     // don't care IPv4 or IPv6
	hints.ai_socktype = SOCK_STREAM; // TCP stream sockets
	hints.ai_flags = AI_PASSIVE;     // fill in my IP for me


	if ((status = getaddrinfo(NULL, "3490", &hints, &servinfo)) != 0) {
	    fprintf(stderr, "getaddrinfo error: %s\n", gai_strerror(status));
	    exit(1);
	}

	// DEBUG PRINTFs to understand what everything is doing
	
	printf("%d\n", hints.ai_family);
	printf("%d\n", hints.ai_socktype);
	printf("%d\n", hints.ai_flags);

	// end debug print



	// servinfo now points to a linked list of 1 or more struct addrinfos

	// ... do everything until you don't need servinfo anymore ....

	freeaddrinfo(servinfo); // free the linked-list
}
