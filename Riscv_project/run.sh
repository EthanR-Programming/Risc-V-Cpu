#!/usr/bin/env bash
set -e
shopt -s globstar nullglob

echo "=== Running Verilator ==="

verilator -Wall -Wno-fatal --trace --timing --sv --binary -Irtl -Itb --top-module test_ rtl/*.sv tb/*.sv

echo "=== Running simulation ==="

# Run whatever binary Verilator generated

./obj_dir/V*
