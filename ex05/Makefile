CC = gcc
CFLAGS = -Wall -Werror -Wextra
DAIRE = @$(CC) $(CFLAGS) daire.c daire_utils.c -o $(NAME_CL)
NAME_CL = daire

$(NAME_CL):
	$(DAIRE)
	@echo "\n\033[92m $@ built ✅\033[0m\n"
	@echo "\033[92m Bu uygulama dairenin alanını ve çevresini hesaplar vesselam... 🙃\033[0m\n" 
	@echo "\033[92m ./daire (yarıçap) | yazarak başlatabilirsiniz 🙂\033[0m\n"
	@echo "\033[92m NOT istediğiniz yarıcap kısmında parantez koymayınız.. 🙂\033[0m\n"
	@echo "\033[92m FLOAT DEĞER İŞLEMEYİ BİLMEDİĞİMDEN pi Yİ 3 ALDIM... 🙃\033[0m\n"

clean:
	@rm -rf daire
	@echo "\n\033[36m object files removed 👋\033[0m\n"

fclean: clean
	@echo "\n\033[36m executables removed 👋\033[0m\n"

re: clean all

.PHONY: all clean fclean re
