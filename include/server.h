#ifndef SERVER_H
#define SERVER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <netinet/in.h>
#include <stdbool.h>
#include <pthread.h>
#include "socket_utils.h"
#include "request_handler.h"
#include "file_watcher.h"
#include "websocket.h"

#define PORT 8080
#define BUFFER_SIZE 1024
#define HTML_DIR "../www"

#endif
