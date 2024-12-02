# What's New Generator

A simple command-line tool that generates random "What's New" update texts for mobile applications. Perfect for developers who want to quickly generate professional-looking update notes for their app releases.

## Features

- Generates random, natural-sounding update messages
- Supports custom app name integration
- Optional "new features" flag for feature update announcements
- Works as a standalone command-line tool
- Can be run from any directory

## Installation

### Prerequisites
- C compiler (gcc or clang)
- Make sure you have Xcode Command Line Tools installed (for macOS)

### Build from source
```bash
# Clone the repository
git clone [repository-url]

# Navigate to the project directory
cd whats-new-gen

# Compile the program
gcc whats-new-gen.c -o whats-new

# Make it executable
chmod +x whats-new

# Optional: Make it available system-wide
# Option 1: Using /usr/local/bin (requires sudo)
sudo cp whats-new /usr/local/bin/

# Option 2: Using ~/bin (user-specific)
mkdir -p ~/bin
cp whats-new ~/bin/
# Add to PATH if not already added
echo 'export PATH="$HOME/bin:$PATH"' >> ~/.zshrc
source ~/.zshrc
```

## Usage

### Basic Usage
Generate a simple update message:
```bash
whats-new
```
Output example: `Bug fixes and performance improvements.`

### With App Name
Include your app name in the message:
```bash
whats-new --app-title "MyApp"
```
Output example: `We made improvements and fixed bugs to give you the best MyApp experience.`

### With New Features Flag
Generate a message that mentions new features:
```bash
whats-new --has-new-features
```
Output example: `This version includes bug fixes, new features and performance improvements.`

### Combined Usage
Include both app name and new features:
```bash
whats-new --app-title "MyApp" --has-new-features
```
Output example: `We've added exciting new features and fixed some bugs to make MyApp even better.`

### Help
Display usage information:
```bash
whats-new --help
```

## Message Types

The generator includes several types of messages:
1. Basic update messages (bug fixes and improvements)
2. App-specific messages (incorporating your app's name)
3. Feature update messages (when new features are included)

Each type has multiple variations to ensure diverse and natural-sounding update notes.

## Contributing

Feel free to contribute by:
- Adding new message templates
- Improving the code structure
- Suggesting new features
- Reporting bugs

## Authors

mimictear@outlook.com