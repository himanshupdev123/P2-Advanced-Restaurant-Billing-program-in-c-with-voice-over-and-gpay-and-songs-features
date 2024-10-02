#include <stdio.h>
#include <stdlib.h>
#include<graphics.h>
#include<conio.h>
#include <windows.h>
#include <MMsystem.h>
int main()
{
	int opt,q1=0,q2=0,q3=0,q4=0,q5=0,q6=0,ch=0,idly=0,vada=0,dosa=0,coffee=0,tea=0,juice=0,can,cidly,cvada,cdosa,ccoffee,ctea,cjuice,pay,sng;
	float tot=0,sub=0;
	printf("\n welcome to Nala's kitchen");
	PlaySound(TEXT("welcome.wav"), NULL, SND_SYNC);
	label:
	printf("\n press 1 for idli - 40/- \n press 2 for vada - 20/- \n press 3 for dosa - 50/- \n press 4 for coffee - 15/- \n press 5 for tea - 15/- \n press 6 for juice - 30/- \n please note that 5 percent GST is included in your bill");
	PlaySound(TEXT("order.wav"), NULL, SND_SYNC);
	scanf("%d",&opt);
	system("CLS");
	switch(opt)
	{
		case 1:
			printf("\nenter the number of idlis");
			PlaySound(TEXT("noidliys.wav"), NULL, SND_SYNC);
			scanf("%d",&q1);
			system("CLS");
			idly+=q1;
			order:
			printf("\n do you want to order more ? \n press 1 to order \n press 2 for billing\n press 3 to cancel an order");
			PlaySound(TEXT("ordermore.wav"), NULL, SND_SYNC);
			scanf("%d",&ch);
			system("CLS");
			if (ch==1)
			{
			goto label;
			}
			else if (ch==2)
			{
				goto bill;
			}
			else if (ch==3)
			{
				cancel:
				printf("\n which order do you want to cancel ?");
				PlaySound(TEXT("cancel.wav"), NULL, SND_SYNC);
				if(idly>0)
                {
                    printf(" \n press 1 for idli");
                    PlaySound(TEXT("14idly.wav"), NULL, SND_SYNC);
                }

				if(vada>0)
				{

				printf(" \n press 2 for vada");
				PlaySound(TEXT("24vada.wav"), NULL, SND_SYNC);
				}
				if(dosa>0)
                {
                    printf(" \n press 3 for dosa");
                    PlaySound(TEXT("34dosa.wav"), NULL, SND_SYNC);
                }
				if(coffee>0)
                {
                 printf(" \n press 4 for coffee");
                 PlaySound(TEXT("44coffee.wav"), NULL, SND_SYNC);
                }
				if(tea>0)
                {
                 printf(" \n press 5 for tea");
                 PlaySound(TEXT("54tea.wav"), NULL, SND_SYNC);
                }
				if(juice>0)
                {
                    printf(" \n press 6 for juice");
                    PlaySound(TEXT("64juice.wav"), NULL, SND_SYNC);
                }

				scanf("%d",&can);
				system("CLS");
				switch(can)
				{
					case 1:
						printf("\n how many idlis you want to cancel ?");PlaySound(TEXT("canidly.wav"), NULL, SND_SYNC);
						scanf("%d",&cidly);
						system("CLS");
						idly-=cidly;
						goto order;
						break;
						case 2:
						printf("\n how many vadas you want to cancel ?");PlaySound(TEXT("canvada.wav"), NULL, SND_SYNC);
						scanf("%d",&cvada);
						system("CLS");
						vada-=cvada;
						goto order;
						break;
						case 3:
						printf("\n how many dosas you want to cancel ?");PlaySound(TEXT("candosa.wav"), NULL, SND_SYNC);
						scanf("%d",&cdosa);
						system("CLS");
						dosa-=cdosa;
						goto order;
						break;
						case 4:
						printf("\n how many coffees you want to cancel ?");PlaySound(TEXT("cancoffee.wav"), NULL, SND_SYNC);
						scanf("%d",&ccoffee);
						system("CLS");
						coffee-=ccoffee;
						goto order;
						break;
						case 5:
						printf("\n how many teas you want to cancel ?");PlaySound(TEXT("cantea.wav"), NULL, SND_SYNC);
						scanf("%d",&ctea);
						system("CLS");
						tea-=ctea;
						goto order;
						break;
						case 6:
						printf("\n how many juices you want to cancel ?");PlaySound(TEXT("canjuice.wav"), NULL, SND_SYNC);
						scanf("%d",&cjuice);
						system("CLS");
						juice-=cjuice;
						goto order;
						break;
						default:
							printf("\ninvalid opition, kindly choose the corect option to cancel");PlaySound(TEXT("caninvalid.wav"), NULL, SND_SYNC);
							goto cancel;
							break;
				}

			}
			else goto invalid;

			break;

			case 2:
			printf("\nenter the number of vadas");PlaySound(TEXT("novadas.wav"), NULL, SND_SYNC);
			scanf("%d",&q2);
			system("CLS");
			vada+=q2;
				printf("\n do you want to order more ? \n press 1 to order \n press 2 for billing\n press 3 to cancel an order");
				PlaySound(TEXT("ordermore.wav"), NULL, SND_SYNC);
			scanf("%d",&ch);
			system("CLS");
			if (ch==1)
			{
			goto label;
			}
			else if (ch==2)
			{
				goto bill;
			}
			else if (ch==3)
			{
				printf("\n which order do you want to cancel ?");
				PlaySound(TEXT("cancel.wav"), NULL, SND_SYNC);
				if(idly>0)
                {
                    printf(" \n press 1 for idli");
                    PlaySound(TEXT("14idly.wav"), NULL, SND_SYNC);
                }

				if(vada>0)
				{

				printf(" \n press 2 for vada");
				PlaySound(TEXT("24vada.wav"), NULL, SND_SYNC);
				}
				if(dosa>0)
                {
                    printf(" \n press 3 for dosa");
                    PlaySound(TEXT("34dosa.wav"), NULL, SND_SYNC);
                }
				if(coffee>0)
                {
                 printf(" \n press 4 for coffee");
                 PlaySound(TEXT("44coffee.wav"), NULL, SND_SYNC);
                }
				if(tea>0)
                {
                 printf(" \n press 5 for tea");
                 PlaySound(TEXT("54tea.wav"), NULL, SND_SYNC);
                }
				if(juice>0)
                {
                    printf(" \n press 6 for juice");
                    PlaySound(TEXT("64juice.wav"), NULL, SND_SYNC);
                }

				scanf("%d",&can);
				system("CLS");
				switch(can)
				{
					case 1:
						printf("\n how many idlis you want to cancel ?");PlaySound(TEXT("canidly.wav"), NULL, SND_SYNC);
						scanf("%d",&cidly);
						system("CLS");
						idly-=cidly;
						goto order;
						break;
						case 2:
						printf("\n how many vadas you want to cancel ?");PlaySound(TEXT("canvada.wav"), NULL, SND_SYNC);
						scanf("%d",&cvada);
						system("CLS");
						vada-=cvada;
						goto order;
						break;
						case 3:
						printf("\n how many dosas you want to cancel ?");PlaySound(TEXT("candosa.wav"), NULL, SND_SYNC);
						scanf("%d",&cdosa);
						system("CLS");
						dosa-=cdosa;
						goto order;
						break;
						case 4:
						printf("\n how many coffees you want to cancel ?");PlaySound(TEXT("cancoffee.wav"), NULL, SND_SYNC);
						scanf("%d",&ccoffee);
						system("CLS");
						coffee-=ccoffee;
						goto order;
						break;
						case 5:
						printf("\n how many teas you want to cancel ?");PlaySound(TEXT("cantea.wav"), NULL, SND_SYNC);
						scanf("%d",&ctea);
						system("CLS");
						tea-=ctea;
						goto order;
						break;
						case 6:
						printf("\n how many juices you want to cancel ?");PlaySound(TEXT("canjuice.wav"), NULL, SND_SYNC);
						scanf("%d",&cjuice);
						system("CLS");
						juice-=cjuice;
						goto order;
						break;
						default:
							printf("\ninvalid opition, kindly choose the corect option to cancel");PlaySound(TEXT("caninvalid.wav"), NULL, SND_SYNC);
							goto cancel;
							break;
				}

			}
			else goto invalid;

			break;

			case 3:
			printf("\nenter the number of dosas");PlaySound(TEXT("nodosas.wav"), NULL, SND_SYNC);
			scanf("%d",&q3);system("CLS");
			dosa+=q3;
					printf("\n do you want to order more ? \n press 1 to order \n press 2 for billing\n press 3 to cancel an order");
			PlaySound(TEXT("ordermore.wav"), NULL, SND_SYNC);
			scanf("%d",&ch);system("CLS");
			if (ch==1)
			{
			goto label;
			}
			else if (ch==2)
			{
				goto bill;
			}
			else if (ch==3)
			{
				printf("\n which order do you want to cancel ?");
				PlaySound(TEXT("cancel.wav"), NULL, SND_SYNC);
				if(idly>0)
                {
                    printf(" \n press 1 for idli");
                    PlaySound(TEXT("14idly.wav"), NULL, SND_SYNC);
                }

				if(vada>0)
				{

				printf(" \n press 2 for vada");
				PlaySound(TEXT("24vada.wav"), NULL, SND_SYNC);
				}
				if(dosa>0)
                {
                    printf(" \n press 3 for dosa");
                    PlaySound(TEXT("34dosa.wav"), NULL, SND_SYNC);
                }
				if(coffee>0)
                {
                 printf(" \n press 4 for coffee");
                 PlaySound(TEXT("44coffee.wav"), NULL, SND_SYNC);
                }
				if(tea>0)
                {
                 printf(" \n press 5 for tea");
                 PlaySound(TEXT("54tea.wav"), NULL, SND_SYNC);
                }
				if(juice>0)
                {
                    printf(" \n press 6 for juice");
                    PlaySound(TEXT("64juice.wav"), NULL, SND_SYNC);
                }

				scanf("%d",&can);system("CLS");
				switch(can)
				{
					case 1:
						printf("\n how many idlis you want to cancel ?");PlaySound(TEXT("canidly.wav"), NULL, SND_SYNC);
						scanf("%d",&cidly);
						system("CLS");
						idly-=cidly;
						goto order;
						break;
						case 2:
						printf("\n how many vadas you want to cancel ?");PlaySound(TEXT("canvada.wav"), NULL, SND_SYNC);
						scanf("%d",&cvada);
						system("CLS");
						vada-=cvada;
						goto order;
						break;
						case 3:
						printf("\n how many dosas you want to cancel ?");PlaySound(TEXT("candosa.wav"), NULL, SND_SYNC);
						scanf("%d",&cdosa);
						system("CLS");
						dosa-=cdosa;
						goto order;
						break;
						case 4:
						printf("\n how many coffees you want to cancel ?");PlaySound(TEXT("cancoffee.wav"), NULL, SND_SYNC);
						scanf("%d",&ccoffee);
						system("CLS");
						coffee-=ccoffee;
						goto order;
						break;
						case 5:
						printf("\n how many teas you want to cancel ?");PlaySound(TEXT("cantea.wav"), NULL, SND_SYNC);
						scanf("%d",&ctea);
						system("CLS");
						tea-=ctea;
						goto order;
						break;
						case 6:
						printf("\n how many juices you want to cancel ?");PlaySound(TEXT("canjuice.wav"), NULL, SND_SYNC);
						scanf("%d",&cjuice);
						system("CLS");
						juice-=cjuice;
						goto order;
						break;
						default:
							printf("\ninvalid opition, kindly choose the corect option to cancel");PlaySound(TEXT("caninvalid.wav"), NULL, SND_SYNC);
							goto cancel;
							break;
				}

			}
			else goto invalid;
			break;

			case 4:
			printf("\nenter the number of coffees");PlaySound(TEXT("nocoffee.wav"), NULL, SND_SYNC);
			scanf("%d",&q4);system("CLS");
			coffee+=q4;
					printf("\n do you want to order more ? \n press 1 to order \n press 2 for billing\n press 3 to cancel an order");
			PlaySound(TEXT("ordermore.wav"), NULL, SND_SYNC);
			scanf("%d",&ch);system("CLS");
			if (ch==1)
			{
			goto label;
			}
			else if (ch==2)
			{
				goto bill;
			}
			else if (ch==3)
			{
				printf("\n which order do you want to cancel ?");
				PlaySound(TEXT("cancel.wav"), NULL, SND_SYNC);
				if(idly>0)
                {
                    printf(" \n press 1 for idli");
                    PlaySound(TEXT("14idly.wav"), NULL, SND_SYNC);
                }

				if(vada>0)
				{

				printf(" \n press 2 for vada");
				PlaySound(TEXT("24vada.wav"), NULL, SND_SYNC);
				}
				if(dosa>0)
                {
                    printf(" \n press 3 for dosa");
                    PlaySound(TEXT("34dosa.wav"), NULL, SND_SYNC);
                }
				if(coffee>0)
                {
                 printf(" \n press 4 for coffee");
                 PlaySound(TEXT("44coffee.wav"), NULL, SND_SYNC);
                }
				if(tea>0)
                {
                 printf(" \n press 5 for tea");
                 PlaySound(TEXT("54tea.wav"), NULL, SND_SYNC);
                }
				if(juice>0)
                {
                    printf(" \n press 6 for juice");
                    PlaySound(TEXT("64juice.wav"), NULL, SND_SYNC);
                }

				scanf("%d",&can);system("CLS");
				switch(can)
				{
					case 1:
						printf("\n how many idlis you want to cancel ?");PlaySound(TEXT("canidly.wav"), NULL, SND_SYNC);
						scanf("%d",&cidly);
						system("CLS");
						idly-=cidly;
						goto order;
						break;
						case 2:
						printf("\n how many vadas you want to cancel ?");PlaySound(TEXT("canvada.wav"), NULL, SND_SYNC);
						scanf("%d",&cvada);
						system("CLS");
						vada-=cvada;
						goto order;
						break;
						case 3:
						printf("\n how many dosas you want to cancel ?");PlaySound(TEXT("candosa.wav"), NULL, SND_SYNC);
						scanf("%d",&cdosa);
						system("CLS");
						dosa-=cdosa;
						goto order;
						break;
						case 4:
						printf("\n how many coffees you want to cancel ?");PlaySound(TEXT("cancoffee.wav"), NULL, SND_SYNC);
						scanf("%d",&ccoffee);
						system("CLS");
						coffee-=ccoffee;
						goto order;
						break;
						case 5:
						printf("\n how many teas you want to cancel ?");PlaySound(TEXT("cantea.wav"), NULL, SND_SYNC);
						scanf("%d",&ctea);
						system("CLS");
						tea-=ctea;
						goto order;
						break;
						case 6:
						printf("\n how many juices you want to cancel ?");PlaySound(TEXT("canjuice.wav"), NULL, SND_SYNC);
						scanf("%d",&cjuice);
						system("CLS");
						juice-=cjuice;
						goto order;
						break;
						default:
							printf("\ninvalid opition, kindly choose the corect option to cancel");PlaySound(TEXT("caninvalid.wav"), NULL, SND_SYNC);
							goto cancel;
							break;
				}

			}
			else goto invalid;
			break;

			case 5:
			printf("\nenter the number of teas");PlaySound(TEXT("noteas.wav"), NULL, SND_SYNC);
			scanf("%d",&q5);system("CLS");
			tea+=q5;
				printf("\n do you want to order more ? \n press 1 to order \n press 2 for billing\n press 3 to cancel an order");
			PlaySound(TEXT("ordermore.wav"), NULL, SND_SYNC);
			scanf("%d",&ch);system("CLS");
			if (ch==1)
			{
			goto label;
			}
			else if (ch==2)
			{
				goto bill;
			}
			else if (ch==3)
			{printf("\n which order do you want to cancel ?");
				PlaySound(TEXT("cancel.wav"), NULL, SND_SYNC);
				if(idly>0)
                {
                    printf(" \n press 1 for idli");
                    PlaySound(TEXT("14idly.wav"), NULL, SND_SYNC);
                }

				if(vada>0)
				{

				printf(" \n press 2 for vada");
				PlaySound(TEXT("24vada.wav"), NULL, SND_SYNC);
				}
				if(dosa>0)
                {
                    printf(" \n press 3 for dosa");
                    PlaySound(TEXT("34dosa.wav"), NULL, SND_SYNC);
                }
				if(coffee>0)
                {
                 printf(" \n press 4 for coffee");
                 PlaySound(TEXT("44coffee.wav"), NULL, SND_SYNC);
                }
				if(tea>0)
                {
                 printf(" \n press 5 for tea");
                 PlaySound(TEXT("54tea.wav"), NULL, SND_SYNC);
                }
				if(juice>0)
                {
                    printf(" \n press 6 for juice");
                    PlaySound(TEXT("64juice.wav"), NULL, SND_SYNC);
                }

				scanf("%d",&can);system("CLS");
			switch(can)
				{
					case 1:
						printf("\n how many idlis you want to cancel ?");PlaySound(TEXT("canidly.wav"), NULL, SND_SYNC);
						scanf("%d",&cidly);
						system("CLS");
						idly-=cidly;
						goto order;
						break;
						case 2:
						printf("\n how many vadas you want to cancel ?");PlaySound(TEXT("canvada.wav"), NULL, SND_SYNC);
						scanf("%d",&cvada);
						system("CLS");
						vada-=cvada;
						goto order;
						break;
						case 3:
						printf("\n how many dosas you want to cancel ?");PlaySound(TEXT("candosa.wav"), NULL, SND_SYNC);
						scanf("%d",&cdosa);
						system("CLS");
						dosa-=cdosa;
						goto order;
						break;
						case 4:
						printf("\n how many coffees you want to cancel ?");PlaySound(TEXT("cancoffee.wav"), NULL, SND_SYNC);
						scanf("%d",&ccoffee);
						system("CLS");
						coffee-=ccoffee;
						goto order;
						break;
						case 5:
						printf("\n how many teas you want to cancel ?");PlaySound(TEXT("cantea.wav"), NULL, SND_SYNC);
						scanf("%d",&ctea);
						system("CLS");
						tea-=ctea;
						goto order;
						break;
						case 6:
						printf("\n how many juices you want to cancel ?");PlaySound(TEXT("canjuice.wav"), NULL, SND_SYNC);
						scanf("%d",&cjuice);
						system("CLS");
						juice-=cjuice;
						goto order;
						break;
						default:
							printf("\ninvalid opition, kindly choose the corect option to cancel");PlaySound(TEXT("caninvalid.wav"), NULL, SND_SYNC);
							goto cancel;
							break;
				}

			}
			else goto invalid;
			break;

			case 6:
			printf("\nenter the number of juices ");PlaySound(TEXT("nojuice.wav"), NULL, SND_SYNC);
			scanf("%d",&q6);system("CLS");
			juice+=q6;
					printf("\n do you want to order more ? \n press 1 to order \n press 2 for billing\n press 3 to cancel an order");
           PlaySound(TEXT("ordermore.wav"), NULL, SND_SYNC);
			scanf("%d",&ch);system("CLS");
			if (ch==1)
			{
			goto label;
			}
			else if (ch==2)
			{
				goto bill;
			}
			else if (ch==3)
			{
				printf("\n which order do you want to cancel ?");
				PlaySound(TEXT("cancel.wav"), NULL, SND_SYNC);
				if(idly>0)
                {
                    printf(" \n press 1 for idli");
                    PlaySound(TEXT("14idly.wav"), NULL, SND_SYNC);
                }

				if(vada>0)
				{

				printf(" \n press 2 for vada");
				PlaySound(TEXT("24vada.wav"), NULL, SND_SYNC);
				}
				if(dosa>0)
                {
                    printf(" \n press 3 for dosa");
                    PlaySound(TEXT("34dosa.wav"), NULL, SND_SYNC);
                }
				if(coffee>0)
                {
                 printf(" \n press 4 for coffee");
                 PlaySound(TEXT("44coffee.wav"), NULL, SND_SYNC);
                }
				if(tea>0)
                {
                 printf(" \n press 5 for tea");
                 PlaySound(TEXT("54tea.wav"), NULL, SND_SYNC);
                }
				if(juice>0)
                {
                    printf(" \n press 6 for juice");
                    PlaySound(TEXT("64juice.wav"), NULL, SND_SYNC);
                }

				scanf("%d",&can);system("CLS");
				switch(can)
				{
					case 1:
						printf("\n how many idlis you want to cancel ?");PlaySound(TEXT("canidly.wav"), NULL, SND_SYNC);
						scanf("%d",&cidly);
						system("CLS");
						idly-=cidly;
						goto order;
						break;
						case 2:
						printf("\n how many vadas you want to cancel ?");PlaySound(TEXT("canvada.wav"), NULL, SND_SYNC);
						scanf("%d",&cvada);
						system("CLS");
						vada-=cvada;
						goto order;
						break;
						case 3:
						printf("\n how many dosas you want to cancel ?");PlaySound(TEXT("candosa.wav"), NULL, SND_SYNC);
						scanf("%d",&cdosa);
						system("CLS");
						dosa-=cdosa;
						goto order;
						break;
						case 4:
						printf("\n how many coffees you want to cancel ?");PlaySound(TEXT("cancoffee.wav"), NULL, SND_SYNC);
						scanf("%d",&ccoffee);
						system("CLS");
						coffee-=ccoffee;
						goto order;
						break;
						case 5:
						printf("\n how many teas you want to cancel ?");PlaySound(TEXT("cantea.wav"), NULL, SND_SYNC);
						scanf("%d",&ctea);
						system("CLS");
						tea-=ctea;
						goto order;
						break;
						case 6:
						printf("\n how many juices you want to cancel ?");PlaySound(TEXT("canjuice.wav"), NULL, SND_SYNC);
						scanf("%d",&cjuice);
						system("CLS");
						juice-=cjuice;
						goto order;
						break;
						default:
							printf("\ninvalid opition, kindly choose the corect option to cancel");PlaySound(TEXT("caninvalid.wav"), NULL, SND_SYNC);
							goto cancel;
							break;
				}

			}
			else goto invalid;
			break;

			default :
				invalid:
				printf("we understand that you are hungry, but please do enter a valid opton");PlaySound(TEXT("understand.wav"), NULL, SND_SYNC);
				goto order;
				break;
	}
	bill:

			printf("\n Dear customer your bill is :");PlaySound(TEXT("urbillis.wav"), NULL, SND_SYNC);
		if (idly>0)
		{
				printf("\n idly = %d Qty  amount in rupees=  %d",idly,(40*idly));
		}
		if (vada>0)
		{
				printf("\n vada = %d Qty  amount in rupees=  %d",vada,(20*vada));
		}
			if (dosa>0)
			{
				printf("\n dosa = %d Qty  amount in rupees=  %d",dosa,(50*dosa));
			}
			if (coffee>0)
			{
				printf("\n coffee = %d Qty amount in rupees=  %d",coffee,(15*coffee));
			}
		if (tea>0)
		{
				printf("\n Tea = %d Qty  amount in rupees=  %d",tea,(15*tea));
		}
			if (juice>0)
			{
				printf("\n fruit juice = %d Qty  amount in rupees=  %d",juice,(30*juice));
			}

			sub=((40*idly)+(20*vada)+(50*dosa)+(15*coffee)+(15*tea)+(30*juice));
			printf("\n subtotal = %f",sub);
			tot=(sub*0.05)+sub;
			printf("\n total cost after adding GST is %f",tot);
			payment:
			printf("\n\n\n How do you want to Pay the Bill? \n press 1 for Gpay\n press 2 for Cash\n press 3 if you are out of cash at the moment");
			PlaySound(TEXT("howpay1.wav"), NULL, SND_SYNC);
			scanf("%d",&pay);system("CLS");
			if(pay==1)
            {
                initwindow(500,500,"Image window");
                readimagefile("gpay.jpeg",0,0,500,500);
                goto song;
            }
            else if (pay==2)
            {
                printf("\n Kindly wait for our service person to come and collect the cash !");
                PlaySound(TEXT("serviceperson.wav"), NULL, SND_SYNC);
                goto song;
            }
             else if (pay==3)
            {
                printf("\n this music was made just for you ");
                PlaySound(TEXT("jusforu.wav"), NULL, SND_SYNC);
                 PlaySound(TEXT("hoo.wav"), NULL, SND_SYNC);
                 printf("ake bhartan dhoo\n");
            }
            else

                 printf("\n please select a valid payment option !");
                  PlaySound(TEXT("validpay.wav"), NULL, SND_SYNC);
                goto payment;

                song:
                printf("\n Your order will come in no time!!! how about some songs till then ?");
                  PlaySound(TEXT("somesongs.wav"), NULL, SND_SYNC);
                printf("\n Press 1 for Kulke Jeene ka (dilbechara) \n press 2 for love story  (Taylor swift)   \n press 3 for Perfect (ED Sheeran)");
                 PlaySound(TEXT("songschoice.wav"), NULL, SND_SYNC);
                scanf("%d",&sng);system("CLS");
                switch(sng)
                {
                case 1:
                    printf("\n Now playing Khulke Jeene ka  from dil bechara");
                    PlaySound(TEXT("introkulke.wav"), NULL, SND_SYNC);
                    PlaySound(TEXT("kul.wav"), NULL, SND_SYNC);
                    break;
                case 2:
                    printf("\n Now playing love story  by Taylor swift");
                     PlaySound(TEXT("introlovestry.wav"), NULL, SND_SYNC);
                     PlaySound(TEXT("tsf.wav"), NULL, SND_SYNC);
                     break;
                case 3:
                    printf("\n Now playing Perfect by ED Sheeran");
                     PlaySound(TEXT("introperfect.wav"), NULL, SND_SYNC);
                     PlaySound(TEXT("perf.wav"), NULL, SND_SYNC);
                    break;
                default:
                    printf("\n please select a valid song option");
                    PlaySound(TEXT("validsngopt.wav"), NULL, SND_SYNC);
                    goto song;
                    break;
                }




	return 0;
}
