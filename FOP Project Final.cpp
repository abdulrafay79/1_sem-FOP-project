//SZABIST Canteen Project

//Header Files
#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

//Initializing sum and qnt as global variables
int sum=0, qnt=0;

//Function for fastfood category
int frenchfries=0, chickenburger=0, chickensandwich=0, chickenroll=0; //Global variables to use in function and main body
void fastfood()
{
	int fastfood; //Variable to store item number in this function
	fastfood: //Label to repeat code if invalid option is selected
	cout<<"\t\t\t\t\t\t\t------------------------------------------"<<endl;
	cout<<"\nChoose items from list below:"<<endl;
	cout<<"\t1)French Fries ------- 90 PKR \n\t2)Chicken Burger ------- 150 PKR "<<endl;
	cout<<"\t3)Chicken Sandwich ------- 120 PKR \n\t4)Chicken Roll ------- 180 PKR"<<endl;
	cout<<"( 1 | 2 | 3 | 4 ): ";
	cin>>fastfood;
	cout<<"Enter quantity: ";
	cin>>qnt;
	
	if(fastfood==1)
	{
		frenchfries=qnt; //It assigns the value of quantity to item variable
		sum+=90*qnt; //It adds item price to sum after multiplying it to quantity
	}
	else if(fastfood==2)
	{
		chickenburger=qnt;
		sum+=150*qnt;
	}
	else if(fastfood==3)
	{
		chickensandwich=qnt;
		sum+=120*qnt;
	}
	else if(fastfood==4)
	{
		chickenroll=qnt;
		sum+=180*qnt;
	}
	else
	{
		cout<<"\tInvalid option selected"<<endl;
		goto fastfood;
	}
}

//Function for bakeryitems category
int chickenpatties=0, vegetablepatties=0, chickensamosa=0, aaloosamosa=0, brownie=0; //Global variables to use in function and main body
void bakery()
{
	int bakery;
	bakery: //Label to repeat code if invalid option is selected
	cout<<"\t\t\t\t\t\t\t------------------------------------------"<<endl;
	cout<<"\nChoose items from list below:"<<endl;
	cout<<"\t1)Chicken Patties ------- 50 PKR \n\t2)Vegetable Patties ------- 50 PKR"<<endl;
	cout<<"\t3)Chicken Samosa ------- 50 PKR \n\t4)Aaloo Samosa ------- 30 PKR"<<endl;
	cout<<"\t5)Brownie ------- 180 PKR"<<endl;
	cout<<"( 1 | 2 | 3 | 4 | 5 ): ";
	cin>>bakery;
	cout<<"Enter quantity: ";
	cin>>qnt;
		
	if(bakery==1)
	{
		chickenpatties=qnt;
		sum+=50*qnt;
	}
	else if(bakery==2)
	{
		vegetablepatties=qnt;
		sum+=50*qnt;
	}
	else if(bakery==3)
	{
		chickensamosa=qnt;
		sum+=50*qnt;
	}
	else if(bakery==4)
	{
		aaloosamosa=qnt;
		sum+=30*qnt;
	}
	else if(bakery==5)
	{
		brownie=qnt;
		sum+=180*qnt;
	}
	else
	{
		cout<<"\tInvalid option selected"<<endl;
		goto bakery;
	}
}

//Function for baverages category
int slicejuice=0, milomilk=0, mineralwater=0, tea=0, sevenup=0, marinda=0, pepsi=0;
void baverages()
{
	int baverages;
	baverages: //Label to repeat code if invalid option is selected
	cout<<"\t\t\t\t\t\t\t------------------------------------------"<<endl;
	cout<<"\nChoose items from list below:"<<endl;
	cout<<"\t1)Slice juice ------- 75 PKR \n\t2)Milo milk ------- 75 PKR"<<endl;
	cout<<"\t3)Mineral water ------- 50 PKR \n\t4)Tea ------- 100 PKR"<<endl;
	cout<<"\t5)7up ------- 80 PKR \n\t6)Marinda ------- 80 PKR"<<endl;
	cout<<"\t7)Pepsi ------- 80 PKR"<<endl;
	cout<<"( 1 | 2 | 3 | 4 | 5 | 6 | 7 ): ";
	cin>>baverages;
	cout<<"Enter quantity: ";
	cin>>qnt;
		
	if(baverages==1)
	{
		slicejuice=qnt;
		sum+=75*qnt;
	}
	else if(baverages==2)
	{
		milomilk=qnt;
		sum+=75*qnt;
	}
	else if(baverages==3)
	{
		mineralwater=qnt;
		sum+=50*qnt;
	}
	else if(baverages==4)
	{
		tea=qnt;
		sum+=100*qnt;
	}
	else if(baverages==5)
	{
		sevenup=qnt;
		sum+=80*qnt;
	}
	else if(baverages==6)
	{
		marinda=qnt;
		sum+=80*qnt;
	}
	else if(baverages==7)
	{
		pepsi=qnt;
		sum+=80*qnt;
	}
	else
	{
		cout<<"\tInvalid option selected"<<endl;
		goto baverages;
	}
}

