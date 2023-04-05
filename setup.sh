#!/bin/bash
set -x
set -e

echo "Start Install/Update"

if [[ "$DOWLOAD_ASSETS" == "" ]]; then
    DOWLOAD_ASSETS="y"
    echo "Assets will be downloaded too"
    echo "To disable that, run: 'DOWLOAD_ASSETS=y ./setup.sh'"
elif [[ "$DOWLOAD_ASSETS" == "y" ]]; then
    echo "Assets will be downloaded too"
else
    echo "Assets will NOT be downloaded"
fi

SOURCE_REPO_URL="https://github.com/ARCADE-TEK-2026/archi_arcade.git"
SOURCE_CLONE_FOLDER="__tmp"
SOURCE_ASSETS_FOLDER="$SOURCE_CLONE_FOLDER/assets"
SOURCE_INCLUDE_FOLDER="$SOURCE_CLONE_FOLDER/include"
SOURCE_SETUP_SCRIPT="$SOURCE_CLONE_FOLDER/setup.sh"

TARGET_INCLUDE_FOLDER="src"
TARGET_ASSETS_FOLDER="assets"
TARGET_SETUP_SCRIPT="update-archi.sh"

rm -rf "$SOURCE_CLONE_FOLDER"
git clone "$SOURCE_REPO_URL" "$SOURCE_CLONE_FOLDER"
if [[ "$1" == "--dev" ]]; then
    echo "Install dev dependencies"
    OLD_PWD="$PWD"
    cd "$SOURCE_CLONE_FOLDER" && git switch dev && cd "$OLD_PWD"
fi
mkdir -p "$TARGET_INCLUDE_FOLDER"
cp -r "$SOURCE_INCLUDE_FOLDER/"* "$TARGET_INCLUDE_FOLDER"
cp "$SOURCE_SETUP_SCRIPT" "$TARGET_SETUP_SCRIPT"
chmod +x "$TARGET_SETUP_SCRIPT"
if [[ "$DOWLOAD_ASSETS" == "y" ]]; then
    echo "Download assets..."
    if [[ ! -d "$TARGET_ASSETS_FOLDER" ]]; then
        cp -r "$SOURCE_ASSETS_FOLDER" "$TARGET_ASSETS_FOLDER"
    else
        cp -r "$SOURCE_ASSETS_FOLDER/"* "$TARGET_ASSETS_FOLDER"
    fi
fi
rm -rf "$SOURCE_CLONE_FOLDER"

# Add a gitignore file if it doesn't exist
if [ ! -f .gitignore ]; then
    echo "$TARGET_SETUP_SCRIPT" > .gitignore
elif ! grep -q "$TARGET_SETUP_SCRIPT" .gitignore; then
    echo "$TARGET_SETUP_SCRIPT" >> .gitignore
fi

echo "Fnishing Install/Update"
