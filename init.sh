#!/bin/bash

# 检查是否提供了参数
if [ "$#" -ne 1 ]; then
  echo "Usage: $0 [num]"
  exit 1
fi

# 使用cp命令将文件从template/init复制到[num]
cp -r template/init $1