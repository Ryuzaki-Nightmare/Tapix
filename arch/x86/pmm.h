#ifndef PMM_H
#define PMM_H

#include <stdint.h>

/*Types grub multiboot*/
typedef unsigned char           multiboot_uint8_t;
typedef unsigned short          multiboot_uint16_t;
typedef unsigned int            multiboot_uint32_t;
typedef unsigned long long      multiboot_uint64_t;

struct  __attribute__((packed)) multiboot_mmap_entry
{
  multiboot_uint64_t addr;
  multiboot_uint64_t len;
#define MULTIBOOT_MEMORY_AVAILABLE              1
#define MULTIBOOT_MEMORY_RESERVED               2
#define MULTIBOOT_MEMORY_ACPI_RECLAIMABLE       3
#define MULTIBOOT_MEMORY_NVS                    4
#define MULTIBOOT_MEMORY_BADRAM                 5
  multiboot_uint32_t type;
  multiboot_uint32_t zero;
};

struct multiboot_tag_mmap {
    uint32_t type; //Type = 6       
    uint32_t size; 
    uint32_t entry_size;   // 24 bytes
    uint32_t entry_version;
    struct multiboot_mmap_entry entries[0]; //Start entry Array
};

#endif