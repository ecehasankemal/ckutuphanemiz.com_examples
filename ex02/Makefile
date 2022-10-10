CC = gcc
CFLAGS = -Wall -Werror -Wextra
TOPLA = @$(CC) $(CFLAGS) topla.c topla_utils.c -o $(NAME_CL)
NAME_CL = topla

$(NAME_CL):
	$(TOPLA)
	@echo "\n\033[92m $@ built ✅\033[0m\n"
	@echo "\033[92m ./topla (sayı1) (sayı2) | yazarak başlatabilirsiniz 🙂\033[0m\n"
	@echo "\033[92m NOT sayılar kısmında parantez koymayınız.. 🙂\033[0m\n"

clean:
	@rm -rf topla
	@echo "\n\033[36m object files removed 👋\033[0m\n"

fclean: clean
	@echo "\n\033[36m executables removed 👋\033[0m\n"

re: clean all

.PHONY: all clean fclean re
