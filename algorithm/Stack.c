Struct Node
{
	ElementType Element;
	PtrToNode Next;
}

int
IsEmpty(Stack S)
{
	return S -> Next == NULL;
}

Stack
CreateStack(void)
{
	Stack S;
	S = malloc(sizeof(struct Node));
	if (S == NULL)
		FataError("Out of space!!!");
	S -> Next = NULL;
	MakeEmpty(S);
	return S;
}

void MakeEmpty(Stack S)
{
	if (S == NULL)
		Error("Must use CreateStack first"):
	else
		while (!IsEmpty(S))
			Pop(S);
}

void
Push(ElementType X, Stack S)
{
	PtrToNode TmpCell;

	TmpCell = malloc(sizeof(struct Node));
	if (TmpCell = NULL)
		FataError("Out of space !!!");
	else
	{
		TmpCell -> Element = x;
		S -> Next = TmpCell;
	}
}

ElementType
Top(Stack S)
{
	if (!IsEmpty(S))
		return S -> Next -> Element;
	Error("Empty stack");
	return 0;
}

void
Pop(Stack S)
{
	PtrToNode FirstCell;

	if (IsEmpty(S))
		Error("Empty stack");
	else
	{
		FirstCell = S -> Next;
		S -> Next = S -> Next -> Next;
		free(FirstCell);
	}
}


