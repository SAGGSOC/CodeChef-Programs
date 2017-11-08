
private void traverseLevelOrder(Node root) 
	{
		//System.out.print("NODE:value-"+node._value);
		Queue<Node> nodes=new LinkedList<>();
		Node thisNode;
		Node MarkerNode=new Node(Integer.MAX_VALUE);
		nodes.add(root);
		nodes.add(MarkerNode);
		int level=0;
		System.out.println("Level "+level+":");
		while(!nodes.isEmpty())
		{			
			thisNode=nodes.element();
			if(thisNode._value==Integer.MAX_VALUE)
			{
				nodes.remove();
				if(nodes.isEmpty())
					break;								
				level++;
				System.out.println("Level "+level+":");
				nodes.add(thisNode);
				continue;
			}
			
			System.out.println(thisNode._value);
			if(thisNode._leftChild!=null)
			nodes.add(thisNode._leftChild);
			if(thisNode._rightChild!=null)
			nodes.add(thisNode._rightChild);
			nodes.remove();
		}	
	}
