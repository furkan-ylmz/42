<div align="center">
  <a href="#english">English</a> | <a href="#türkçe">Türkçe</a>
</div>

---

<a name="english"></a>

<div align="center">

# Ecole 42 Istanbul | Archive

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="C Language" />
  <img src="https://img.shields.io/badge/School-42%20Istanbul-000000?style=for-the-badge&logo=42&logoColor=white" alt="42 Istanbul" />
  <img src="https://img.shields.io/badge/Status-Archived-blueviolet?style=for-the-badge" alt="Archived" />
</p>

<p align="left">
This repository is an archive containing the source code of projects and exercises developed during my 42 Istanbul education, covering both the Piscine and the Common Core curriculum.
</p>

</div>

## Directory Structure

```text
.
├── common-core/          # 42 Common Core Projects
│   ├── ft_printf/        # Re-implementation of the printf function (Rank 01)
│   ├── get_next_line/    # Reading a line from a file descriptor (Rank 01)
│   └── libft/            # Standard C library re-implementation (Rank 00)
│
└── piscine/              # 42 Piscine Exercises
    ├── c00/              # Basic C syntax, loops, and character display
    ├── c01/              # Pointers, references, and array manipulation
    ├── c02/              # String manipulation, character checks, and transformations
    ├── c03/              # String comparison and concatenation
    ├── c04/              # String-to-integer conversion (atoi) and base conversions
    ├── c05/              # Mathematical algorithms (Recursion, factorials, prime numbers)
    ├── c06/              # Command line arguments (argc, argv)
    └── c07/              # Dynamic memory allocation (malloc, free, strdup, strjoin)
```

---

## Projects and Content

### 1. Common Core

The Common Core represents the main curriculum of 42.

| Project | Rank | Description |
| :--- | :---: | :--- |
| **[libft](common-core/libft/)** | `Rank 00` | Re-implementation of standard C library (libc) functions (string, memory, character checks) alongside custom utility functions. |
| **[ft_printf](common-core/ft_printf/)** | `Rank 01` | Re-implementation of the printf() function using variadic arguments (va_list), supporting %c, %s, %p, %d, %i, %u, %x, %X, and %% format specifiers. |
| **[get_next_line](common-core/get_next_line/)** | `Rank 01` | Algorithm designed to read text line-by-line from a file descriptor, using static variables and dynamic buffer management (BUFFER_SIZE). |

---

### 2. Piscine

The Piscine is an intensive 4-week C programming bootcamp for 42 admissions.

| Module | Topics Covered |
| :--- | :--- |
| **[C00](piscine/c00/)** | Basic C rules, write system call, character and number printing algorithms (ft_putchar, ft_print_alphabet, ft_print_comb). |
| **[C01](piscine/c01/)** | Pointer mechanics, pointers to pointers, swapping values, reversing and sorting integer arrays (ft_sort_int_tab). |
| **[C02](piscine/c02/)** | String copying, character checks, and string transformations (ft_strcpy, ft_str_is_alpha, ft_strcapitalize). |
| **[C03](piscine/c03/)** | String comparison, concatenation, and searching (ft_strcmp, ft_strncmp, ft_strcat, ft_strncat, ft_strstr). |
| **[C04](piscine/c04/)** | String length calculations, number printing, and string-to-integer conversion (ft_strlen, ft_putnbr, ft_atoi). |
| **[C05](piscine/c05/)** | Iterative and recursive approaches to mathematical algorithms (ft_iterative_factorial, ft_fibonacci, ft_sqrt, ft_is_prime). |
| **[C06](piscine/c06/)** | Working with command line arguments, printing, and sorting program parameters (argc, argv). |
| **[C07](piscine/c07/)** | Dynamic memory management (malloc, free), string duplication, and dynamic concatenation (ft_strdup, ft_range, ft_strjoin). |

---

## Standards and Norminette

All code strictly follows 42 School's Norminette (v3 / v4) coding standard:
- Maximum 25 lines per function.
- Maximum 4 parameters and 5 local variables per function.
- No for, do ... while, switch ... case, or goto statements.
- Mandatory 42 standard file header.

---

## Academic Integrity Disclaimer

> [!WARNING]
> The code in this repository is shared publicly for archival and reference purposes only. If you are a 42 student or Piscine candidate, solving these assignments independently is essential for your learning and peer-evaluations. Direct copying violates 42's academic integrity policies.

---

<br>

<a name="türkçe"></a>

<div align="center">

# Ecole 42 Istanbul | Arşiv

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="C Language" />
  <img src="https://img.shields.io/badge/School-42%20Istanbul-000000?style=for-the-badge&logo=42&logoColor=white" alt="42 Istanbul" />
  <img src="https://img.shields.io/badge/Status-Archived-blueviolet?style=for-the-badge" alt="Archived" />
</p>

<p align="left">
Bu depo, 42 İstanbul eğitim sürecimde geliştirdiğim Havuz ve Ana Eğitim müfredatındaki proje ve egzersizlerin kaynak kodlarını içeren bir arşivdir.
</p>