//Function for biscuits category
int super=0, candy=0, chocolatechip=0, partypik=0, glucose=0, marie=0, lemonsandwich=0, cafe=0, zeeraplus=0, butterpuff=0, chocolato=0;
void biscuits()
{
	int biscuits;
	biscuits: //Label to repeat code if invalid option is selected
	cout<<"\t\t\t\t\t\t\t------------------------------------------"<<endl;
	cout<<"\nChoose items from list below:"<<endl;
	cout<<"\t1)Super ------- 40 PKR \n\t2)Candy ------- 40 PKR "<<endl;
	cout<<"\t3)Chocolate chip cookies ------- 10 PKR \n\t4)Party pik ------- 40 PKR"<<endl;
	cout<<"\t5)Glucose ------- 25 PKR \n\t6)Marie ------- 40 PKR"<<endl;
	cout<<"\t7)Lemon sandwich ------- 40 PKR \n\t8)Cafe ------- 40 PKR"<<endl;
	cout<<"\t9)Zeera plus ------- 15 PKR \n\t10)Butter puff ------- 40 PKR"<<endl;
	cout<<"\t11)Chocolato ------- 100 PKR"<<endl;
	
	cout<<"( 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 ): ";
	cin>>biscuits;
	cout<<"Enter quantity: ";
	cin>>qnt;
		
	if(biscuits==1)
	{
		super=qnt;
		sum+=40*qnt;
	}
	else if(biscuits==2)
	{
		candy=qnt;
		sum+=40*qnt;
	}
	else if(biscuits==3)
	{
		chocolatechip=qnt;
		sum+=10*qnt;
	}
	else if(biscuits==4)
	{
		partypik=qnt;
		sum+=40*qnt;
	}
	else if(biscuits==5)
	{
		glucose=qnt;
		sum+=25*qnt;
	}
	else if(biscuits==6)
	{
		marie=qnt;
		sum+=40*qnt;
	}
	else if(biscuits==7)
	{
		lemonsandwich=qnt;
		sum+=40*qnt;
	}
	else if(biscuits==8)
	{
		cafe=qnt;
		sum+=40*qnt;
	}
	else if(biscuits==9)
	{
		zeeraplus=qnt;
		sum+=15*qnt;
	}
	else if(biscuits==10)
	{
		butterpuff=qnt;
		sum+=40*qnt;
	}
	else if(biscuits==11)
	{
		chocolato=qnt;
		sum+=100*qnt;
	}
	else
	{
		cout<<"\tInvalid option selected"<<endl;
		goto biscuits;
	}
}

