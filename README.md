# http-server-C

A minimal HTTP server written in **C** that demonstrates how web servers work at a low level.  
This project implements a simple TCP server that listens for HTTP requests, parses them, and sends back responses.

The goal of this project is to understand the fundamentals of:

- Socket programming
- HTTP request/response structure
- Network communication
- Low-level systems programming in C

This project is mainly intended for **learning and experimentation**.

---

## Features

- Basic HTTP server implementation
- Handles incoming TCP connections
- Parses simple HTTP requests
- Sends HTTP responses to clients
- Lightweight and minimal dependencies

---

## How It Works

1. The server opens a **TCP socket** on a specified port.
2. It listens for incoming client connections.
3. When a client connects (e.g., from a web browser), the server:
   - Reads the HTTP request
   - Parses the request line
   - Generates a basic HTTP response
4. The response is sent back to the client.

This demonstrates how browsers communicate with servers using the **HTTP protocol**.

---

## Requirements

- GCC or any C compiler
- Linux / Unix-like environment (recommended)

---

## Build

Compile the server using:

```bash
cd v3-route-handler... # cd to the version you want ro tun
make build # runs thhe build command
make run # or run the build executable
```
