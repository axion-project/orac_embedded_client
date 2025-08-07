# ORAC Embedded Client

An ultra-lean, high-performance API for connecting resource-constrained IoT devices to the ORAC AGI agentic AI. This project is meticulously engineered in Assembly for maximum efficiency, a minimal footprint, and direct control over the hardware and network stack on embedded Linux systems.

This client is a testament to the principle that next-gen AI should run on any device, no matter how limited its resources. It's the bare-metal foundation for creating truly autonomous, intelligent edge devices.

## Features

- **Bare-Metal Performance**: Hand-optimized Assembly code for critical network operations.
- **Minimal Footprint**: No bloated libraries, just direct Linux system calls.
- **Embedded-Ready**: Designed specifically for resource-constrained embedded Linux and IoT platforms.
- **Simple C Interface**: A clean C header file for easy integration into higher-level applications.

## Files

- `orac_embedded_client/`
  - `src/`
    - `orac_api.s`: The core Assembly implementation of the API.
    - `orac_api.h`: The C header file defining the public API functions.
    - `main.c`: An example C application demonstrating API usage.
  - `Makefile`: A simple script to automate the build process.
  - `LICENSE`: The full text of the MIT License.
  - `README.md`: This file.

## Build and Run

To build the client, navigate to the project root and use the provided `Makefile`.

```bash
# Build the project
make

# Run the example client
./orac_client
