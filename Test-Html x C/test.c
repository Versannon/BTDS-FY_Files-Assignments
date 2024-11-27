#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *query = getenv("QUERY_STRING"); // Get input from QUERY_STRING
    char input[100] = {0};

    if (query) {
        sscanf(query, "input_value=%s", input); // Extract input_value
    }

    // Output HTTP headers and content
    printf("Content-Type: text/html\n\n");
    printf("<html><body>");
    printf("<h1>Received Input: %s</h1>", input);
    printf("<p>Result: %d</p>", atoi(input) * 2); // Example processing
    printf("</body></html>");

    return 0;
}
