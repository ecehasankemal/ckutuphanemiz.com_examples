CC = gcc
CFLAGS = -Wall -Werror -Wextra
YAS = @$(CC) $(CFLAGS) yas.c yas_utils.c ft_printf.c ft_printf_utils.c -o $(NAME_CL)
NAME_CL = yas

$(NAME_CL):
	$(YAS)
	@echo "\n\033[92m $@ built ✅\033[0m\n"
	@echo "\033[92m Bu uygulama YIL olarak yaşınızın diğer türlerini gösterir... 🙃\033[0m\n" 
	@echo "\033[92m ./yas (yaş) | yazarak başlatabilirsiniz 🙂\033[0m\n"
	@echo "\033[92m NOT istediğiniz değerleri parantez koymayınız.. 🙂\033[0m\n"
	@echo "\033[92m BASİT SEVİYELİ BİR KOD OLDUĞUNDAN TAM SAYI SAAT GİRİNİZ... 🙃\033[0m\n"

clean:
	@rm -rf yas
	@echo "\n\033[36m object files removed 👋\033[0m\n"

fclean: clean
	@echo "\n\033[36m executables removed 👋\033[0m\n"

re: clean all

.PHONY: all clean fclean re
