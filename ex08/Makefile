CC = gcc
CFLAGS = -Wall -Werror -Wextra
TEKCIFT = @$(CC) $(CFLAGS) tekcift.c tekcift_utils.c -o $(NAME_CL)
NAME_CL = tekcift

$(NAME_CL):
	$(TEKCIFT)
	@echo "\n\033[92m $@ built ✅\033[0m\n"
	@echo "\033[92m Bu uygulama Girilen değer tekmi çiftmi diye bakar... 🙃\033[0m\n" 
	@echo "\033[92m ./tekcift (sayi) | yazarak başlatabilirsiniz 🙂\033[0m\n"
	@echo "\033[92m NOT istediğiniz değerleri parantez koymayınız.. 🙂\033[0m\n"

clean:
	@rm -rf tekcift
	@echo "\n\033[36m object files removed 👋\033[0m\n"

fclean: clean
	@echo "\n\033[36m executables removed 👋\033[0m\n"

re: clean all

.PHONY: all clean fclean re
