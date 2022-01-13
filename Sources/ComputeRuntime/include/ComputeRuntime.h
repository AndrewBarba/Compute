//
//  ComputeRuntime.h
//  
//
//  Created by Andrew Barba on 1/11/22.
//

#ifndef ComputeRuntime_h
#define ComputeRuntime_h

#include <stdlib.h>
#include <stdint.h>

/* FASTLY_ABI */

__attribute__((__import_module__("fastly_abi"),__import_name__("init")))
extern uint32_t fastly_abi__init(uint64_t abi_version);

/* FASTLY_DICTIONARY */

__attribute__((__import_module__("fastly_dictionary"),__import_name__("open")))
extern uint32_t fastly_dictionary__open(const char* name, int name_len, int* handle);

__attribute__((__import_module__("fastly_dictionary"),__import_name__("get")))
extern uint32_t fastly_dictionary__get(int32_t h, const char* key, int key_len, uint8_t* value, int value_max_len, int* value_len);

/* FASTLY_LOG */

__attribute__((__import_module__("fastly_log"),__import_name__("endpoint_get")))
extern uint32_t fastly_log__endpoint_get(const char* name, int name_len, int* handle);

__attribute__((__import_module__("fastly_log"),__import_name__("write")))
extern uint32_t fastly_log__write(int handle, const char* msg, int msg_len, int* result);

/* FASTLY_GEO */

__attribute__((__import_module__("fastly_geo"),__import_name__("lookup")))
extern uint32_t fastly_geo__lookup(const uint8_t* ip, int ip_len, uint8_t* value, int value_max_len, int* value_len);

#endif /* ComputeRuntime_h */
