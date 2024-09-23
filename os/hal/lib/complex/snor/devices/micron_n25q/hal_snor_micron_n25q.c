/*
    ChibiOS - Copyright (C) 2006..2024 Giovanni Di Sirio

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

/**
 * @file        hal_snor_micron_n25q.c
 * @brief       Generated SNOR Micron N25Q source.
 * @note        This is a generated file, do not edit directly.
 *
 * @addtogroup  HAL_SNOR_MICRON_N25Q
 * @{
 */

#include "hal.h"
#include "hal_snor_micron_n25q.h"

/*===========================================================================*/
/* Module local definitions.                                                 */
/*===========================================================================*/

/*===========================================================================*/
/* Module local macros.                                                      */
/*===========================================================================*/

/*===========================================================================*/
/* Module exported variables.                                                */
/*===========================================================================*/

/*===========================================================================*/
/* Module local types.                                                       */
/*===========================================================================*/

/*===========================================================================*/
/* Module local variables.                                                   */
/*===========================================================================*/

/*===========================================================================*/
/* Module local functions.                                                   */
/*===========================================================================*/

/*===========================================================================*/
/* Module exported functions.                                                */
/*===========================================================================*/

/*===========================================================================*/
/* Module class "hal_snor_micron_n25q_c" methods.                            */
/*===========================================================================*/

/**
 * @name        Methods implementations of hal_snor_micron_n25q_c
 * @{
 */
/**
 * @memberof    hal_snor_micron_n25q_c
 * @protected
 *
 * @brief       Implementation of object creation.
 * @note        This function is meant to be used by derived classes.
 *
 * @param[out]    ip            Pointer to a @p hal_snor_micron_n25q_c instance
 *                              to be initialized.
 * @param[in]     vmt           VMT pointer for the new object.
 * @return                      A new reference to the object.
 */
void *__n25q_objinit_impl(void *ip, const void *vmt) {
  hal_snor_micron_n25q_c *self = (hal_snor_micron_n25q_c *)ip;

  /* Initialization of the ancestors-defined parts.*/
  __snorbase_objinit_impl(self, vmt);

  /* Initialization code.*/
  /* Implementation.*/

  return self;
}

/**
 * @memberof    hal_snor_micron_n25q_c
 * @protected
 *
 * @brief       Implementation of object finalization.
 * @note        This function is meant to be used by derived classes.
 *
 * @param[in,out] ip            Pointer to a @p hal_snor_micron_n25q_c instance
 *                              to be disposed.
 */
void __n25q_dispose_impl(void *ip) {
  hal_snor_micron_n25q_c *self = (hal_snor_micron_n25q_c *)ip;

  /* Finalization code.*/
  /* Implementation.*/

  /* Finalization of the ancestors-defined parts.*/
  __snorbase_dispose_impl(self);
}

/**
 * @memberof    hal_snor_micron_n25q_c
 * @protected
 *
 * @brief       Override of method @p snor_device_init().
 *
 * @param[in,out] ip            Pointer to a @p hal_snor_micron_n25q_c
 *                              instance.
 * @return                      An error code.
 */
flash_error_t __n25q_init_impl(void *ip) {
  hal_snor_micron_n25q_c *self = (hal_snor_micron_n25q_c *)ip;

  /* Implementation.*/
  (void)self;

  return FLASH_NO_ERROR;
}

/**
 * @memberof    hal_snor_micron_n25q_c
 * @protected
 *
 * @brief       Override of method @p snor_device_get_descriptor().
 *
 * @param[in,out] ip            Pointer to a @p hal_snor_micron_n25q_c
 *                              instance.
 */
const flash_descriptor_t *__n25q_get_descriptor_impl(void *ip) {
  hal_snor_micron_n25q_c *self = (hal_snor_micron_n25q_c *)ip;

  /* Implementation.*/
  (void)self;

  return NULL;
}

/**
 * @memberof    hal_snor_micron_n25q_c
 * @protected
 *
 * @brief       Override of method @p snor_device_read().
 *
 * @param[in,out] ip            Pointer to a @p hal_snor_micron_n25q_c
 *                              instance.
 * @param[in]     offset        Flash offset.
 * @param[in]     n             Number of bytes to be read.
 * @param[out]    rp            Pointer to the data buffer.
 * @return                      An error code.
 */
flash_error_t __n25q_read_impl(void *ip, flash_offset_t offset, size_t n,
                               uint8_t *rp) {
  hal_snor_micron_n25q_c *self = (hal_snor_micron_n25q_c *)ip;

  /* Implementation.*/
  (void)self;
  (void)offset;
  (void)n;
  (void)rp;

  return FLASH_NO_ERROR;
}

/**
 * @memberof    hal_snor_micron_n25q_c
 * @protected
 *
 * @brief       Override of method @p snor_device_program().
 *
 * @param[in,out] ip            Pointer to a @p hal_snor_micron_n25q_c
 *                              instance.
 * @param[in]     offset        Flash offset.
 * @param[in]     n             Number of bytes to be programmed.
 * @param[in]     pp            Pointer to the data buffer.
 * @return                      An error code.
 */
