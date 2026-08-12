int __thiscall sub_10157720(_DWORD *this)
{
  int v1; // eax
  int v2; // edx
  bool v4; // zf
  int (*v5)(void); // eax

  v1 = this[1];
  v2 = *(_DWORD *)dword_106B3CDC;
  if ( (*(_DWORD *)(v1 + 3416) & 8) != 0 )
    return (*(int (**)(void))(v2 + 120))() + 84;
  v4 = *(_BYTE *)(v1 + 2272) == 0;
  v5 = *(int (**)(void))(v2 + 120);
  if ( v4 )
    return v5() + 24;
  else
    return v5() + 48;
}
