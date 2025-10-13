#include<stdio.h>

#include "debug.h"

extern unsigned char signInputTable1[];
extern unsigned char signInputTable2[];

void PrintPhonemes(const std::vector<uint8_t> &phonemeindex, const std::vector<uint8_t> &phonemeLength, const std::vector<uint8_t> &stress)
{
	int i = 0;
	printf("===========================================\n");

	printf("Internal Phoneme presentation:\n\n");
	printf(" idx    phoneme  length  stress\n");
	printf("------------------------------\n");

	while(i < phonemeindex.size())
	{
		if (phonemeindex[i] < 81)
		{
			printf(" %3i      %c%c      %3i       %i\n",
			phonemeindex[i],
			signInputTable1[phonemeindex[i]],
			signInputTable2[phonemeindex[i]],
			phonemeLength[i],
			stress[i]
			);
		} else
		{
			printf(" %3i      ??      %3i       %i\n", phonemeindex[i], phonemeLength[i], stress[i]);
		}
		i++;
	}
	printf("===========================================\n");
	printf("\n");
}

void PrintOutput(
	const std::vector<uint8_t> &flag,
	const std::vector<uint8_t> *const &f,
	const std::vector<uint8_t> *const &a,
	const std::vector<uint8_t> &p)
{
	int i = 0;
	printf("===========================================\n");
	printf("Final data for speech output:\n\n");
	printf(" flags ampl1 freq1 ampl2 freq2 ampl3 freq3 pitch\n");
	printf("------------------------------------------------\n");
	while(i < flag.size())
	{
		printf("%5i %5i %5i %5i %5i %5i %5i %5i\n", flag[i], a[0][i], f[0][i], a[1][i], f[1][i], a[2][i], f[2][i], p[i]);
		i++;
	}
	printf("===========================================\n");

}

extern unsigned char GetRuleByte(unsigned short mem62, unsigned char Y);

void PrintRule(unsigned short offset)
{
	unsigned char i = 1;
	unsigned char A = 0;
	printf("Applying rule: ");
	do
	{
		A = GetRuleByte(offset, i);
		if ((A&127) == '=') printf(" -> "); else printf("%c", A&127);
		i++;
	} while ((A&128)==0);
	printf("\n");
}
