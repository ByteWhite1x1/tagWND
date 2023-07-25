# tagWND
Windows kernel undocumented tagWND struct reversal. The structure is for Windows 10 version 22H2. You need to manually reverse the struct for each version of windows.

Based on the reversal. I was able to implement kernel window handle table walking using my own method. This finally resulted in bypassing the detection of the topmost overlay in every kernel or user space anti-cheats. Learn more: https://overlayhack.com/overlay-topmost-bypass-eac
