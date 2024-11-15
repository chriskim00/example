/*
 Copyright 2024 Peter Kreye

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
    http://www.apache.org/licenses/LICENSE-2.0
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/

#pragma once
/* #include <fcntl.h> */
/* #include <unistd.h> */
/* #include <stdint.h> */
/* #include <sys/ioctl.h> */

#define PCI_DEVICE_FILE_TEMPLATE "/dev/cobi_pcie_card%d"
#define PCI_ROW_SIZE 7
#define PCI_MAX_DEVICES 10

#ifdef COBIDUALRES
#define PCI_RAW_BYTE_CNT 338
#define PCI_READ_COUNT_COBI_CHIP_1 3
#define PCI_READ_COUNT_COBI_CHIP_2 3

typedef struct {
    off_t offset;
    uint32_t value;
} pci_write_data;
#else
#define PCI_RAW_BYTE_CNT 166
#define PCI_READ_COUNT_COBI_CHIP 3

typedef struct {
    off_t offset;
    uint64_t value;
} pci_write_data;
#endif