//Function for cakes/wafers category
int hilalcupcake=0, smiledonut=0, glucobear=0, novita=0, baketime=0, browniecake=0;
void cakewafer()
{
	int cakewafer;
	cakewafer: //Label to repeat code if invalid option is selected
	cout<<"\t\t\t\t\t\t\t------------------------------------------"<<endl;
	cout<<"\nChoose items from list below:"<<endl;
	cout<<"\t1)Hilal cupcake ------- 10 PKR \n\t2)Smile donut cake ------- 150 PKR"<<endl;
	cout<<"\t3)Gluco bear cake ------- 150 PKR \n\t4)Novita wafers ------- 40 PKR"<<endl;
	cout<<"\t5)Baketime ------- 40 PKR \n\t6)Brownie ------- 140 PKR"<<endl;
	cout<<"( 1 | 2 | 3 | 4 | 5 | 6 ): ";
	cin>>cakewafer;
	cout<<"Enter quantity: ";
	cin>>qnt;
		
	if(cakewafer==1)
	{
		hilalcupcake=qnt;
		sum+=10*qnt;
	}
	else if(cakewafer==2)
	{
		smiledonut=qnt;
		sum+=150*qnt;
	}
	else if(cakewafer==3)
	{
		glucobear=qnt;
		sum+=150*qnt;
	}
	else if(cakewafer==4)
	{
		novita=qnt;
		sum+=40*qnt;
	}
	else if(cakewafer==5)
	{
		baketime=qnt;
		sum+=40*qnt;
	}
	else if(cakewafer==6)
	{
		browniecake=qnt;
		sum+=140*qnt;
	}
	else
	{
		cout<<"\tInvalid option selected"<<endl;
		goto cakewafer;
	}
}

//Function for chocolates category
int dairymilk=0, sonnet=0, perk=0;
void chocolates()
{
	int chocolate;
	chocolate: //Label to repeat code if invalid option is selected
	cout<<"\t\t\t\t\t\t\t------------------------------------------"<<endl;
	cout<<"\nChoose items from list below:"<<endl;
	cout<<"\t1)Dairy milk ------- 30 PKR \n\t2)Sonnet ------- 10 PKR"<<endl;
	cout<<"\t3)Perk ------- 20 PKR"<<endl;
	cout<<"( 1 | 2 | 3 ): ";
	cin>>chocolate;
	cout<<"Enter quantity: ";
	cin>>qnt;
		
	if(chocolate==1)
	{
		dairymilk=qnt;
		sum+=30*qnt;
	}
	else if(chocolate==2)
	{
		sonnet=qnt;
		sum+=10*qnt;
	}
	else if(chocolate==3)
	{
		perk=qnt;
		sum+=20*qnt;
	}
	else
	{
		cout<<"\tInvalid option selected"<<endl;
		goto chocolate;
	}
}

//Function for chips category
int kurlees=0, lays=0, wavy=0, kurkure=0, cheetos=0, snackers=0;
void chips()
{
	int chips;
	chips: //Label to repeat code if invalid option is selected
	cout<<"\t\t\t\t\t\t\t------------------------------------------"<<endl;
	cout<<"\nChoose items from list below:"<<endl;
	cout<<"\t1)Karlees ------- 50 PKR \n\t2)Lays ------- 30 PKR"<<endl;
	cout<<"\t3)Wavy ------- 40 PKR \n\t4)Kurkure ------- 40 PKR"<<endl;
	cout<<"\t5)Cheetos ------- 40 PKR \n\t6)Snackers ------- 30 PKR"<<endl;
	cout<<"( 1 | 2 | 3 | 4 | 5 | 6 ): ";
	cin>>chips;
	cout<<"Enter quantity: ";
	cin>>qnt;
		
	if(chips==1)
	{
		kurlees=qnt;
		sum+=50*qnt;
	}
	else if(chips==2)
	{
		lays=qnt;
		sum+=30*qnt;
	}
	else if(chips==3)
	{
		wavy=qnt;
		sum+=40*qnt;
	}
	else if(chips==4)
	{
		kurkure=qnt;
		sum+=40*qnt;
	}
	else if(chips==5)
	{
		cheetos=qnt;
		sum+=40*qnt;
	}
	else if(chips==6)
	{
		snackers=qnt;
		sum+=30*qnt;
	}
	else
	{
		cout<<"\tInvalid option selected"<<endl;
		goto chips;
	}
}

