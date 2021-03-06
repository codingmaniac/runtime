// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.

#ifndef __EVENTPIPE_ADAPTER_TYPES_H__
#define __EVENTPIPE_ADAPTER_TYPES_H__

#if defined(FEATURE_PERFTRACING)

#ifdef FEATURE_PERFTRACING_C_LIB
typedef struct _EventFilterDescriptor EventFilterDescriptor;
typedef struct _EventPipeBufferList EventPipeBufferList;
typedef struct _EventPipeProvider EventPipeProvider;
typedef struct _EventPipeSession EventPipeSession;
#else
struct EventFilterDescriptor;
class EventPipeBufferList;
class EventPipeProvider;
class EventPipeSession;
#endif //FEATURE_PERFTRACING_C_LIB

#endif // FEATURE_PERFTRACING
#endif // __EVENTPIPE_ADAPTER_TYPES_H__
