struct WindowStyle
{	
	char padding_1[0x18];		// 0x18
	ULONG exStyle;
	ULONG style;
};

struct Win32Thread
{	
	void* pThread;				// 0x0
};

typedef struct _TAG_WND
{
	HWND hWnd;					// 0x0
	UINT64 windowCount;			// 0x8
	Win32Thread* pWin32Thread;	// 0x10
	char padding_1[0x10];		// 0x18
	WindowStyle* windowStyle;	// 0x28
	UINT64 userCopyHeapOffset;	// 0x30
	char padding_2[0x20];
	_TAG_WND* next;				// 0x58	
	_TAG_WND* previous;			// 0x60
	_TAG_WND* parent;			// 0x68
	_TAG_WND* child;			// 0x70
	char padding_3[0x40];
	PWCH* windowName;			// 0xB8
	char padding_4[0x8];
	_TAG_WND* self;				// 0xC8
}TAG_WND, * PTAG_WND;
