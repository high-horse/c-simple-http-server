#!/bin/bash

# Change to the directory containing this script
cd "$(dirname "$0")"

# Number of concurrent runs
CONCURRENT=2

# Path to your Python script (now relative to run.sh)
PYTHON_SCRIPT="request.py"

echo "Starting $CONCURRENT concurrent requests..."

for i in $(seq 1 $CONCURRENT); do
    python3 "$PYTHON_SCRIPT" &
done

wait

echo "All requests completed."