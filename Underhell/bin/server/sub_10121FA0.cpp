int __cdecl sub_10121FA0(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  *(_DWORD *)(a1 + 44) = 0;
  *(float *)(a1 + 16) = 0.0;
  *(_DWORD *)(a1 + 68) = 0;
  *(float *)(a1 + 20) = 0.0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)a1 = &SendProp::`vftable';
  *(_DWORD *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 36) = -1;
  if ( a5 == 32 )
    a6 |= 4u;
  *(float *)(a1 + 16) = 0.0;
  *(float *)(a1 + 20) = 360.0;
  *(_DWORD *)(a1 + 44) = a2;
  *(_DWORD *)(a1 + 8) = 2;
  *(_DWORD *)(a1 + 68) = a3;
  *(_DWORD *)(a1 + 12) = a5;
  *(_DWORD *)(a1 + 52) = a6;
  *(float *)(a1 + 48) = sub_10121B40(a5, 360.0);
  *(_DWORD *)(a1 + 56) = a7;
  return a1;
}
