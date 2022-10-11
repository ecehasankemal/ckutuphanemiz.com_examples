#include "kiyas.h"

// Bu sayfa aşırı kolay print fonksiyonları var
// ft_strlen stringin uzunlugunu döndürmeme yarıyor
// ft_putchar gönderilen karakteri yazıp işlem sayısını döndürüyor
// ft_pustr gönderilen stringi yazdırım işlem sayısını döndürüyor
// ve bu sayfanın bütün olayı bu vesselam...

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
		return (0);
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
	return (count);
}

// Öncelikle bu ilk çözüşüm değil benden daha kolay ve kısa
// yapan birini gördüm ve esinlenlenerek kodu modifiye ettim
// mantıken int değerlerdede taban aritmetiği işler bu yüzden
// int değerler için küçk bir check olması adına ft_int_print
// fonksiyonunu yazdım eğer sayı '-' olursa yazdırıp pozitife
// döndürüp base işlemime atıyorum bu kadar 

int	ft_int_print(int content)
{
	if (content < 0)
	{
		ft_putchar('-');
		if (content == -2147483648)
			return (ft_convert(2147483648, "0123456789") + 1);
		content *= -1;
		return (ft_convert(content, "0123456789") + 1);
	}
	return (ft_convert(content, "0123456789"));
}

// Bu da base işlemimi sağlayan fonksiyonum burda bir buffer oluşturup
// bufferın sonundan itibaren olan kısmını ptr me eşitmedim ki
// geri geri yazdıracak oldugum şeyleri sonran başa dogru ptr min
// içine atabileyim sevgiler vesselam...

int	ft_convert(size_t data, char *base)
{
	char	*buffer;
	char	*ptr;
	int		len;

	buffer = malloc(sizeof(char) * 50);
	len = ft_strlen(base);
	ptr = &buffer[49];
	len = ft_strlen(base);
	*ptr = '\0';
	*--ptr = base[data % len];
	data = data / len;
	while (data != 0)
	{
		*--ptr = base[data % len];
		data = data / len;
	}
	free(buffer);
	return (ft_putstr(ptr));
}

// Bu projede normal putprintlerden farkı sayısal yani char
// ve strin olmayan değerleri de basabilmesi için
// ama şöyle bir durum var kaç tane değer gelecegini bilmiyoruz
// bu sorunu nasıl çözebiliriz belirsiz tane değişkenim var
// bu sorunu macrolarla çözebiliriz macro bir değişklen oluşturur
// daha sonra kuralına göre normal bir değişkenmiş gibi işlem yaparız
// va_list arg diye macro bir değişken oluşturdum
// daha sonra işlemi başlatmamız gerekiyor peki bu nasıl oluyor derseniz
// va_start ile başlatıyoruz macro değişkenimiz i yazıyor sonra
// hangi değişkenden sonrasında olacak onu yazıyoruz ft_printf kodda da
// görüldüğü gibi str diye bir değişken alık genel olayı str mizi
// tek tek döngü ile yazdırıyor olması lakin koşul olarak tip kontrolü
// de yapıyor olması

// ft_type_control gelen karkterimizin belrili tiplerden
// hangisi oldugunu kontrol ediyor misal c == 's' ise bu bir string demek
// ft_pustrye gönderiyor belirsiz değişkenimi şimdi burda bir durum var
// va_list arg mi fonksiyona gönderdim diyelim ki c == 's' peki noluyor
// bizim bir tane de va_arg ımız var macro argüman olarak içine bizim
// macro değişkenimizi ve tipini atıyoruz bu sayede sanki normal bir
// değişkenmişcesine ft_putstr fonksiyonuna gidiyor

// Bu projede jndex değeri çok önemli çünkü printf fonksiyonu bastıgı
// karakter sayısını döndüren int bir fonksiyondur o yüzden bütün
// fonksiyonlarımızı işlem sayısını döndürecek şekilde int bir fonksiyon
// olarak açıyoruz ve bütün işlem adımlarını jndex e atayıp en son
// jndex i return ediyoruz işlem genel olarak bu kadar diğer dosyalarda da
// açıklama olacak merak ettiğini fonksiyona bakabilirsiniz vesselam...

int	ft_type_control(char c, va_list arg)
{
	if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (c == 'd' || c == 'i')
		return (ft_int_print(va_arg(arg, int)));
	else if (c == 'p')
	{
		ft_putstr("0x");
		return (ft_convert(
				va_arg(arg, unsigned long), "0123456789abcdef") + 2);
	}
	else if (c == 'u')
		return (ft_convert(va_arg(arg, unsigned int), "0123456789"));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'x')
		return (ft_convert(va_arg(arg, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_convert(va_arg(arg, unsigned int), "0123456789ABCDEF"));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		index;
	int		jndex;

	va_start(arg, str);
	index = 0;
	jndex = 0;
	while (str[index] != '\0')
	{
		if (str[index + 1] == '\0' && str[index] == '%')
			write(1, &str[index + 1], 1);
		else if (str[index] == '%')
		{
			jndex += ft_type_control(str[index + 1], arg);
			index++;
		}
		else
			jndex += write(1, &str[index], 1);
		index++;
	}
	va_end(arg);
	return (jndex);
}
