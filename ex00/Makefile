CC = gcc
CFLAGS = -Wall -Werror -Wextra
HELLO = @$(CC) $(CFLAGS) hello.c -o $(NAME_CL)
NAME_CL = hello

all: $(NAME_CL)

$(NAME_CL):
	$(HELLO)
	@echo "\n\033[92m $@ built ✅\033[0m\n"
	@echo "\033[92m ./hello yazarak başlatabilirsiniz 🙂\033[0m\n"

clean:
	@rm -rf hello
	@echo "\n\033[36m object files removed 👋\033[0m\n"

fclean: clean
	@echo "\n\033[36m executables removed 👋\033[0m\n"

re: clean all

.PHONY: all clean fclean re
