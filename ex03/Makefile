CC = gcc
CFLAGS = -Wall -Werror -Wextra
KARE = @$(CC) $(CFLAGS) kare.c kare_utils.c -o $(NAME_CL)
NAME_CL = kare

$(NAME_CL):
	$(KARE)
	@echo "\n\033[92m $@ built ✅\033[0m\n"
	@echo "\033[92m Bu uygulama karenin alanını ve çevresini hesaplar vesselam... 🙃\033[0m\n" 
	@echo "\033[92m ./kare (sayı değeri) | yazarak başlatabilirsiniz 🙂\033[0m\n"
	@echo "\033[92m NOT istediğiniz sayı kısmında parantez koymayınız.. 🙂\033[0m\n"

clean:
	@rm -rf kare
	@echo "\n\033[36m object files removed 👋\033[0m\n"

fclean: clean
	@echo "\n\033[36m executables removed 👋\033[0m\n"

re: clean all

.PHONY: all clean fclean re