</div>

## Dizin Yapısı

```text
.
├── common-core/          # 42 Common Core Projeleri
│   ├── ft_printf/        # printf fonksiyonunun yeniden yazımı (Rank 01)
│   ├── get_next_line/    # Dosya tanımlayıcısından satır okuma fonksiyonu (Rank 01)
│   └── libft/            # Standart C kütüphanesi yeniden yazımı (Rank 00)
│
└── piscine/              # 42 Piscine Egzersizleri
    ├── c00/              # Temel C sözdizimi, döngüler ve karakter yazdırma
    ├── c01/              # İşaretçiler, referanslar ve dizi işlemleri
    ├── c02/              # String manipülasyonu, karakter kontrolleri ve dönüşümler
    ├── c03/              # String karşılaştırma ve birleştirme işlemleri
    ├── c04/              # String-sayı dönüşümleri (atoi) ve taban işlemleri
    ├── c05/              # Matematiksel algoritmalar (Özyineleme, faktöriyel, asal sayılar)
    ├── c06/              # Komut satırı argümanları (argc, argv)
    └── c07/              # Dinamik bellek yönetimi (malloc, free, strdup, strjoin)
```

---

## Projeler ve İçerik

### 1. Common Core

Common Core, 42 müfredatının ana çekirdek eğitimini oluşturan projeler bütünüdür.

| Proje | Rank | Açıklama |
| :--- | :---: | :--- |
| **[libft](common-core/libft/)** | `Rank 00` | Standart C kütüphanesi (libc) fonksiyonlarının (string, bellek, karakter kontrolleri) ve yardımcı fonksiyonların sıfırdan yazımı. |
| **[ft_printf](common-core/ft_printf/)** | `Rank 01` | printf() fonksiyonunun değişken parametreli fonksiyon (va_list) mantığı ile %c, %s, %p, %d, %i, %u, %x, %X ve %% format belirteçlerini destekleyecek şekilde sıfırdan yazımı. |
| **[get_next_line](common-core/get_next_line/)** | `Rank 01` | Bir dosya tanımlayıcısından (file descriptor) satır satır okuma yapan, statik değişkenler ve dinamik tampon yönetimi (BUFFER_SIZE) içeren algoritma. |

---

### 2. Piscine

Piscine, 42 kabul sürecindeki 4 haftalık yoğun C programlama havuz eğitimidir.

| Modül | Konu Başlıkları |
| :--- | :--- |
| **[C00](piscine/c00/)** | Temel C kuralları, write sistem çağrısı, karakter ve sayı yazdırma algoritmaları (ft_putchar, ft_print_alphabet, ft_print_comb). |
| **[C01](piscine/c01/)** | İşaretçi mantığı, işaretçi işaretçileri, değer takası, tamsayı dizilerini ters çevirme ve sıralama (ft_sort_int_tab). |
| **[C02](piscine/c02/)** | String kopyalama, karakter kontrolleri ve string dönüşümleri (ft_strcpy, ft_str_is_alpha, ft_strcapitalize). |
| **[C03](piscine/c03/)** | String karşılaştırma, birleştirme ve arama işlemleri (ft_strcmp, ft_strncmp, ft_strcat, ft_strncat, ft_strstr). |
| **[C04](piscine/c04/)** | String uzunluğu hesaplama, sayı yazdırma ve string-sayı dönüşümü (ft_strlen, ft_putnbr, ft_atoi). |
| **[C05](piscine/c05/)** | Matematiksel problemlere iteratif ve rekürsif yaklaşımlar (ft_iterative_factorial, ft_fibonacci, ft_sqrt, ft_is_prime). |
| **[C06](piscine/c06/)** | Komut satırı argümanları ile çalışma, program parametrelerini yazdırma ve sıralama (argc, argv). |
| **[C07](piscine/c07/)** | Dinamik bellek yönetimi (malloc, free), string kopyalama ve dinamik birleştirme (ft_strdup, ft_range, ft_strjoin). |

---

## Standartlar ve Norminette

Tüm kodlar 42 Okulu'nun Norminette (v3 / v4) kod standartlarına uygun olarak yazılmıştır:
- Fonksiyon başına en fazla 25 satır.
- Fonksiyon başına en fazla 4 parametre ve 5 yerel değişken.
- for, do ... while, switch ... case veya goto ifadelerinin kullanılmaması.
- Standart 42 dosya başlığı (header) kullanımı.

---

## Akademik Dürüstlük Uyarısı

> [!WARNING]
> Bu depodaki kodlar referans ve arşiv amacıyla açık kaynak olarak paylaşılmıştır. Eğer 42 öğrencisi veya havuz adayıysanız, projeleri kendiniz çözmeniz öğrenme süreciniz ve akran değerlendirmeleri (peer-evaluation) açısından kritiktir. Kodları doğrudan kopyalamak 42 akademik dürüstlük politikalarına aykırıdır.
