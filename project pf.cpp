#include<iostream>
#include<fstream>
using namespace std;
string lk(char us[20])
{
	char ps[20], em[20], no[20], r1[20],ad[40];
	cin.ignore();
	cout << "\nEnter username : ";
	cin.getline(us, 20);
	cout << "Enter password : ";
	cin.getline(ps, 20);
	cout << "Enter email : ";
	cin.getline(em, 20);
	cout << "Enter Number : ";
	cin.getline(no, 20);
	cout<<"Enter Your address : ";
	cin.getline(ad,20);
	fstream file;
	file.open(us, ios::out);
	file << ps << endl << em << endl << no << endl<<ad<<endl;
	file.close();
	return us;
}
string ls(char us[20])
{
	char ps[20], r1[20];
	cin.ignore();
q:cout << "\nEnter username : ";
	cin.getline(us, 20);
p:cout << "\nEnter password : ";
	cin.getline(ps, 20);
	fstream file;
	file.open(us, ios::in);
	if (file.is_open())
	{
		file >> r1;
		int l=0,z=0,l2=0;
		for(int i=0;ps[i]!='\0';i++)
		l++;
		for(int i=0;r1[i]!='\0';i++)
		l2++;
		if(l==l2)
		{
		for(int i=0;i<4;i++)
		{
		    if(r1[i]==ps[i])
		    z++;
		}
		if (l == z)
		{
			cout << "Login Success";
			file.close();
			return us;
		}
		else
		{
			cout << "Invalid Password";
			goto p;
		}
		}
		else
		{
			cout << "Invalid Password";
			goto p;
		}
	}
	else
	{
		cout << "\nFailed to open file";
		goto q;
	}
}
int main()
{
	int c;
	int a;
	a=0;
	char ch[20]; char ck[100];
	string ch1,ch2;
	cout << "--------------------------- Food'o Clock ---------------------------";
l:cout << "\n\nEnter 1 for Sign up\nEnter 2 for Login\n";
	cin >> c;
	if (c == 2)
	{
		ch1 = ls(ch);
	}
	else if (c == 1)
	{
		ch1 = lk(ch);
	}
	else
	{
		cout << "Invalid Entery";
		goto l;
	}
	mm:a=0;
	cout << "\n\nEnter 1 for Mc Donald's\nEnter 2 for KFC\nEnter 3 for Pizza Hut\nEnter 4 for Smash\nEnter 5 for Johnny and Jugnu\n";
	cin >> c;
	fstream file;
	file.open("Order.txt",ios::out);
	file<<" ";
	file.close();
	if (c == 1)
	{
		cout << "---------------------------Mc Donald's---------------------------";
	m:cout << "\nEnter 1 for Burger\nEnter 2 for Fries\nEnter 3 for Ice Creame\n";
		if (a != 0)
			cout << "Enter 4 to checkout\n";
		cin >> c;
		if (c == 1)
		{
		m1:cout << "\nChoose the item of your choice\n1 for McChicken Rs 659\n2 for Happy Meal Chicken Burger Rs 569";
			cout << "\n3 for Chicken Mac Rs 478\nAny other number to return to Menu\n";
			cin >> c;
			fstream file;
			file.open("Order.txt", ios::app);
			if (c == 1)
			{
				file << "McChicken Rs.659\n";
				a = a + 659;
				cout<<"\nAdded to the cart\n";
			}
			else if (c == 2)
			{
				file << "Happy Meal Chicken Burger Rs 569\n";
				a = a + 569;
				cout<<"\nAdded to the cart\n";
			}
			else if (c == 3)
			{
				file << "Chicken Mac Rs.478\n";
				a=a+478;
				cout<<"\nAdded to the cart\n";
			}
			else
				goto m;
			file.close();
			goto m1;
		}
		else if (c == 2)
		{
		m2:cout << "\nChoose the item of your choice\n1 for Regular Fries Rs.289\n";
			cout << "2 for Chicken McNuggets 6 pcs Rs.530\nAny other number to return to Menu\n";
			cin >> c;
			fstream file;
			file.open("Order.txt", ios::app);
			if (c == 1)
			{
				file << "Regular Fries Rs.289\n";
				a = a + 289;
				cout<<"\nAdded to the cart\n";
			}
			else if (c == 2)
			{
				file << "Chicken McNuggets 6 pcs Rs.530\n";
				a = a + 530;
				cout<<"\nAdded to the cart\n";
			}
			else
			{
			    file.close();
				goto m;
			}
			file.close();
			goto m2;
		}
		else if (c == 3)
		{
		m3:cout << "\nChoose the item of your choice\n1 for McFlurry - Fudge Brownie Rs.483\n2 for McFlurry - Oreo Rs.435\n3 for Chocolate Sundae Rs.375\nAny other number to return to Menu\n";
			cin >> c;
			fstream file;
			file.open("Order.txt", ios::app);
			if (c == 1)
			{
				file << "McFlurry - Fudge Brownie Rs.483\n";
				a = a + 483;
				cout<<"\nAdded to the cart\n";
			}
			else if (c == 2)
			{
				file << "McFlurry - Fudge Brownie Rs.483\n";
				a = a + 483;
				cout<<"\nAdded to the cart\n";
			}
			else if (c == 3)
			{
				file << "Chocolate Sundae Rs.375\n";
				a = a + 375;
				cout<<"\nAdded to the cart\n";
			}
			else
			{
			    file.close();
			    goto m;
			}
			file.close();
			goto m3;
		}
		else if(c==4&&a!=0)
		{
		    goto c;
		}
		else
		{
		    cout<<"\nInvalid Entery\n";
		    goto m;
		}
	}
	else if (c == 2)
	{
		cout << "--------------------------- KFC ---------------------------";
	k:cout << "\nEnter 1 for Burger\nEnter 2 for Crispy Fried Chicken\nEnter 3 for Chicky Meals\n";
		if (a != 0)
			cout << "Enter 4 to checkout";
		cin >> c;
		if (c == 1)
		{
		k1:cout << "Burger Menu\nChoose the option you desire\n1 for Zinger Burger Rs 530\n2 for Kentucky Burger Rs 570\n3 for Mighty Burger Rs 680\n4 for Zinger Stacker Rs 570\nAny other number to return to the menu\n";
			cin >> c;
			fstream file;
			file.open("Order.txt", ios::app);
			if (c == 1)
			{
				file << "Zinger Burger Rs 530\n";
				a = a + 530;
				cout<<"\nAdded to the cart\n";
			}
			else if (c == 2)
			{
				file << "Kentucky Burger Rs 570\n";
				a = a + 570;
				cout<<"\nAdded to the cart\n";
			}
			else if (c == 3)
			{
				file << "Mighty Burger Rs 680\n";
				a = a + 680;
				cout<<"\nAdded to the cart\n";
			}
			else if (c == 4)
			{
				file << "Zinger Stacker Rs 570\n";
				a = a + 570;
				cout<<"\nAdded to the cart\n";
			}
			else
			{
				goto k;
				file.close();
			}
			file.close();
			goto k1;
		}
		else if (c == 2)
		{
		k2:cout << "Fried Chicken Menu\nChoose the option of your desire\n1 for 3 pcs Chicken Rs 590\n2 for Hot Wing Bucket Rs 550\n3 for Tangy Masala Wings Rs 520\n4 for Buffalo Wings Rs 520\nAny other number to return to the menu\n";
			cin >> c;
			fstream file;
			file.open("Order.txt", ios::app);
			if (c == 1)
			{
				file << "3 pcs Chicken Rs 590\n";
				a = a + 590;
				cout<<"\nAdded to the cart\n";
			}
			else if (c == 2)
			{
				file << "Hot Wing Bucket Rs 550\n";
				a = a + 550;
				cout<<"\nAdded to the cart\n";
			}
			else if (c == 3)
			{
				file << "Tangy Masala Wings Rs 520\n";
				a = a + 520;
				cout<<"\nAdded to the cart\n";
			}
			else if (c == 4)
			{
				file << "Buffalo Wings Rs 520\n";
				a = a + 520;
				cout<<"\nAdded to the cart\n";
			}
			else
			{
			    file.close();
				goto k;
			}
			file.close();
			goto k2;
		}
		else if (c == 3)
		{
		k3:cout << "Chicky Meal Menu\nChoose the option you desire\n1 for Chicky Meal 1 (Krunch + Chicky Fries + Slice + Toy) Rs 550\n2 for Chicky Meal 2 (4 Nuggets + Chicky Fries + Regular Drink + Toy) Rs. 550\nAny other number to return to the menu\n";
			cin >> c;
			fstream file;
			file.open("Order.txt", ios::app);
			if (c == 1)
			{
				file << "Chicky Meal 1 (Krunch + Chicky Fries + Slice + Toy) Rs 550\n";
				a = a + 550;
				cout<<"\nAdded to the cart\n";
			}
			else if (c == 2)
			{
				file << "Chicky Meal 2 (4 Nuggets + Chicky Fries + Regular Drink + Toy) Rs. 550\n";
				a = a + 550;
				cout<<"\nAdded to the cart\n";
			}
			else
			{
				file.close();
				goto k;
			}
			file.close();
			goto k3;
		}
		else if(c==4&&a!=0)
		{
		    goto c;
		}
		else
		{
		    cout<<"\nInvalid Entery\n";
		    goto k;
		}
	}
	else if (c == 3)
	{
		cout << "--------------------------- Pizza Hut ---------------------------\n";
	p:cout << "\nEnter 1 for Chicken Supreme\nEnter 2 for Chiken Fajita Supreme\nEnter 3 for Tikka Supreme\nEnter 4 for Margherita Cheese\nEnter 5 for Creamy Melt\n";
		if (a != 0)
			cout << "Enter 6 to checkout";
		cin >> c;
		if (c == 1)
		{
			cout << "Choose the option you desire\n1 for Small Rs 499\n2 for Medium Rs 1399\n3 for Large Rs 1899\nAny other number to return to menu";
			cin >> c;
			fstream file;
			file.open("Order.txt", ios::app);
			if (c == 1)
			{
				file << "Chicken Supreme Small Rs 499\n";
				a = a + 499;
				cout<<"\nAdded to the cart\n";
			}
			else if (c == 2)
			{
				file << "Chicken Supreme Medium Rs 1399";
				a = a + 1399;
				cout<<"\nAdded to the cart\n";
			}
			else if (c == 3)
			{
				file << "Chicken Supreme Large Rs 1899";
				a = a + 1899;
				cout<<"\nAdded to the cart\n";
			}
			else
			{
				file.close(); 
				goto p;	
			}
			file.close();
			goto p;
		}
		else if (c == 2)
		{
		   cout << "Choose the option you desire\n1 for Small Rs 499\n2 for Medium Rs 1399\n3 for Large Rs 1899\nAny other number to return to menu";
			cin >> c;
			fstream file;
			file.open("Order.txt", ios::app);
			if (c == 1)
			{
				file << "Chiken Fajita Supreme Small Rs 499\n";
				a = a + 499;
				cout<<"\nAdded to the cart\n";
			}
			else if (c == 2)
			{
				file << "Chiken Fajita Supreme Medium Rs 1399";
				a = a + 1399;
				cout<<"\nAdded to the cart\n";
			}
			else if (c == 3)
			{
				file << "Chiken Fajita Supreme Large Rs 1899";
				a = a + 1899;
				cout<<"\nAdded to the cart\n";
			}
			else
			{
				file.close(); 
				goto p;	
			}
			file.close();
			goto p;
		}
		else if (c == 3)
		{
		   cout << "Choose the option you desire\n1 for Small Rs 499\n2 for Medium Rs 1399\n3 for Large Rs 1899\nAny other number to return to menu";
			cin >> c;
			fstream file;
			file.open("Order.txt", ios::app);
			if (c == 1)
			{
				file << "Tikka Supreme Small Rs 499\n";
				a = a + 499;
				cout<<"\nAdded to the cart\n";
			}
			else if (c == 2)
			{
				file << "Tikka Supreme Medium Rs 1399";
				a = a + 1399;
				cout<<"\nAdded to the cart\n";
			}
			else if (c == 3)
			{
				file << "Tikka Supreme Large Rs 1899";
				cout<<"\nAdded to the cart\n";
				a = a + 1899;
			}
			else
			{
				file.close(); 
				goto p;	
			}
			file.close();
			goto p;
		}
		else if (c == 4)
		{
		   cout << "Choose the option you desire\n1 for Small Rs 499\n2 for Medium Rs 1399\n3 for Large Rs 1899\nAny other number to return to menu";
			cin >> c;
			fstream file;
			file.open("Order.txt", ios::app);
			if (c == 1)
			{
				file << "Margherita Cheese Small Rs 499\n";
				cout<<"\nAdded to the cart\n";
				a = a + 499;
			}
			else if (c == 2)
			{
				file << "Margherita Cheese Medium Rs 1399";
				cout<<"\nAdded to the cart\n";
				a = a + 1399;
			}
			else if (c == 3)
			{
				file << "Margherita Cheese Large Rs 1899";
				cout<<"\nAdded to the cart\n";
				a = a + 1899;
			}
			else
			{
				file.close(); 
				goto p;	
			}
			file.close();
			goto p;
		}
		else if (c == 5)
		{
		   cout << "Choose the option you desire\n1 for Small Rs 499\n2 for Medium Rs 1399\n3 for Large Rs 1899\nAny other number to return to menu";
			cin >> c;
			fstream file;
			file.open("Order.txt", ios::app);
			if (c == 1)
			{
				file << "Creamy Melt Small Rs 499\n";
				cout<<"\nAdded to the cart\n";
				a = a + 499;
			}
			else if (c == 2)
			{
				file << "Creamy Melt Medium Rs 1399";
				cout<<"\nAdded to the cart\n";
				a = a + 1399;
			}
			else if (c == 3)
			{
				file << "Creamy Melt Large Rs 1899";
				cout<<"\nAdded to the cart\n";
				a = a + 1899;
			}
			else
			{
				file.close(); 
				goto p;	
			}
			file.close();
			goto p;
		}
		else if(c==6&&a!=0)
		{
		    goto c;
		}
		else
		{
		    cout<<"\nInvalid Entery\n";
		    goto p;
		}
	}
	else if(c==4)
	{
	    cout << "--------------------------- Smash ---------------------------\n";
	    s:cout<<"Enter 1 for Burgers\nEnter 2 for Fries\n";
	    if (a != 0)
	        cout << "Enter 3 to checkout";
	    cin>>c;
	    if(c==1)
	    {
	        s1:cout<<"Burger Menu\nChoose the option you desire\n1 for Monster Sheikh Rs 1275\n2 for Skinny Monster Rs 1275\n3 for Scared Sheikh Rs 1275\n4 for Scared Sheikh Rs 899\n5 for Baby Sheikh Rs 595\n";
	        cin>>c;
			fstream file;
			file.open("Order.txt", ios::app);
			if(c==1)
			{
			    file<<"Monster Sheikh Rs 1275\n";
			    a=a+1275;
			    cout<<"\nAdded to the cart\n";
			}
			else if(c==2)
			{
			    file<<"Skinny Monster Rs 1275\n";
			    a=a+1275;
			    cout<<"\nAdded to the cart\n";
			}
			else if(c==3)
			{
			    file<<"Scared Sheikh Rs 1275\n";
			    a=a+1275;
			    cout<<"\nAdded to the cart\n";
			}
			else if(c==4)
			{
			    file<<"Scared Sheikh Rs 899\n";
			    a=a+899;
			    cout<<"\nAdded to the cart\n";
			}
			else if(c==5)
			{
			    file<<"Baby Sheikh Rs 595\n";
			    a=a+595;
			    cout<<"\nAdded to the cart\n";
			}
			else
			{
			    file.close();
			    goto s;
			}
			file.close();
			goto s1;
	    }
	    else if(c==2)
	    {
	        s2:cout<<"Burger Menu\nChoose the option you desire\n1 for Regular Plain Fries Rs 295\n2 for Regular Masala Fries Rs 315\nAny other number to return to menu\n";
	        cin>>c;
	        fstream file;
	        file.open("Order.txt", ios::app);
	        if(c==1)
	        {
	            file<<"Regular Plain Fries Rs 295\n";
	            a=a+295;
	            cout<<"\nAdded to the cart\n";
	        }
	        else if(c==2)
	        {
	            file<<"Regular Masala Fries Rs 315\n";
	            a=a+315;
	            cout<<"\nAdded to the cart\n";
	        }
	        else
	        {
	            file.close();
	            goto s;
	        }
	        file.close();
	        goto s2;
	    }
	    else if(c==4&&a!=0)
		{
		    goto c;
		}
		else
		{
		    cout<<"\nInvalid Entery\n";
		    goto s;
		}
	}
	else if(c==5)
	{
	    cout << "--------------------------- Jhonny & Jugnu ---------------------------\n";
	    j:cout<<"\nEnter 1 for Burgers\nEnter 2 for Wraps\nEnter 3 for Sauces\n";
	    if (a != 0)
	    {
	        cout << "Enter 4 to checkout\n";
		}
		cin>>c;
	    if(c==1)
	    {
	        j1:cout<<"\nBurger Menu\nChoose the option you desire\n1 for Wehshi Rs 690\n2 for Chicken Fillet Rs 690\nAny other number to return to menu\n";
	        cin>>c;
	        fstream file;
	        file.open("Order.txt", ios::app);
	        if(c==1)
	        {
	            file<<"Wehshi Rs 690\n";
	            a=a+690;
	            cout<<"\nAdded to the cart\n";
	        }
	        else if(c==2)
	        {
	            file<<"Chicken Fillet Rs 690\n";
	            a=a+690;
	            cout<<"\nAdded to the cart\n";
	        }
	        else if(c==3&&a!=0)
	        goto c;
	        else
	        {
	            file.close();
	            goto j;
	        }
	        file.close();
	        goto j1;
	    }
	    else if(c==2)
	    {
	        j2:cout<<"\nWrap Menu\nChoose the option you desire\n1 for Toetilla Wrap Rs 870\n2 for Smol Wrap Rs 580\n3 for Nugg Wrap Rs 580\nAny other number to return to the menu\n";
	        cin>>c;
	        fstream file;
	        file.open("Order.txt", ios::app);
	        if(c==1)
	        {
	            file<<"Toetilla Wrap Rs 870\n";
	            a=a+870;
	            cout<<"\nAdded to the cart\n";
	        }
	        else if(c==2)
	        {
	            file<<"Smol Wrap Rs 580\n";
	            a=a+580;
	            cout<<"\nAdded to the cart\n";
	        }
	        else if(c==3)
	        {
	            file<<"Nugg Wrap Rs 580\n";
	            a=a+580;
	            cout<<"\nAdded to the cart\n";
	        }
	        else
	        {
	            file.close();
	            goto j;
	        }
	        file.close();
	        goto j2;
	    }
	    else if(c==3)
	    {
	        j3:cout<<"Sauces Menu\nChoose the option of your desire\n1 for Atomic Dip Rs 100\n2 for Chipotle Dip Rs 100\n3 for Garlic Dip Rs 100\nAny other number to Return to the menu";
	        cin>>c;
	        fstream file;
	        file.open("Order.txt",ios::app);
	        if(c==1)
	        {
	            file<<"Atomic Dip Rs 100";
	            a=a+100;
	            cout<<"Added to the cart";
	        }
	        else if(c==2)
	        {
	            file<<"Chipotle Dip Rs 100";
	            a=a+100;
	            cout<<"Added to the cart";
	        }
	        else if(c==3)
	        {
	            file<<"Garlic Dip Rs 100";
	            a=a+100;
	            cout<<"Added to the cart";
	        }
	        else
	        goto j;
	    }
	    else if(c==4&&a!=0)
		{
		    goto c;
		}
		else
		{
		    cout<<"\nInvalid Entery\n";
		    goto j;
		}
		file.close();
		goto j3;
	}
	c:cout<<ch1<<" Items in your Cart: \n";
	file.open("Order.txt",ios::in);
	while(1)
	{
	    getline(file,ch2);
	    cout<<ch2;
	    if(file.eof())
	    break;
	    cout<<"\n";
	}
	cout<<"\nTotal Bill : "<<a<<"\n\nEnter 1 if you want to continue with the order\nEnter 2 if you want to discart the items from the cart";
	cin>>c;
	if(c==1)
	{
	    while(1)
	    {
	        fstream file;
	        file.open("Order.txt",ios::in);
	        getline(file,ch2);
	        if(file.eof())
	        {
	            break;
	        }
	        cout<<ch2<<" ";
	        file.close();
	        fstream write;
	        write.open(ch,ios::app);
	        write.seekp(0,ios::end);
	        write<<"\n"<<ch2;
	        write.close();
	    }
	    fstream file;
	    file.open(ch,ios::app);
	    file.seekp(0,ios::end);
	    file<<ch2<<endl<<"Total Bill : "<<a;
	    file.close();
	    po:cout<<"\nChoose Your deries Payment method\n1 for JazzCash\n2 for Easypaisa\n3 for Bank transfer\n4 for COD(cash on delivery)\n";
	    cin>>c;
	    char acc[16];
	    int l=0;
	    if(c==1)
	    {
	        jz:cout<<"\nEnter your JazzCash number : ";
	        cin.getline(acc,16);
	        for(int i=0;acc[i]!='\0';i++)
	        {
	            l++;
	        }
	        if(l!=11)
	        {
	            cout<<"Invalid Number\n";
	            goto jz;
	        }
	        else
	        {
	            cout<<"\n\nYour Order has been confirmed\nIt will be delivered to you in 30 minutes\n\n\t\tThank You for visiting FOOD'o CLOCK\n";
	        }
	    }
	    else if(c==2)
	    {
	        ep:cout<<"\nEnter your EasyPaisa number : ";
	        cin.getline(acc,16);
	        for(int i=0;acc[i]!='\0';i++)
	        {
	            l++;
	        }
	        if(l!=11)
	        {
	            cout<<"Invalid Number\n";
	            goto ep;
	        }
	        else
	        {
	            cout<<"\n\nYour Order has been confirmed\nIt will be delivered to you in 30 minutes\n\n\t\tThank You for visiting FOOD'o CLOCK\n";
	        }
	    }
	    else if(c==3)
	    {
	        bt:cout<<"\nEnter your Account number : ";
	        cin.getline(acc,16);
	        for(int i=0;acc[i]!='\0';i++)
	        {
	            l++;
	        }
	        if(l!=16)
	        {
	            cout<<"Invalid Account Number\n";
	            goto bt;
	        }
	        else
	        {
	            cout<<"\n\nYour Order has been confirmed\nIt will be delivered to you in 30 minutes\n\n\t\tThank You for visiting FOOD'o CLOCK\n";
	        }
	    }
	    else if(c==4)
	    {
	        cout<<"\n\nYour Order has been confirmed\nIt will be delivered to you in 30 minutes\n\n\t\tThank You for visiting FOOD'o CLOCK\n";
	    }
	    else
	    {
	        cout<<"\nInvalid Entery\n";
	        goto po;
	    }
	}
	else if(c==2)
	{
	    py:cout<<"Your Items have been removed from the cart\nEnter 1 to return to main Menu\nEnter 2 to exit";
	    cin>>c;
	    if(c==1)
	    goto mm;
	    else if(c==2)
	    cout<<"\n\t\tThank you for visiting Food'o Clock";
	    else
	    {
	        cout<<"Invalid Entery\n";
	        goto py;
	    }
	}
	//delete a;
	//a=NULL;
}

