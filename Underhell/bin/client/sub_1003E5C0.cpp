char __thiscall sub_1003E5C0(_DWORD *this, int a2, int a3, int a4, int a5, int a6)
{
  char *v7; // eax
  int v8; // eax

  v7 = (char *)sub_101E1B90(a4);
  v8 = sub_10029D40(this, v7);
  *(_DWORD *)(a2 + 24) = v8;
  if ( v8 < 0 )
    return 0;
  *(_DWORD *)(a2 + 8) = a5;
  return 1;
}
