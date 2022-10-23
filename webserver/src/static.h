#ifndef STATIC_H
#define STATIC_H

#include <LittleFS.h>
#include "ESPAsyncWebServer.h"
#include "AsyncTCP.h"

void serverAddSseHandler(void);
void sseHandleEvents(void);
void serverBeginServe(void);
void sseSend(String evnt, char* variable);

// void loadFSFile(String path, String type);
void loadFSHTML(void);
void loadFSCSS(void);
void loadFSJavaScript(void);
void loadFSStatic(void);

#endif