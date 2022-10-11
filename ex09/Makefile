CC = gcc
CFLAGS = -Wall -Werror -Wextra
KIYAS = @$(CC) $(CFLAGS) kiyas.c kiyas_utils.c ft_printf.c -o $(NAME_CL)
NAME_CL = kiyas

$(NAME_CL):
	$(KIYAS)
	@echo "\n\033[92m $@ built ✅\033[0m\n"
	@echo "\033[92m Bu uygulama Girilen 2 değeri kıyaslar... 🙃\033[0m\n" 
	@echo "\033[92m ./kiyas (sayı1) (sayı2) | yazarak başlatabilirsiniz 🙂\033[0m\n"
	@echo "\033[92m NOT istediğiniz değerleri parantez koymayınız.. 🙂\033[0m\n"

clean:
	@rm -rf kiyas
	@echo "\n\033[36m object files removed 👋\033[0m\n"

fclean: clean
	@echo "\n\033[36m executables removed 👋\033[0m\n"

re: clean all

.PHONY: all clean fclean re
