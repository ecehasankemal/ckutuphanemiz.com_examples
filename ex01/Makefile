CC = gcc
CFLAGS = -Wall -Werror -Wextra
OUTPUT = @$(CC) $(CFLAGS) inputcount.c inputcount_utils.c -o $(NAME_CL)
NAME_CL = output

$(NAME_CL):
	$(OUTPUT)
	@echo "\n\033[92m $@ built ✅\033[0m\n"
	@echo "\033[92m ./output (istediğiniz sayı) | yazarak başlatabilirsiniz 🙂\033[0m\n"
	@echo "\033[92m NOT istediğiniz sayı kısmında parantez koymayınız.. 🙂\033[0m\n"

clean:
	@rm -rf output
	@echo "\n\033[36m object files removed 👋\033[0m\n"

fclean: clean
	@echo "\n\033[36m executables removed 👋\033[0m\n"

re: clean all

.PHONY: all clean fclean re
