//making of an directed graph



#include<iostream>
#include<string>
using namespace std;


class node
{
	public:
	int id;
	string name;
	node *nextv = NULL;	
	node_conn *nexte = NULL;	
};


class node_conn
{
	public:
	node *myadd = NULL;	
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






int main()
{
	int start,end;
	int vertex;
	node *itr,*temp, *temp2;
	cout<<"#############     GRAPH     #############\n"<<endl;
	
	cout<<"I AM HERE\n";
	displayall();
	
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
			for(temp_node=top_node;temp_node!=NULL;temp_node=temp_node->nextv)
			{
				if(edge1 == temp_node->name)
				{
					
				}
			}
			
			
		}
		
		
	}
			
	
	
	
}




void displayall()
{
	
	node *row, *column, *temp;
	
	temp = top;
	
	//cout<<"I AM IN FUNC\n"<<endl;
	for(row = temp; row!=NULL; row=row->v)
	{	
		//cout<<"I AM IN FUNC row\n"<<endl;
		for(column = row; column!=NULL; column=column->e)
		{
			//cout<<"I AM IN FUNC coulmn\n"<<endl;
			cout<<"   "<<column->id<<"   ";
		}
		cout<<endl;
		
		
		
	}
	
	
}
