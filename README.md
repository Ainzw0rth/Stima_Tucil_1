# Tugas Kecil Strategi Algoritma - IF2211

Program sederhana dalam bahasa C++ yang mengimplementasikan algoritma Brute Force untuk mencari seluruh solusi dari permainan kartu 24

## Installing / Getting started
Program memerlukan compiler bahasa C/C++. Untuk instalasinya bisa dilihat lebih lanjut pada: https://gcc.gnu.org/install/

## How to run?
Pertama-tama clone dulu repository ini, caranya adalah dengan membuka terminal pada folder dimana kalian mau programnya diclone. Setelah terminal dibuka maka masukan command ini ke terminal:

```shell
git clone https://github.com/Ainzw0rth/Tucil1_13521069.git
```

Setelah repositorynya diclone, buka terminal pada folder repositorynya dan lakukan command-command berikut untuk memindahkan ke directorynya:

```shell
cd Stima_Tucil_1
cd bin
```

Kemudian untuk mengcompile programnya, bisa dilakukan dengan cara memasukkan command berikut:

```shell
g++ ../src/algo.cpp -o driver.exe
```

Untuk menjalankan programnya, maka bisa dilakukan dengan memasukkan command berikut:

```shell
./driver
```

## How to use?
Pertama-tama kita bisa memilih apakah kita ingin memasukkan kartu-kartunya sendiri atau mau kartunya ditentukan secara random atau bahkan keluar dari program.

Jika kita memilih opsi pertama, maka program akan meminta masukan berupa string dari pengguna yang mewakilkan kartu-kartunya. Jika kita memilih opsi kedua, maka program akan menampilkan hasil kartu yang telah dirandom.

Kemudian programnya akan menghitung solusi-solusi yang didapat, dan menampilkan jumlah solusi yang didapat serta menampilkan solusi-solusinya.

Kemudian program akan menanyakan apakah kita ingin menyimpan solusi tersebut kedalam sebuah file. Jika kita memilih Iya, maka program akan meminta masukan berupa namafile untuk menyimpan solusinya yang akan disimpan difolder solusi.

## Made by
Louis Caesa Kesuma (13521069)