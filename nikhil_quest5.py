# Add a node at the end of the DLL 
def append(self, new_data): 

		# 1. allocate node 2. put in the data 
		new_node = Node(data = new_data) 
		last = self.head 

		# 3. This new node is going to be the 
		# last node, so make next of it as NULL 
		new_node.next = None

		# 4. If the Linked List is empty, then 
		# make the new node as head 
		if self.head is None: 
			new_node.prev = None
			self.head = new_node 
			return

		# 5. Else traverse till the last node 
		while (last.next is not None): 
			last = last.next

		# 6. Change the next of last node 
		last.next = new_node 
		# 7. Make last node as previous of new node */ 
		new_node.prev = last 

# This code is contributed by jatinreaper 
