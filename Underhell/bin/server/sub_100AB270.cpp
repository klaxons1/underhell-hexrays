char __thiscall sub_100AB270(_DWORD **this, int a2)
{
  int v3; // eax
  _DWORD **i; // ecx
  unsigned int **v6; // edx
  unsigned int v7; // eax
  int v8; // eax
  char v9; // [esp+8h] [ebp-4h] BYREF
  __int16 v10; // [esp+9h] [ebp-3h]
  char v11; // [esp+Bh] [ebp-1h]

  v11 = -1;
  v3 = 0;
  for ( i = this + 21; !(*i)[3]; ++i )
  {
    if ( (unsigned int)++v3 >= 3 )
      return 0;
  }
  v6 = (unsigned int **)this[v3 + 21];
  v9 = v3;
  v7 = **v6;
  v10 = 1;
  if ( v7 == -1 || off_1061BE18[4 * (v7 & 0xFFF) + 2] != v7 >> 12 )
    v8 = 0;
  else
    v8 = off_1061BE18[4 * (v7 & 0xFFF) + 1];
  if ( !v8 )
    return 0;
  while ( a2 != v8 )
  {
    v8 = sub_100AB170(this, &v9);
    if ( !v8 )
      return 0;
  }
  return 1;
}
