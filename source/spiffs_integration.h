/*
 * spiffs_integration.h
 *
 *  Created on: Jan 17, 2018
 *      Author: jan
 */

#ifndef SOURCE_SPIFFS_INTEGRATION_H_
#define SOURCE_SPIFFS_INTEGRATION_H_

#include "wish_fs.h"

void my_spiffs_mount(void);

void my_spiffs_test(void);

void my_spiffs_erase_area(void);

/* Implementations of the actual I/O functions required by wish_fs
 * module */
wish_file_t my_fs_open(const char *pathname);
int32_t my_fs_read(wish_file_t fd, void* buf, size_t count);
int32_t my_fs_write(wish_file_t fd, const void *buf, size_t count);
wish_offset_t my_fs_lseek(wish_file_t fd, wish_offset_t offset, int whence);
int32_t my_fs_close(wish_file_t fd);
int32_t my_fs_rename(const char *oldpath, const char *newpath);
int32_t my_fs_remove(const char *path);

#endif /* SOURCE_SPIFFS_INTEGRATION_H_ */
