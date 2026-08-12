int __cdecl sub_101222C0(int a1, int a2, int a3)
{
  int result; // eax

  result = a1;
  *(float *)(a1 + 16) = 0.0;
  *(float *)(a1 + 20) = 0.0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)a1 = &SendProp::`vftable';
  *(_DWORD *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 36) = -1;
  *(_DWORD *)(a1 + 52) = 64;
  *(_DWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 44) = a3;
  return result;
}
