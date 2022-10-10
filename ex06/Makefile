CC = gcc
CFLAGS = -Wall -Werror -Wextra
HIZ = @$(CC) $(CFLAGS) hiz.c hiz_utils.c -o $(NAME_CL)
NAME_CL = hiz

$(NAME_CL):
	$(HIZ)
	@echo "\n\033[92m $@ built ✅\033[0m\n"
	@echo "\033[92m Bu uygulama KM / H formülünde hızını hesaplar... 🙃\033[0m\n" 
	@echo "\033[92m ./hiz (km) (saat) | yazarak başlatabilirsiniz 🙂\033[0m\n"
	@echo "\033[92m NOT istediğiniz değerleri parantez koymayınız.. 🙂\033[0m\n"
	@echo "\033[92m BASİT SEVİYELİ BİR KOD OLDUĞUNDAN TAM SAYI SAAT GİRİNİZ... 🙃\033[0m\n"

clean:
	@rm -rf hiz
	@echo "\n\033[36m object files removed 👋\033[0m\n"

fclean: clean
	@echo "\n\033[36m executables removed 👋\033[0m\n"

re: clean all

.PHONY: all clean fclean re
