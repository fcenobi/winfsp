/**
 * @file dll/fuse/library.h
 *
 * @copyright 2015-2016 Bill Zissimopoulos
 */
/*
 * This file is part of WinFsp.
 *
 * You can redistribute it and/or modify it under the terms of the
 * GNU Affero General Public License version 3 as published by the
 * Free Software Foundation.
 *
 * Licensees holding a valid commercial license may use this file in
 * accordance with the commercial license agreement provided with the
 * software.
 */

#ifndef WINFSP_DLL_FUSE_LIBRARY_H_INCLUDED
#define WINFSP_DLL_FUSE_LIBRARY_H_INCLUDED

#include <dll/library.h>
#include <fuse/fuse.h>
#include <fuse/fuse_opt.h>

#define FSP_FUSE_LIBRARY_NAME           LIBRARY_NAME "-FUSE"

struct fuse
{
    struct fsp_fuse_env *env;
    struct fuse_operations ops;
    void *data;
    UINT32 DebugLog;
    FSP_FSCTL_VOLUME_PARAMS VolumeParams;
    PWSTR MountPoint;
    FSP_SERVICE *Service;
    FSP_FILE_SYSTEM *FileSystem;
    BOOLEAN fsinit;
};

extern FSP_FILE_SYSTEM_INTERFACE fsp_fuse_intf;

#endif
