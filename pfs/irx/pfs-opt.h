#ifndef _PFS_OPT_H
#define _PFS_OPT_H

#define PFS_PRINTF(format, ...) printf(format, ##__VA_ARGS__)
#define PFS_DRV_NAME "pfs"

#define PFS_MAJOR 2
#define PFS_MINOR 2

#define PFS_IOCTL2_INC_CHECKSUM 1
#define PFS_STAT_RETURN_INODE_LBA 1

#define __start pfs_start

#endif
