#include "zio.h"
#include "snapshot.h"

int zfs_get_snapshot(zfs_handle_t * zhf, void * data) {
    char snapshot[256] = {};
    zfs_prop_get(zhf, ZFS_PROP_SNAPDIR, snapshot, sizeof(snapshot), NULL, NULL, 0, true);

    printf("snap: %s\n", snapshot);

    return 0;
}