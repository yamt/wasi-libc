#include <errno.h>

int *__errno_location(void) {
    return &__errno;
}
