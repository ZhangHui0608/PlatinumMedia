//
// Created by huzongyao on 2018/6/27.
//

#ifndef PLATINUMMEDIA_DLNASERVER_H
#define PLATINUMMEDIA_DLNASERVER_H


#include <PltUPnP.h>
#include "MediaRenderer.h"

/**
 * To hold server instance
 */
class DLNAServer {
public:
    DLNAServer();

    ~DLNAServer();

    NPT_Result Start(const char *friendly_name, bool show_ip = false, const char *uuid = NULL,
                     unsigned int port = 0, bool port_rebind = false);

    NPT_Result Stop();

    MediaRenderer *getMediaRenderer();

private:
    PLT_UPnP mUPnP;
    PLT_DeviceHostReference mDevice;
    MediaRenderer *mediaRenderer;
};


#endif //PLATINUMMEDIA_DLNASERVER_H
