#include <pmm.h>
extern uint32_t multiboot_info_addr;
extern uint32_t multiboot_magic;
typedef struct {
    uint64_t base_addr;
    uint64_t length;
    uint32_t type;
    uint32_t reserved;
} __attribute__((packed)) mmap_entry_t;

typedef struct {
    uint32_t type;         // type = 6
    uint32_t size;
    uint32_t entry_size;
    uint32_t entry_version;
    mmap_entry_t entries[]; // array flexível - nao ocupa espaco na struct em si
} __attribute__((packed)) mmap_tag_t;
void pmm(void){
    uint32_t *infoboot;
    infoboot = &multiboot_info_addr;
}