//Function for desi category
int channachaat=0, macronipasta=0, chickenbiriyani=0, vegbiriyani=0, cornsoup=0;
void desi()
{
	int desi;
	desi: //Label to repeat code if invalid option is selected
	cout<<"\t\t\t\t\t\t\t------------------------------------------"<<endl;
	cout<<"\nChoose items from list below:"<<endl;
	cout<<"\t1)Channa chaat ------- 100 PKR \n\t2)Macroni pasta ------- 120 PKR"<<endl;
	cout<<"\t3)Chicken biriyani ------- 120 PKR \n\t4)Veg biriyani ------- 100 PKR"<<endl;
	cout<<"\t5)Corn soup ------- 180 PKR"<<endl;
	cout<<"( 1 | 2 | 3 | 4 | 5 ): ";
	cin>>desi;
	cout<<"Enter quantity: ";
	cin>>qnt;
		
	if(desi==1)
	{
		channachaat=qnt;
		sum+=100*qnt;
	}
	else if(desi==2)
	{
		macronipasta=qnt;
		sum+=120*qnt;
	}
	else if(desi==3)
	{
		chickenbiriyani=qnt;
		sum+=120*qnt;
	}
	else if(desi==4)
	{
		vegbiriyani=qnt;
		sum+=100*qnt;
	}
	else if(desi==5)
	{
		cornsoup=qnt;
		sum+=180*qnt;
	}
	else
	{
		cout<<"\tInvalid option selected"<<endl;
		goto desi;
	}
}

