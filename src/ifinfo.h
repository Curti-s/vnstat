#ifndef IFINFO_H
#define IFINFO_H

#include "iflist.h"

#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__)
#include <net/if.h>
#endif

int getifinfo(const char *iface);
int getifliststring(char **ifacelist, int showspeed);
int getiflist(iflist **ifl, int getspeed);
int readproc(const char *iface);
int readsysclassnet(const char *iface);
#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__) || defined(__FreeBSD_kernel__)
int getifdata(const char *iface, struct if_data *ifd);
int readifaddrs(const char *iface);
#endif
uint32_t getifspeed(const char *iface);
int isifavailable(const char *iface);

#endif
