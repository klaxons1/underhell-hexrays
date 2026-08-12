int __cdecl sub_10122270(int a1, int a2, int a3, int a4, int a5)
{
  int result; // eax

  result = a1;
  *(float *)(a1 + 16) = 0.0;
  *(float *)(a1 + 20) = 0.0;
  *(_DWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 36) = a3;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)a1 = &SendProp::`vftable';
  *(_DWORD *)(a1 + 8) = 4;
  *(_DWORD *)(a1 + 44) = a4;
  *(_DWORD *)(a1 + 56) = nullsub_4;
  *(_DWORD *)(a1 + 28) = a5;
  return result;
}
