_DWORD *__fastcall sub_10271AF0(int a1, int a2, int a3)
{
  _DWORD *v3; // ecx
  _DWORD *result; // eax
  int v5; // [esp+0h] [ebp-4h] BYREF

  v5 = a1;
  v3 = (_DWORD *)(a1 + 824);
  if ( (*(_BYTE *)v3 & 1) == 0 )
  {
    v5 = *v3 | 1;
    return sub_1021B400(v3, &v5);
  }
  return result;
}
