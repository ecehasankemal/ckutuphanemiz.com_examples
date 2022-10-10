CC = gcc
CFLAGS = -Wall -Werror -Wextra
DORTGEN = @$(CC) $(CFLAGS) dortgen.c dortgen_utils.c -o $(NAME_CL)
NAME_CL = dortgen

$(NAME_CL):
	$(DORTGEN)
	@echo "\n\033[92m $@ built ✅\033[0m\n"
	@echo "\033[92m Bu uygulama dikdörtgenin alanını ve çevresini hesaplar vesselam... 🙃\033[0m\n" 
	@echo "\033[92m ./dortgen (kenar1) (kenar2) | yazarak başlatabilirsiniz 🙂\033[0m\n"
	@echo "\033[92m NOT istediğiniz kenar kısmınlarında parantez koymayınız.. 🙂\033[0m\n"

clean:
	@rm -rf dortgen
	@echo "\n\033[36m object files removed 👋\033[0m\n"

fclean: clean
	@echo "\n\033[36m executables removed 👋\033[0m\n"

re: clean all

.PHONY: all clean fclean re
