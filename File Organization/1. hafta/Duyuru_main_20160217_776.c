
#include <stdio.h>

int main()
{
	int secim, hesap;
	double bakiye;
	char isim[30];
	FILE *cfPtr;

	if ((cfPtr = fopen("musteriler.dat", "r")) == NULL)
		perror("Error in opening file");
	else
	{
		printf("Seciminiz:\n"
			"1-Sifir bakiyesi olan hesaplari listele \n"
			"2-Kredili hesaplari listele \n"
			"3-Borcu olan hesaplari listele \n"
			"4-cikis \n?");
		scanf("%d", &secim);

		while (secim)
		{
			fscanf(cfPtr,"%d%s%lf",&hesap,isim,&bakiye);

			switch (secim)
			{
			case 1:
				printf("\n Sýfýr bakiyesi olan hesaplar:\n");
				while (!feof(cfPtr))
				{
					if (bakiye == 0)
						printf("%-10d%-13s%7.2\n",hesap,isim,bakiye);
					    fscanf(cfPtr,"%d%s%lf",&hesap,isim,&bakiye);
				}
				break;

			case 2:
				printf("\nKredili hesaplarin listesi:\n");

				while (!feof(cfPtr))
				{
					if (bakiye<0)
					{
						printf("%-10d%-13s%7.2f\n",hesap,isim,bakiye);
						fscanf(cfPtr, "%d%s%lf", &hesap, isim, &bakiye);
					}
				}
				break;

			case 3:
				printf("\n Borcu olan hesaplar:\n");

				while (!feof(cfPtr))
				{
					if (bakiye>0)
					{
						printf("%-10d%-13s%7.2f\n", hesap, isim, bakiye);
						fscanf(cfPtr, "%d%s%lf", &hesap, isim, &bakiye);
					}
				}
				break;

			default:
				printf("\n hatalý secim ?:\n");
			}
			rewind(cfPtr);
			printf("\n?");
			scanf("%d",&secim);
		}
		printf("cikis.\n");
		fclose(cfPtr);
	}
	getchar();
	return 0;
}
