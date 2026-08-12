int __cdecl sub_10121D30(int a1, int a2, int a3, int a4, int a5, int a6, float a7, float a8, int a9)
{
  double v9; // st7
  int v10; // ebx
  double v11; // st6
  int result; // eax

  v9 = 0.0;
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
  if ( a5 <= 0 || a5 == 32 )
  {
    v11 = 0.0;
    v10 = a6 | 4;
  }
  else
  {
    v9 = a8;
    if ( -121121.12 == a8 )
      v9 = (double)(1 << a5);
    v10 = a6;
    if ( (a6 & 8) != 0 )
    {
      v11 = a7;
      v9 = v9 - (v9 - a7) / (double)(1 << a5);
    }
    else if ( (a6 & 0x10) != 0 )
    {
      v11 = (v9 - a7) / (double)(1 << a5) + a7;
    }
    else
    {
      v11 = a7;
    }
  }
  *(float *)(a1 + 16) = v11;
  *(float *)(a1 + 20) = v9;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 44) = a2;
  *(_DWORD *)(a1 + 68) = a3;
  *(_DWORD *)(a1 + 12) = a5;
  *(_DWORD *)(a1 + 52) = v10;
  *(float *)(a1 + 48) = sub_10121B40(a5, v9 - v11);
  *(_DWORD *)(a1 + 56) = a9;
  result = a1;
  if ( (v10 & 0xE026) != 0 )
    *(_DWORD *)(a1 + 12) = 0;
  return result;
}
