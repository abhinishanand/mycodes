//making of an directed graph



#include<iostream>
#include<string>
using namespace std;

class node_conn
{
	public:
	int id;
	node_conn *downv = NULL;
	node_conn *nexte = NULL;	
};

class node
{
	public:
	int id;
	string name;
	node *nextv = NULL;	
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

node_conn *firstedge=NULL;
void createedge()
{
	node *temp_node;
	
	
	string edge1,edge2;
	int id1=0,id2=0;
	
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
				id1 = temp_node->id;
				
			if(temp_node->name == edge2)
				id2 = temp_node->id;
				
		}
		
		if(id1==0)
			cout<<"VERTEX "<<edge1<<" doesn't exist.\n";
		
		else if(id2==0)
			cout<<"VERTEX "<<edge2<<" doesn't exist.\n";
			
		else
		{
			if(firstedge==NULL)
			{
				
				node_conn *temp2= new node_conn;
				temp2->id = id2;
				
				node_conn *temp1= new node_conn;
				temp1->id = id1;
				temp1->nexte = temp2;
				
				firstedge = temp1;	
				
			}
			else
			{
				//two cases
				//case1 : when the first edge is existing
				//case2 : when the first edge doesnt exist
				//need to search first whether there is first edge or not
				
				for(node_conn *temp = firstedge; temp->downv!=NULL; temp=temp->downv)
				{
					
					
				}
				
				
				
			}
			
			
			
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
