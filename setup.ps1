Write-Output "Start Install/Update"

$SOURCE_REPO_URL = "https://github.com/ARCADE-TEK-2026/archi_arcade.git"
$SOURCE_CLONE_FOLDER = "__tmp"
$SOURCE_INCLUDE_FOLDER = "$SOURCE_CLONE_FOLDER/include"
$SOURCE_SETUP_SCRIPT = "setup.ps1"
$TARGET_INCLUDE_FOLDER = "src"
$TARGET_SETUP_SCRIPT = "update-archi.ps1"

# Clean or create the tmp folder
if (Test-Path $SOURCE_CLONE_FOLDER) {
    Remove-Item -Recurse -Force $SOURCE_CLONE_FOLDER
} else {
    New-Item -ItemType Directory -Path $SOURCE_CLONE_FOLDER -Force
}

# Clone and copy the files / clean tmp folder
git clone $SOURCE_REPO_URL $SOURCE_CLONE_FOLDER
if (!(Test-Path $TARGET_INCLUDE_FOLDER)) {
    New-Item -ItemType Directory -Path $TARGET_INCLUDE_FOLDER -Force
}
Copy-Item $SOURCE_INCLUDE_FOLDER\* $TARGET_INCLUDE_FOLDER -Recurse -Force
Remove-Item -Recurse -Force $SOURCE_CLONE_FOLDER

# Rename the setup script and update gitignore
if (Test-Path $SOURCE_SETUP_SCRIPT) {
    Rename-Item $SOURCE_SETUP_SCRIPT $TARGET_SETUP_SCRIPT
}

if (!(Test-Path .gitignore)) {
    "$TARGET_SETUP_SCRIPT" | Out-File .gitignore
}
elseif (!(Get-Content .gitignore | Select-String -Pattern $TARGET_SETUP_SCRIPT)) {
    Add-Content .gitignore $TARGET_SETUP_SCRIPT
}

Write-Output "Finished Install/Update"
