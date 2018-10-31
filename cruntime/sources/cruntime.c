#include <stdio.h>

extern void swift_getFieldAt(const void *base, unsigned index, void (*callback)(const char *name, const void *type, void *ctx), void *callbackCtx);

void runtime_swift_getFieldAt(const void *base, unsigned index, void (*callback)(const char *name, const void *type, void *ctx), void *callbackCtx) {
    swift_getFieldAt(base, index, callback, callbackCtx);
}
