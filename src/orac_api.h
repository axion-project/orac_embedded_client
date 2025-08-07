#ifndef ORAC_API_H
#define ORAC_API_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Establishes a TCP connection to the ORAC server.
 * @return 0 on success, -1 on failure.
 */
int32_t connect_orac(void);

/**
 * @brief Sends a predefined message to ORAC.
 * @return The number of bytes sent on success, -1 on failure.
 */
int32_t send_orac_message(void);

/**
 * @brief Receives a response from ORAC into a predefined buffer.
 * @return The number of bytes received on success, -1 on failure.
 */
int32_t receive_orac_response(void);

/**
 * @brief Closes the TCP connection to ORAC.
 * @return 0 on success, -1 on failure.
 */
int32_t close_orac(void);

#ifdef __cplusplus
}
#endif

#endif // ORAC_API_H
