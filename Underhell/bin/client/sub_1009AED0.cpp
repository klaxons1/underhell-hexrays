int __cdecl sub_1009AED0(int a1, int a2, int a3, int a4, int a5, int (__cdecl *a6)(int, int, int))
{
  int result; // eax
  int (__cdecl *v7)(int, int, int); // edx

  result = a1;
  v7 = a6;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 52) = 1;
  *(_DWORD *)(a1 + 48) = -1;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  if ( !a6 )
  {
    if ( a4 != 1 )
    {
      if ( a4 == 2 )
      {
        v7 = (int (__cdecl *)(int, int, int))sub_1009ADF0;
        goto LABEL_7;
      }
      v7 = (int (__cdecl *)(int, int, int))sub_1009AE10;
      if ( a4 == 4 )
        goto LABEL_7;
    }
    v7 = sub_101A6290;
  }
LABEL_7:
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 44) = a3;
  *(_DWORD *)(a1 + 8) = a5;
  *(_DWORD *)(a1 + 32) = v7;
  return result;
}
