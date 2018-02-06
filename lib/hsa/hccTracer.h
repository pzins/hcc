#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER hccTracer

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "./hccTracer.h"

#if !defined(_hccTRACER_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _hccTRACER_H

#include <lttng/tracepoint.h>

TRACEPOINT_EVENT(
    hccTracer,
    kernel_begin,
    TP_ARGS(
        uint64_t, timestamp,
        const char*, my_string_arg
    ),
    TP_FIELDS(
        ctf_integer(uint64_t, timestamp, timestamp)
        ctf_string(name, my_string_arg)
    )
)
TRACEPOINT_EVENT(
    hccTracer,
    kernel_end,
    TP_ARGS(
        uint64_t, timestamp,
        const char*, my_string_arg
    ),
    TP_FIELDS(
        ctf_integer(uint64_t, timestamp, timestamp)
        ctf_string(name, my_string_arg)
    )
)


TRACEPOINT_EVENT(
    hccTracer,
    async_memcpy_begin,
    TP_ARGS(
        uint64_t, timestamp,
        const char*, my_string_arg
    ),
    TP_FIELDS(
        ctf_integer(uint64_t, timestamp, timestamp)
        ctf_string(name, my_string_arg)
    )
)
TRACEPOINT_EVENT(
    hccTracer,
    async_memcpy_end,
    TP_ARGS(
        uint64_t, timestamp,
        const char*, my_string_arg
    ),
    TP_FIELDS(
        ctf_integer(uint64_t, timestamp, timestamp)
        ctf_string(name, my_string_arg)
    )
)

TRACEPOINT_EVENT(
    hccTracer,
    barrier_begin,
    TP_ARGS(
        uint64_t, timestamp,
        const char*, my_string_arg
    ),
    TP_FIELDS(
        ctf_integer(uint64_t, timestamp, timestamp)
        ctf_string(name, my_string_arg)
    )
)
TRACEPOINT_EVENT(
    hccTracer,
    barrier_end,
    TP_ARGS(
        uint64_t, timestamp,
        const char*, my_string_arg
    ),
    TP_FIELDS(
        ctf_integer(uint64_t, timestamp, timestamp)
        ctf_string(name, my_string_arg)
    )
)



#endif

#include <lttng/tracepoint-event.h>
