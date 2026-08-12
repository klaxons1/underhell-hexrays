int __fastcall sub_100F8460(int a1)
{
  _DWORD *v2; // ebx
  _DWORD *v3; // eax

  v2 = (_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 16) = 0;
  if ( (((_BYTE)a1 + 24) & 7) != 0 )
  {
    Error("CTSListBase: Misaligned list\n");
    __debugbreak();
  }
  *v2 = 0;
  v2[1] = 0;
  if ( (a1 & 7) != 0 )
  {
    Error("CTSQueue: Misaligned queue\n");
    __debugbreak();
    Error("CTSQueue: Misaligned queue\n");
    __debugbreak();
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 16), 0);
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v3 = (_DWORD *)sub_100DDA40(8);
  *(_DWORD *)(a1 + 8) = v3;
  *(_DWORD *)a1 = v3;
  *v3 = a1;
  return a1;
}