//Main block of code
int main()
{
int category, pay;
char decision, repeat, promo;
string code;

cout<<"_______________________________________________________________________________________________________________________________________________________________"<<endl;
cout<<"\t\t\t\t\t\t\t------------------------------------------"<<endl;
cout<<"\t\t\t\t\t\t\t\tWelcome to SZABIST canteen"<<endl;
start: //Label to repeat code if invalid option is selected
cout<<"\t\t\t\t\t\t\t------------------------------------------"<<endl;
do{

category:
cout<<"What would you like to have?\n";
cout<<"\t1)Fast food \n\t2)Bakery items \n\t3)Baverages \n\t4)Biscuits \n\t5)Cakes/Wafers \n\t6)Chocolates"<<endl;
cout<<"\t7)Chips \n\t8)Desi items"<<endl;
cout<<" ( 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 ): ";
cin>>category;

if(category==1)						
fastfood();
else if(category==2)
bakery();
else if(category==3)
baverages();
else if(category==4)
biscuits();
else if(category==5)
cakewafer();
else if(category==6)
chocolates();
else if(category==7)
chips();
else if(category==8)
desi();
else
{
cout<<"\tInvalid option selected"<<endl;
goto category;
}
cout<<"\t\t\t\t\t\t\t------------------------------------------"<<endl;
cout<<"\nDo you want to add anything else to your order? (Y/N): ";
cin>>repeat;

if(repeat=='N' || repeat=='n')
{
	promo:
	cout<<"\t\t\t\t\t\t\t------------------------------------------"<<endl;
	cout<<"\nDo you have any PROMO code? (Y/N): ";
	cin>>promo;
	if(promo=='Y' || promo=='y')
	{
		cout<<"\nEnter your PROMO code here: ";
		cin>>code;
		if(code=="sirumairisbest")
		{
			sum=sum*0.80;
			cout<<"\n\t\t\t\t\t\t\t--------Your PROMO code is applied--------"<<endl;
			cout<<"\n\tFlat 20% off on entire order"<<endl;
			goto payment;
		}
		else
		{
			cout<<"\n\t\t\t\t\t\t\t-------Your PROMO code is invalid-------"<<endl;
			goto promo;
		}
	}
	else
	{
		goto payment;
	}
}
else
{
	goto start;
}

payment: //Label to direct code if order is placed
cout<<"\t\t\t\t\t\t\t------------------------------------------"<<endl;
cout<<"Order summary: "<<endl;
if(frenchfries>=1) //Item will be showed in order summary if quantity is equal to or greater than 1
{
	cout<<"Quantity = "<<frenchfries<<"\tFrench Fries ------- 90 PKR"<<endl;
	frenchfries=0; //This will set quantity to 0 as if we repeat order, it will not be displayed
}
if(chickenburger>=1)
{
	cout<<"Quantity = "<<chickenburger<<"\tChicken Burger ------- 150 PKR"<<endl;
	chickenburger=0;
}
if(chickensandwich>=1)
{
	cout<<"Quantity = "<<chickensandwich<<"\tChicken Sandwich ------- 120 PKR"<<endl;
	chickensandwich=0;
}
if(chickenroll>=1)
{
	cout<<"Quantity = "<<chickenroll<<"\tChicken Roll ------- 180 PKR"<<endl;
	chickenroll=0;
}
if(chickenpatties>=1)
{
	cout<<"Quantity = "<<chickenpatties<<"\tChicken Patties ------- 50 PKR"<<endl;
	chickenpatties=0;
}
if(vegetablepatties>=1)
{
	cout<<"Quantity = "<<vegetablepatties<<"\tVegetable Patties ------- 50 PKR"<<endl;
	vegetablepatties=0;
}
if(chickensamosa>=1)
{
	cout<<"Quantity = "<<chickensamosa<<"\tChicken Samosa ------- 50 PKR"<<endl;
	chickensamosa=0;
}
if(aaloosamosa>=1)
{
	cout<<"Quantity = "<<aaloosamosa<<"\tAaloo Samosa ------- 30 PKR"<<endl;
	aaloosamosa=0;
}
if(brownie>=1)
{
	cout<<"Quantity = "<<brownie<<"\tBrownie ------- 180 PKR"<<endl;
	brownie=0;
}
if(slicejuice>=1)
{
	cout<<"Quantity = "<<slicejuice<<"\tSlice juice ------- 75 PKR"<<endl;
	slicejuice=0;
}
if(milomilk>=1)
{
	cout<<"Quantity = "<<milomilk<<"\tMilo milk ------- 75 PKR"<<endl;
	milomilk=0;
}
if(mineralwater>=1)
{
	cout<<"Quantity = "<<mineralwater<<"\tMineral water ------- 50 PKR"<<endl;
	mineralwater=0;
}
if(tea>=1)
{
	cout<<"Quantity = "<<tea<<"\tTea ------- 100 PKR"<<endl;
	tea=0;
}
if(sevenup>=1)
{
	cout<<"Quantity = "<<sevenup<<"\t7up ------- 80 PKR"<<endl;
	sevenup=0;
}
if(marinda>=1)
{
	cout<<"Quantity = "<<marinda<<"\tMarinda ------- 80 PKR"<<endl;
	marinda=0;
}
if(pepsi>=1)
{
	cout<<"Quantity = "<<pepsi<<"\tPepsi ------- 80 PKR"<<endl;
	pepsi=0;
}
if(super>=1)
{
	cout<<"Quantity = "<<super<<"\tSuper ------- 40 PKR"<<endl;
	super=0;
}
if(candy>=1)
{
	cout<<"Quantity = "<<candy<<"\tCandy ------- 40 PKR"<<endl;
	candy=0;
}
if(chocolatechip>=1)
{
	cout<<"Quantity = "<<chocolatechip<<"\tChocolate chip cookies ------- 10 PKR"<<endl;
	chocolatechip=0;
}
if(partypik>=1)
{
	cout<<"Quantity = "<<partypik<<"\tParty pik ------- 40 PKR"<<endl;
	partypik=0;
}
if(glucose>=1)
{
	cout<<"Quantity = "<<glucose<<"\tGlucose ------- 25 PKR"<<endl;
	glucose=0;
}
if(marie>=1)
{
	cout<<"Quantity = "<<marie<<"\tMarie ------- 40 PKR"<<endl;
	marie=0;
}
if(lemonsandwich>=1)
{
	cout<<"Quantity = "<<lemonsandwich<<"\tLemon sandwich ------- 40 PKR"<<endl;
	lemonsandwich=0;
}
if(cafe>=1)
{
	cout<<"Quantity = "<<cafe<<"\tCafe ------- 40 PKR"<<endl;
	cafe=0;
}
if(zeeraplus>=1)
{
	cout<<"Quantity = "<<zeeraplus<<"\tZeera plus ------- 15 PKR"<<endl;
	zeeraplus=0;
}
if(butterpuff>=1)
{
	cout<<"Quantity = "<<butterpuff<<"\tButter puff ------- 40 PKR"<<endl;
	butterpuff=0;
}
if(chocolato>=1)
{
	cout<<"Quantity = "<<chocolato<<"\tChocolato ------- 100 PKR"<<endl;
	chocolato=0;
}
if(hilalcupcake>=1)
{
	cout<<"Quantity = "<<hilalcupcake<<"\tHilal cupcake ------- 10 PKR"<<endl;
	hilalcupcake=0;
}
if(smiledonut>=1)
{
	cout<<"Quantity = "<<smiledonut<<"\tSmile donut cake ------- 150 PKR"<<endl;
	smiledonut=0;
}
if(glucobear>=1)
{
	cout<<"Quantity = "<<glucobear<<"\tGluco bear cake ------- 150 PKR"<<endl;
	glucobear=0;
}
if(novita>=1)
{
	cout<<"Quantity = "<<novita<<"\tNovita wafers ------- 40 PKR"<<endl;
	novita=0;
}
if(baketime>=1)
{
	cout<<"Quantity = "<<baketime<<"\tBaketime ------- 40 PKR"<<endl;
	baketime=0;
}
if(browniecake>=1)
{
	cout<<"Quantity = "<<browniecake<<"\tBrownie ------- 140 PKR"<<endl;
	browniecake=0;
}
if(dairymilk>=1)
{
	cout<<"Quantity = "<<dairymilk<<"\tDairy milk ------- 30 PKR"<<endl;
	dairymilk=0;
}
if(sonnet>=1)
{
	cout<<"Quantity = "<<sonnet<<"\tSonnet ------- 10 PKR"<<endl;
	sonnet=0;
}
if(perk>=1)
{
	cout<<"Quantity = "<<perk<<"\tPerk ------- 20 PKR"<<endl;
	perk=0;
}
if(kurlees>=1)
{
	cout<<"Quantity = "<<kurlees<<"\tKarlees ------- 50 PKR"<<endl;
	kurlees=0;
}
if(lays>=1)
{
	cout<<"Quantity = "<<lays<<"\tLays ------- 30 PKR"<<endl;
	lays=0;
}
if(wavy>=1)
{
	cout<<"Quantity = "<<wavy<<"\tWavy ------- 40 PKR"<<endl;
	wavy=0;
}
if(kurkure>=1)
{
	cout<<"Quantity = "<<kurkure<<"\tKurkure ------- 40 PKR"<<endl;
	kurkure=0;
}
if(cheetos>=1)
{
	cout<<"Quantity = "<<cheetos<<"\tCheetos ------- 40 PKR"<<endl;
	cheetos=0;
}
if(snackers>=1)
{
	cout<<"Quantity = "<<snackers<<"\tSnackers ------- 30 PKR"<<endl;
	snackers=0;
}
if(channachaat>=1)
{
	cout<<"Quantity = "<<channachaat<<"\tChanna chaat ------- 100 PKR"<<endl;
	channachaat=0;
}
if(macronipasta>=1)
{
	cout<<"Quantity = "<<macronipasta<<"\tMacroni pasta ------- 120 PKR"<<endl;
	macronipasta=0;
}
if(chickenbiriyani>=1)
{
	cout<<"Quantity = "<<chickenbiriyani<<"\tChicken biriyani ------- 120 PKR"<<endl;
	chickenbiriyani=0;
}
if(vegbiriyani>=1)
{
	cout<<"Quantity = "<<vegbiriyani<<"\tVeg biriyani ------- 100 PKR"<<endl;
	vegbiriyani=0;
}
if(cornsoup>=1)
{
	cout<<"Quantity = "<<cornsoup<<"\tCorn soup ------- 180 PKR"<<endl;
	cornsoup=0;
}

remaining:
cout<<"\t\t\t\t\t\t\t------------------------------------------"<<endl;
cout<<"Your total amount of order is now: "<<sum<<" PKR"<<endl;
cout<<"Enter amount to pay: ";
cin>>pay;

sum=sum-pay;
if(sum>0)
{
	goto remaining;
}
else if(sum<0)
{
	cout<<"Your credit: "<<sum<<" PKR"<<endl;
}

cout<<"\t\t\t\t\t\t\t------------------------------------------\n";
cout<<"\t\t\t\t\t\t\t        Your order has been completed"<<endl;
cout<<"\t\t\t\t\t\t\t------------------------------------------\n";
cout<<"Do you want eat again? (Y/N): ";
cin>>decision;

}while(decision=='Y' || decision=='y');
cout<<"\t\t\t\t\t\t\t------------------------------------------"<<endl;
cout<<"\t\t\t\t\t\t\t\t      Thank You!"<<endl;
cout<<"\t\t\t\t\t\t\t------------------------------------------"<<endl;
cout<<"_______________________________________________________________________________________________________________________________________________________________"<<endl;
getch();
return 0;
}
