#!/bin/sh

echo "this is for unpack rpm~~"
rpm2cpio $1 | cpio -div
