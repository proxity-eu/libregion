#include <cstdint>

extern "C" __attribute__((visibility("default"))) __attribute__((used))
void reset();

extern "C" __attribute__((visibility("default"))) __attribute__((used))
int32_t decode(uint32_t* data, int32_t size);

extern "C" __attribute__((visibility("default"))) __attribute__((used))
uint8_t* encode(int32_t* size);

extern "C" __attribute__((visibility("default"))) __attribute__((used))
int32_t init_from_beacons(double* points, int32_t size);

extern "C" __attribute__((visibility("default"))) __attribute__((used))
double* loop(int32_t index, int32_t* size);

extern "C" __attribute__((visibility("default"))) __attribute__((used))
int32_t add_loop(double* points, int32_t size);

extern "C" __attribute__((visibility("default"))) __attribute__((used))
int32_t remove_loop(int idx);

extern "C" __attribute__((visibility("default"))) __attribute__((used))
int32_t hit_test(double lat, double lng);

extern "C" __attribute__((visibility("default"))) __attribute__((used))
void set_max_area(double area);

extern "C" __attribute__((visibility("default"))) __attribute__((used))
void info(double* data);

extern "C" __attribute__((visibility("default"))) __attribute__((used))
void _free(void* p);
