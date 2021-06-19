#include<unistd.h>
void	ft_putnbr(int nb);
void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	*********nbrI;
	int	********nbrH;
	int	*******nbrG;
	int	******nbrF;
	int	*****nbrE;
	int	****nbrD;
	int	***nbrC;
	int	**nbrB;
	int	*nbrA;
	int	a;

	nbrA = &a;
	nbrB = &nbrA;
	nbrC = &nbrB;
	nbrD = &nbrC;
	nbrE = &nbrD;
	nbrF = &nbrE;
	nbrG = &nbrF;
	nbrH = &nbrG;
	nbrI = &nbrH;
	a = 0;
	ft_ultimate_ft(nbrI);
	ft_putnbr(*********nbrI);
}
