#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

// Array of basic update messages
const char* basic_messages[] = {
    "Bug fixes.",
    "Bug fixes and performance improvements.",
    "This version includes bug fixes and performance improvements.",
    "Bug fixes and minor improvements.",
    "Several bug fixes and usability improvements.",
    "Bug fixes, minor improvements, and more.",
    "Bug fixes and performance enhancements, as always!",
    "We polished a few things, fixed bugs and made some performance improvements."
};

// Array of messages that include app title placeholder
const char* app_title_messages[] = {
    "We made improvements and squashed bugs so %s is even better for you.",
    "We've made some tweaks and improvements under the hood in this version to make your %s experience even smoother.",
    "We made improvements and fixed bugs to give you the best %s experience.",
    "We update our app all the time in order to make your %s experience better."
};

// Array of messages that mention new features
const char* new_features_messages[] = {
    "This version includes bug fixes, new features and performance improvements.",
    "We've added exciting new features and fixed some bugs to make %s even better.",
    "New features, bug fixes, and performance improvements await you in this update.",
    "Check out the new features we've added while maintaining the smooth %s experience you love."
};

void print_usage() {
    printf("Usage: whats-new-gen [--app-title APP_NAME] [--has-new-features]\n");
    printf("Generate random app update messages.\n\n");
    printf("Options:\n");
    printf("  --app-title APP_NAME    Include app name in the message\n");
    printf("  --has-new-features      Include mention of new features\n");
}

int main(int argc, char *argv[]) {
    char* app_title = NULL;
    bool has_new_features = false;

    // Parse command line arguments
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--app-title") == 0 && i + 1 < argc) {
            app_title = argv[++i];
        } else if (strcmp(argv[i], "--has-new-features") == 0) {
            has_new_features = true;
        } else if (strcmp(argv[i], "--help") == 0) {
            print_usage();
            return 0;
        }
    }

    // Seed random number generator
    srand(time(NULL));

    // Select appropriate message array and get its size
    const char** messages;
    size_t message_count;
    
    if (has_new_features) {
        messages = new_features_messages;
        message_count = sizeof(new_features_messages) / sizeof(new_features_messages[0]);
    } else if (app_title != NULL) {
        messages = app_title_messages;
        message_count = sizeof(app_title_messages) / sizeof(app_title_messages[0]);
    } else {
        messages = basic_messages;
        message_count = sizeof(basic_messages) / sizeof(basic_messages[0]);
    }

    // Get random message
    int index = rand() % message_count;
    
    // Print the message
    if (app_title != NULL) {
        printf(messages[index], app_title);
    } else {
        printf("%s", messages[index]);
    }
    printf("\n");

    return 0;
}