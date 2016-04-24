#ifndef FOS_INC_MALLOC_H
#define FOS_INC_MALLOC_H 1

//Values for heap placement strategy
#define UHP_PLACE_FIRSTFIT 	0x1
#define UHP_PLACE_BESTFIT 	0x2
#define UHP_PLACE_NEXTFIT 	0x3
#define UHP_PLACE_WORSTFIT 	0x4


void *malloc(uint32 size);
void free(void* virtual_address);
void *realloc(void *virtual_address, uint32 new_size);

#endif
