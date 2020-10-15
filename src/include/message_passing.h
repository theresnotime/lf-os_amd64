#ifndef _MESSAGE_PASSING_H_INCLUDED
#define _MESSAGE_PASSING_H_INCLUDED

#include <stdint.h>

#ifdef __cplusplus
namespace LF_OS {
#endif

struct Message {
    //! Size of the message, including metadata
    size_t size;

    //! Size of the user data
    size_t user_size;

    //! Sender of the message
    pid_t sender;

    //! Type of the message
    enum {
        MT_IO,
        MT_Signal,

        MT_UserDefined = 1024,
    } type;

    union {
        struct {
            //! File descriptor this data is for
            int  fd;

            //! $user_size - sizeof(IO) bytes of data
            char data[0];
        } IO;

        struct {
            //! Signal identifier
            uint16_t signal;
        } Signal;

        char raw[0];
    } user_data;
};

#ifdef __cplusplus
}
#endif

#endif
