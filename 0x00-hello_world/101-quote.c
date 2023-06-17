#include <unistd.h>
#include <string.h>
/**
  *main -Displays text to stderr
  *
  *Return: 1 (Error)
  */
int main(void)
{
const char *message =
"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
size_t length = strlen(message);
write(2, message, length);
return (1);
}
