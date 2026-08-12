int __cdecl sub_1009AD80(int a1, int a2, int a3, int a4, int a5)
{
  int result; // eax

  result = a1;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 52) = a2;
  *(_DWORD *)(a1 + 48) = a3;
  *(_DWORD *)(a1 + 4) = 4;
  *(_DWORD *)a1 = a4;
  *(_DWORD *)(a1 + 28) = a5;
  return result;
}
