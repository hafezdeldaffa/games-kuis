#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    // Program Games Kuis

    int menu, kesulitanMtk, mudahMtk, sedangMtk, sulitMtk, kesulitanIPA, sulitIPA;
    int kesulitanIPS, kesulitanPKN;
    char mudahIPA[10], sedangIPA[10], mudahIPS[10], sedangIPS[10], sulitIPS[10], mudahPKN[10], sedangPKN[10], sulitPKN[10];
    char menuMtk[2], menuIPA[2], menuY[2] = "y", menuIPS[2], menuPKN[2];

utama:
    system("cls");
    printf("======================================================\n");
    printf("Selamat datang di Games Quiz Pengetahuan!\n");
    printf("======================================================\n\n");
    printf("Pilih Mata Pelajaran :\n");
    printf("1. Matematika\n");
    printf("2. Ilmu Pengetahuan Alam\n");
    printf("3. Ilmu Pengetahuan Sosial\n");
    printf("4. Pendidikan Kewarganegaraan\n");
    printf("5. Keluar Game\n\n");
    printf("Pilih Mata Pelajaran : ");
    scanf("%i", &menu);
    printf("-------------------------------------------\n\n");

    switch (menu)
    {

        // Matematika
    case 1:
        system("cls");
    mtk:
        printf("Mata Pelajaran Matematika\n\n");
        printf("-----------------------------\n");
        printf("Pilih Tingkat Kesulitan :\n");
        printf("1. Mudah\n");
        printf("2. Sedang\n");
        printf("3. Sulit\n");
        printf("4. Menu Utama\n\n");
        printf("Pilih Tingkat Kesulitan = ");
        scanf("%i", &kesulitanMtk);
        printf("-------------------------------------------\n\n");

        switch (kesulitanMtk)
        {
        case 1:
            system("cls");
            printf("\nAnda Memilih Tingkat Mudah\n");
            printf("\n==========Soal==========\n");
            printf("\nBerapa hasil dari 1000 * 3 / 4 - 33 + 11  : ");
            scanf("%d", &mudahMtk);
            if (mudahMtk == 728)
            {
                printf("Jawaban anda benar!, yaitu : %i\n\n", 728);
            }
            else
            {
                printf("Jawaban anda salah!, yang benar adalah : %i\n", 728);
                printf("Jawaban anda adalah : %i\n\n", mudahMtk);
            }

            printf("Apakah anda ingin kembali ke menu Matematika ? [y/N] = ");
            scanf("%s", &menuMtk);

            if (strcmp(menuY, menuMtk) == 0)
            {
                system("cls");
                goto mtk;
            }
            else
            {
                break;
            }
            break;
        case 2:
            system("cls");
            printf("Anda Memilih Tingkat Sedang\n");
            printf("\n==========Soal==========\n");
            printf("Berapa hasil dari 940 * 5 / 4 + 1000 - 250 : ");
            scanf("%d", &sedangMtk);
            if (sedangMtk == 1925)
            {
                printf("Jawaban anda benar!, yaitu : %i\n\n", 1925);
            }
            else
            {
                printf("Jawaban anda salah!, yang benar adalah : %i\n", 1925);
                printf("Jawaban anda adalah : %i\n\n", sedangMtk);
            }

            printf("Apakah anda ingin kembali ke menu Matematika ? [y/N] = ");
            scanf("%s", &menuMtk);

            if (strcmp(menuY, menuMtk) == 0)
            {
                system("cls");
                goto mtk;
            }
            else
            {
                break;
            }
            break;
        case 3:
            system("cls");
            printf("Anda Memilih Tingkat Sulit\n");
            printf("\n==========Soal==========\n");
            printf("Berapa hasil dari 1500 * 1240 / 100 + 666 - 333 : ");
            scanf("%d", &sulitMtk);
            if (sulitMtk == 18933)
            {
                printf("Jawaban anda benar!, yaitu : %i\n\n", 18933);
            }
            else
            {
                printf("Jawaban anda salah!, yang benar adalah : %i\n", 18933);
                printf("Jawaban anda adalah : %i\n\n", sulitMtk);
            }

            printf("Apakah anda ingin kembali ke menu Matematika ? [y/N] = ");
            scanf("%s", &menuMtk);

            if (strcmp(menuY, menuMtk) == 0)
            {
                system("cls");
                goto mtk;
            }
            else
            {
                break;
            }

            break;
        case 4:
            system("cls");
            goto utama;
            break;
        default:
            printf("Pilihan anda tidak ada");
            system("cls");
            goto mtk;
            break;
        }
        break;

        // Ilmu Pengetahuan Alam
    case 2:
        system("cls");
    ipa:
        printf("Mata Pelajaran Ilmu Pengetahuan Alam\n\n");
        printf("-----------------------------\n");
        printf("Pilih Tingkat Kesulitan :\n");
        printf("1. Mudah\n");
        printf("2. Sedang\n");
        printf("3. Sulit\n");
        printf("4. Menu Utama\n\n");
        printf("Pilih Tingkat Kesulitan = ");
        scanf("%i", &kesulitanIPA);
        printf("-------------------------------------------\n\n");

        switch (kesulitanIPA)
        {
        case 1:
            system("cls");
            printf("\nAnda Memilih Tingkat Mudah\n");
            printf("\n==========Soal==========\n");
            printf("Satuan SI dari sebuah besaran waktu yaitu  : ");
            scanf("%s", &mudahIPA);
            char jwbMudahIPA[10] = "sekon";

            if (strcmp(jwbMudahIPA, mudahIPA) == 0)
            {
                printf("Jawaban anda benar!, yaitu : %s\n\n", jwbMudahIPA);
            }
            else
            {
                printf("Jawaban anda salah!, yang benar adalah : %s\n", jwbMudahIPA);
                printf("Jawaban anda adalah : %s\n\n", mudahIPA);
            }

            printf("Apakah anda ingin kembali ke menu Ilmu Pengetahuan Alam ? [y/N] = ");
            scanf("%s", &menuIPA);

            if (strcmp(menuY, menuIPA) == 0)
            {
                system("cls");
                goto ipa;
            }
            else
            {
                break;
            }
            break;
        case 2:
            system("cls");
            printf("Anda Memilih Tingkat Sedang\n");
            printf("\n==========Soal==========\n");
            printf("Mistar adalah salah satu alat ukur yang digunakan untuk mengukur : ");
            scanf("%s", &sedangIPA);
            char jwbSedangIPA[10] = "panjang";

            if (strcmp(jwbSedangIPA, sedangIPA) == 0)
            {
                printf("Jawaban anda benar!, yaitu : %s\n\n", jwbSedangIPA);
            }
            else
            {
                printf("Jawaban anda salah!, yang benar adalah : %s\n", jwbSedangIPA);
                printf("Jawaban anda adalah : %s\n\n", sedangIPA);
            }

            printf("Apakah anda ingin kembali ke menu Ilmu Pengetahuan Alam ? [y/N] = ");
            scanf("%s", &menuIPA);

            if (strcmp(menuY, menuIPA) == 0)
            {
                system("cls");
                goto ipa;
            }
            else
            {
                break;
            }
            break;
        case 3:
            system("cls");
            printf("Anda Memilih Tingkat Sulit\n");
            printf("\n==========Soal==========\n");
            printf("Sebuah mobil bus melaju dengan sebuah kecepatan 72 km/jam ke arah timur. \nBerapa Kecepatan bus tersebut dalam satuan m/s : ");
            scanf("%d", &sulitIPA);
            if (sulitIPA == 20)
            {
                printf("Jawaban anda benar!, yaitu : %i m/s\n\n", 20);
            }
            else
            {
                printf("Jawaban anda salah!, yang benar adalah : %i m/s\n", 20);
                printf("Jawaban anda adalah : %i m/s\n\n", sulitIPA);
            }

            printf("Apakah anda ingin kembali ke menu Ilmu Pengetahuan Alam ? [y/N] = ");
            scanf("%s", &menuIPA);

            if (strcmp(menuY, menuIPA) == 0)
            {
                system("cls");
                goto ipa;
            }
            else
            {
                break;
            }

            break;
        case 4:
            system("cls");
            goto utama;
            break;
        default:
            printf("Pilihan anda tidak ada");
            system("cls");
            goto ipa;
            break;
        }
        break;

        //Ilmu Pengetahuan Sosial
    case 3:
        system("cls");
    ips:
        printf("Mata Pelajaran Ilmu Pengetahuan Sosial\n\n");
        printf("-----------------------------\n");
        printf("Pilih Tingkat Kesulitan :\n");
        printf("1. Mudah\n");
        printf("2. Sedang\n");
        printf("3. Sulit\n");
        printf("4. Menu Utama\n\n");
        printf("Pilih Tingkat Kesulitan = ");
        scanf("%i", &kesulitanIPS);
        printf("-------------------------------------------\n\n");

        switch (kesulitanIPS)
        {
        case 1:
            system("cls");
            printf("\nAnda Memilih Tingkat Mudah\n");
            printf("\n==========Soal==========\n");
            printf("\nSebuah alat yang ditentukan untuk menentukan arah mata angin adalah  : ");
            scanf("%s", &mudahIPS);
            char jwbMudahIPS[10] = "kompas";

            if (strcmp(jwbMudahIPS, mudahIPS) == 0)
            {
                printf("Jawaban anda benar!, yaitu : %s\n\n", jwbMudahIPS);
            }
            else
            {
                printf("Jawaban anda salah!, yang benar adalah : %s\n", jwbMudahIPS);
                printf("Jawaban anda adalah : %s\n\n", mudahIPS);
            }

            printf("Apakah anda ingin kembali ke menu Ilmu Pengetahuan Sosial ? [y/N] = ");
            scanf("%s", &menuIPS);

            if (strcmp(menuY, menuIPS) == 0)
            {
                system("cls");
                goto ips;
            }
            else
            {
                break;
            }
            break;
        case 2:
            system("cls");
            printf("Anda Memilih Tingkat Sedang\n");
            printf("\n==========Soal==========\n");
            printf("\nIndonesia termasuk ke dalam benua : ");
            scanf("%s", &sedangIPS);
            char jwbSedangIPS[10] = "asia";

            if (strcmp(jwbSedangIPS, sedangIPS) == 0)
            {
                printf("Jawaban anda benar!, yaitu : %s\n\n", jwbSedangIPS);
            }
            else
            {
                printf("Jawaban anda salah!, yang benar adalah : %s\n", jwbSedangIPS);
                printf("Jawaban anda adalah : %s\n\n", sedangIPS);
            }

            printf("Apakah anda ingin kembali ke menu Ilmu Pengetahuan Sosial ? [y/N] = ");
            scanf("%s", &menuIPS);

            if (strcmp(menuY, menuIPS) == 0)
            {
                system("cls");
                goto ips;
            }
            else
            {
                break;
            }
            break;
        case 3:
            system("cls");
            printf("Anda Memilih Tingkat Sulit\n");
            printf("\n==========Soal==========\n");
            printf("\nInteraksi antar ruang dapat terjadi dalam beberapa bentuk. Interaksi dalam bentuk pergerakan manusia disebut : ");
            scanf("%s", &sulitIPS);
            char jwbSulitIPS[10] = "mobilitas";

            if (strcmp(jwbSulitIPS, sulitIPS) == 0)
            {
                printf("Jawaban anda benar!, yaitu : %s\n\n", jwbSulitIPS);
            }
            else
            {
                printf("Jawaban anda salah!, yang benar adalah : %s\n", jwbSulitIPS);
                printf("Jawaban anda adalah : %s\n\n", sulitIPS);
            }

            printf("Apakah anda ingin kembali ke menu Ilmu Pengetahuan Sosial ? [y/N] = ");
            scanf("%s", &menuIPS);

            if (strcmp(menuY, menuIPS) == 0)
            {
                system("cls");
                goto ips;
            }
            else
            {
                break;
            }

            break;
        case 4:
            system("cls");
            goto utama;
            break;
        default:
            printf("Pilihan anda tidak ada");
            system("cls");
            goto ips;
            break;
        }
        break;

        //Pendidikan Kewarganegaraan
    case 4:
        system("cls");
    pkn:
        printf("Pendidikan Kewarganegaraan\n\n");
        printf("-----------------------------\n");
        printf("Pilih Tingkat Kesulitan :\n");
        printf("1. Mudah\n");
        printf("2. Sedang\n");
        printf("3. Sulit\n");
        printf("4. Menu Utama\n\n");
        printf("Pilih Tingkat Kesulitan = ");
        scanf("%i", &kesulitanPKN);
        printf("-------------------------------------------\n\n");

        switch (kesulitanPKN)
        {
        case 1:
            system("cls");
            printf("\nAnda Memilih Tingkat Mudah\n");
            printf("\n==========Soal==========\n");
            printf("\nApa nama badan yang menggantikan BPUPKI : ");
            scanf("%s", &mudahPKN);
            char jwbMudahPKN[10] = "ppki";

            if (strcmp(jwbMudahPKN, mudahPKN) == 0)
            {
                printf("Jawaban anda benar!, yaitu : %s\n\n", jwbMudahPKN);
            }
            else
            {
                printf("Jawaban anda salah!, yang benar adalah : %s\n", jwbMudahPKN);
                printf("Jawaban anda adalah : %s\n\n", mudahPKN);
            }

            printf("Apakah anda ingin kembali ke menu Pendidikan Kewarganegaraan ? [y/N] = ");
            scanf("%s", &menuPKN);

            if (strcmp(menuY, menuPKN) == 0)
            {
                system("cls");
                goto pkn;
            }
            else
            {
                break;
            }
            break;
        case 2:
            system("cls");
            printf("Anda Memilih Tingkat Sedang\n");
            printf("\n==========Soal==========\n");
            printf("\nBentuk negara Indonesia berdasarkan UUDS adalah : ");
            scanf("%s", &sedangPKN);
            char jwbSedangPKN[10] = "kesatuan";

            if (strcmp(jwbSedangPKN, sedangPKN) == 0)
            {
                printf("Jawaban anda benar!, yaitu : %s\n\n", jwbSedangPKN);
            }
            else
            {
                printf("Jawaban anda salah!, yang benar adalah : %s\n", jwbSedangPKN);
                printf("Jawaban anda adalah : %s\n\n", sedangPKN);
            }

            printf("Apakah anda ingin kembali ke menu Pendidikan Kewarganegaraan ? [y/N] = ");
            scanf("%s", &menuPKN);

            if (strcmp(menuY, menuPKN) == 0)
            {
                system("cls");
                goto pkn;
            }
            else
            {
                break;
            }
            break;
        case 3:
            system("cls");
            printf("Anda Memilih Tingkat Sulit\n");
            printf("\n==========Soal==========\n");
            printf("\nPerjanjian kontrak yang diputuskan oleh lebih dari dua negara : ");
            scanf("%s", &sulitPKN);
            char jwbSulitPKN[15] = "multilateral";

            if (strcmp(jwbSulitPKN, sulitPKN) == 0)
            {
                printf("Jawaban anda benar!, yaitu : %s\n\n", jwbSulitPKN);
            }
            else
            {
                printf("Jawaban anda salah!, yang benar adalah : %s\n", jwbSulitPKN);
                printf("Jawaban anda adalah : %s\n\n", sulitPKN);
            }

            printf("Apakah anda ingin kembali ke menu Pendidikan Kewarganegaraan ? [y/N] = ");
            scanf("%s", &menuPKN);

            if (strcmp(menuY, menuPKN) == 0)
            {
                system("cls");
                goto pkn;
            }
            else
            {
                break;
            }

            break;
        case 4:
            system("cls");
            goto utama;
            break;
        default:
            printf("Pilihan anda tidak ada");
            system("cls");
            goto ips;
            break;
        }
        break;
    case 5:
        puts("Anda Memilih Keluar!");
        break;

    default:
        printf("Anda salah memilih menu.");
        goto utama;
        break;
    }
}