#ifndef cruntime_h
#define cruntime_h

void getFieldAt(const void *base, unsigned index, void (*callback)(const char *name, const void *type, void *ctx), void *callbackCtx);

#endif
