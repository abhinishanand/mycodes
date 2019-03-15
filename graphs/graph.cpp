//making of an directed graph



#include<iostream>
#include<string>
using namespace std;

class node_conn
{
	public:
	node *myadd = NULL;	
	node_conn *nexte = NULL;	
};

class node
{
	public:
	int id;
	string name;
	node *nextv = NULL;	
	node_conn *nexte = NULL;	
};




// entering the vertices 
int count=0;
node *top_node;
node *itr_node;
void createnode()
{
	string temp_name;
	cout<<"ENTER THE NODE NAME\n";
	cin>>temp_name;		
	
	
	node *temp = new node;
	temp->id = count+1;
	temp->name = temp_name;
	
	if(count==0)
		top_node=temp;
	else	
		itr_node->nextv = temp;		
	
	itr_node = temp;
	count++;	
}


//entering the edges


void createedge()
{
	node *temp_node;
	
	
	string edge1,edge2;
	node *temp1=NULL;
	node *temp2=NULL;
	
	cout<<"ENTER THE EDGE NAME (a b)\n";
	cin>>edge1;
	cin>>edge2;
	
	if(count==0)
		cout<<"NO VERTICES EXIST. CREATE NODE FIRST\n";
	else
	{
		for(temp_node=top_node;temp_node!=NULL;temp_node=temp_node->nextv)
		{
			if(temp_node->name == edge1)
				temp1 = temp_node;
			if(temp_node->name == edge2)
				temp2 = temp_node;
				
		}
		
		if(temp1==NULL)
			cout<<edge1<<" doesn't exist.\n";
		
		else if(temp2==NULL)
			cout<<edge2<<" doesn't exist.\n";
			
		else
		{
			node_conn *temp = new node_conn;
			for(temp=temp1->nexte;temp!=NULL;temp=temp->nexte);   //creating first edge from A to B
				temp->nexte = temp1;
			
			
			node_conn *temp = new node_conn;
			for(temp=temp2->nexte;temp!=NULL;temp=temp->nexte);  //creating 2nd edge from B to A
				temp->nexte = temp2;
				
			cout<<" undirected EDGE CREATED \n";
			
		}
		
		
	}
			
	
	
	
}




void displayall()
{
	
	node *row;
	node_conn *column;
	
	node *temp_col;
	
	cout<<"DISPLAYING GRAPH\n";
	for(row = top_node; row!=NULL; row=row->v)
	{	
		cout<<"  "<<row->name<<"  ";
		for(column = row->nexte; column!=NULL; column=column->e)
		{
			temp_col = column->myadd;
			cout<<"----->"<<temp_col->name;
		}
		cout<<endl;	
	}
	
	





int main()
{
	int input;
	cout<<"#############     GRAPH     #############\n"<<endl;
	
	while(1)
	{
		cout<<" 1. Create node \n 2. Create edge \n 3. Display\n 4. Exit\n";
		cin>>input;
		
		if(input==4)
		break;
		else
		{
			switch(input)
			{
			case 1: createnode(); break;
			case 2: createdge();break;
			case 3: displayall();break;
			default: cout<<"WRONG INPUT\n";
			}
		}
		
	}
	
	displayall();
	
}

}
