int __cdecl sub_10121E50(int a1, int a2, int a3, int a4, int a5, int a6, float a7, float a8, int a9)
{
  int v9; // ebx
  int result; // eax

  v9 = a6;
  *(float *)(a1 + 16) = 0.0;
  *(float *)(a1 + 20) = 0.0;
  *(_DWORD *)a1 = &SendProp::`vftable';
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 36) = -1;
  if ( a5 == 32 )
    v9 = a6 | 4;
  *(float *)(a1 + 16) = a7;
  *(float *)(a1 + 20) = a8;
  *(_DWORD *)(a1 + 8) = 2;
  *(_DWORD *)(a1 + 44) = a2;
  *(_DWORD *)(a1 + 68) = a3;
  *(_DWORD *)(a1 + 12) = a5;
  *(_DWORD *)(a1 + 52) = v9;
  *(float *)(a1 + 48) = sub_10121B40(a5, a8 - a7);
  *(_DWORD *)(a1 + 56) = a9;
  result = a1;
  if ( (v9 & 0xE026) != 0 )
    *(_DWORD *)(a1 + 12) = 0;
  return result;
}
