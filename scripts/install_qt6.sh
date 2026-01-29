#!/bin/bash
set -e

# Check if Qt6 already installed
if pkg-config --exists Qt6Core 2>/dev/null; then
    echo "Qt6 already installed"
    exit 0
fi

# Detect distro
. /etc/os-release

case $ID in
    ubuntu|debian|pop|linuxmint)
        sudo apt update
        sudo apt install -y qt6-base-dev
        ;;
    # add more cases in future if needed
esac

echo "Qt6 installed"