flash_error_t __n25q_program_impl(void *ip, flash_offset_t offset, size_t n,
                                  const uint8_t *pp) {
  hal_snor_micron_n25q_c *self = (hal_snor_micron_n25q_c *)ip;

  /* Implementation.*/
  (void)self;
  (void)offset;
  (void)n;
  (void)pp;

  return FLASH_NO_ERROR;
}

/**
 * @memberof    hal_snor_micron_n25q_c
 * @protected
 *
 * @brief       Override of method @p snor_device_start_erase_all().
 *
 * @param[in,out] ip            Pointer to a @p hal_snor_micron_n25q_c
 *                              instance.
 * @return                      An error code.
 */
flash_error_t __n25q_start_erase_all_impl(void *ip) {
  hal_snor_micron_n25q_c *self = (hal_snor_micron_n25q_c *)ip;

  /* Implementation.*/
  (void)self;

  return FLASH_NO_ERROR;
}

/**
 * @memberof    hal_snor_micron_n25q_c
 * @protected
 *
 * @brief       Override of method @p snor_device_start_erase_sector().
 *
 * @param[in,out] ip            Pointer to a @p hal_snor_micron_n25q_c
 *                              instance.
 * @param[in]     sector        Sector to be erased.
 * @return                      An error code.
 */
flash_error_t __n25q_start_erase_sector_impl(void *ip,
                                             const flash_sector_t *sector) {
  hal_snor_micron_n25q_c *self = (hal_snor_micron_n25q_c *)ip;

  /* Implementation.*/
  (void)self;
  (void)sector;

  return FLASH_NO_ERROR;
}

/**
 * @memberof    hal_snor_micron_n25q_c
 * @protected
 *
 * @brief       Override of method @p snor_device_query_erase().
 *
 * @param[in,out] ip            Pointer to a @p hal_snor_micron_n25q_c
 *                              instance.
 * @param[out]    msec          Recommended time, in milliseconds, that should
 *                              be spent before calling this function again,
 *                              can be @p NULL
 * @return                      An error code.
 */
flash_error_t __n25q_query_erase_impl(void *ip, unsigned *msec) {
  hal_snor_micron_n25q_c *self = (hal_snor_micron_n25q_c *)ip;

  /* Implementation.*/
  (void)self;
  (void)msec;

  return FLASH_NO_ERROR;
}

/**
 * @memberof    hal_snor_micron_n25q_c
 * @protected
 *
 * @brief       Override of method @p snor_device_verify_erase().
 *
 * @param[in,out] ip            Pointer to a @p hal_snor_micron_n25q_c
 *                              instance.
 * @param[in]     sector        Sector to be verified.
 * @return                      An error code.
 */
flash_error_t __n25q_verify_erase_impl(void *ip, const flash_sector_t *sector) {
  hal_snor_micron_n25q_c *self = (hal_snor_micron_n25q_c *)ip;

  /* Implementation.*/
  (void)self;
  (void)sector;

  return FLASH_NO_ERROR;
}

/**
 * @memberof    hal_snor_micron_n25q_c
 * @protected
 *
 * @brief       Override of method @p snor_device_mmap_on().
 *
 * @param[in,out] ip            Pointer to a @p hal_snor_micron_n25q_c
 *                              instance.
 * @param[out]    addrp         Pointer to the memory mapped memory or @p NULL
 * @return                      An error code.
 */
flash_error_t __n25q_mmap_on_impl(void *ip, uint8_t **addrp) {
  hal_snor_micron_n25q_c *self = (hal_snor_micron_n25q_c *)ip;

  /* Implementation.*/
  (void)self;
  (void)addrp;

  return FLASH_NO_ERROR;
}

/**
 * @memberof    hal_snor_micron_n25q_c
 * @protected
 *
 * @brief       Override of method @p snor_device_mmap_off().
 *
 * @param[in,out] ip            Pointer to a @p hal_snor_micron_n25q_c
 *                              instance.
 */
void __n25q_mmap_off_impl(void *ip) {
  hal_snor_micron_n25q_c *self = (hal_snor_micron_n25q_c *)ip;

  /* Implementation.*/
  (void)self;
}
/** @} */

/**
 * @brief       VMT structure of SNOR Micron N25Q driver class.
 * @note        It is public because accessed by the inlined constructor.
 */
const struct hal_snor_micron_n25q_vmt __hal_snor_micron_n25q_vmt = {
  .dispose                  = __n25q_dispose_impl,
  .init                     = __n25q_init_impl,
  .get_descriptor           = __n25q_get_descriptor_impl,
  .read                     = __n25q_read_impl,
  .program                  = __n25q_program_impl,
  .start_erase_all          = __n25q_start_erase_all_impl,
  .start_erase_sector       = __n25q_start_erase_sector_impl,
  .query_erase              = __n25q_query_erase_impl,
  .verify_erase             = __n25q_verify_erase_impl,
  .mmap_on                  = __n25q_mmap_on_impl,
  .mmap_off                 = __n25q_mmap_off_impl
};

/** @} */