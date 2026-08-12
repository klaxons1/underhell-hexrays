int __cdecl sub_101221E0(int a1, int a2, int a3, int a4, int (__cdecl *a5)(int a1, int a2, int a3))
{
  int result; // eax

  result = a1;
  *(float *)(a1 + 16) = 0.0;
  *(float *)(a1 + 20) = 0.0;
  *(_DWORD *)(a1 + 44) = a2;
  *(_DWORD *)(a1 + 64) = a4;
  *(_DWORD *)a1 = &SendProp::`vftable';
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 36) = -1;
  *(_DWORD *)(a1 + 8) = 5;
  *(_DWORD *)(a1 + 68) = a3;
  *(_DWORD *)(a1 + 60) = a5;
  if ( a5 == std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>> || a5 == sub_10121B30 )
    *(_DWORD *)(a1 + 52) = 512;
  if ( a5 == std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>> && !a3 )
    *(_DWORD *)(a1 + 52) = 4096;
  return result;
}
