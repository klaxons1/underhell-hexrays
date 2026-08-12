int __cdecl sub_10122040(int a1, int a2, int a3, int a4, int a5, int a6, void *a7)
{
  int result; // eax
  void *v8; // edx
  int v9; // esi

  result = a1;
  v8 = a7;
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
  if ( !a7 )
  {
    if ( a4 == 1 )
      goto LABEL_6;
    if ( a4 == 2 )
    {
      v8 = sub_10121AD0;
      goto LABEL_7;
    }
    v8 = sub_10121B00;
    if ( a4 != 4 )
LABEL_6:
      v8 = sub_10121AC0;
  }
LABEL_7:
  v9 = a5;
  if ( a5 <= 0 )
    v9 = 8 * a4;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 44) = a2;
  *(_DWORD *)(a1 + 68) = a3;
  *(_DWORD *)(a1 + 12) = v9;
  *(_DWORD *)(a1 + 52) = a6;
  *(_DWORD *)(a1 + 56) = v8;
  if ( (a6 & 1) != 0 )
  {
    if ( v8 == sub_10121AC0 )
    {
      *(_DWORD *)(a1 + 56) = sub_10121AE0;
    }
    else if ( v8 == sub_10121AD0 )
    {
      *(_DWORD *)(a1 + 56) = sub_10121AF0;
    }
    else if ( v8 == sub_10121B00 )
    {
      *(_DWORD *)(a1 + 56) = sub_10121B00;
    }
  }
  return result;
}
