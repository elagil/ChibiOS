/*
    ChibiOS - Copyright (C) 2006..2018 Giovanni Di Sirio

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
 * @file web.h
 * @brief HTTP client.
 * @{
 */

#ifndef WEB_H
#define WEB_H

#define CONFIG_RESOURCE    "/"
#define CONFIG_WEBSITE     "www.howsmyssl.com"

#define WEB_PORT           "443"

#ifdef __cplusplus
extern "C" {
#endif

int https_client(void);

#ifdef __cplusplus
}
#endif

#endif /* WEB_H */

/** @} */