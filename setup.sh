#!/bin/bash

rm -rf __tmp
git clone https://github.com/ARCADE-TEK-2026/archi_arcade.git __tmp
cp -r __tmp/include .
cp __tmp/setup.sh .
rm -rf __tmp
mv setup.sh update_archi.sh
chmod a+x update_archi.sh
chmod a+rwx include

# Add a gitignore file if it doesn't exist
if [ ! -f .gitignore ]; then
    echo "update_archi.sh" > .gitignore
elif ! grep -q "update_archi.sh" .gitignore; then
    echo "update_archi.sh" >> .gitignore
fi
