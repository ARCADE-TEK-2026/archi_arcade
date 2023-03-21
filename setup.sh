#!/bin/bash

SOURCE_REPO_URL="https://github.com/ARCADE-TEK-2026/archi_arcade.git"
SOURCE_CLONE_FOLDER="__tmp"
SOURCE_INCLUDE_FOLDER="$SOURCE_CLONE_FOLDER/include"
SOURCE_SETUP_SCRIPT="$SOURCE_CLONE_FOLDER/setup.sh"

TARGET_INCLUDE_FOLDER="include"
TARGET_SETUP_SCRIPT="update-archi.sh"

rm -rf "$SOURCE_CLONE_FOLDER"
git clone "$SOURCE_REPO_URL" "$SOURCE_CLONE_FOLDER"
mkdir -p "$TARGET_INCLUDE_FOLDER"
cp -r "$SOURCE_INCLUDE_FOLDER/*" "$TARGET_INCLUDE_FOLDER"
cp "$SOURCE_SETUP_SCRIPT" "$TARGET_SETUP_SCRIPT"
rm -rf __tmp

# Add a gitignore file if it doesn't exist
if [ ! -f .gitignore ]; then
    echo "$TARGET_SETUP_SCRIPT" > .gitignore
elif ! grep -q "$TARGET_SETUP_SCRIPT" .gitignore; then
    echo "$TARGET_SETUP_SCRIPT" >> .gitignore
fi
