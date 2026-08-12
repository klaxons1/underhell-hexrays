int __thiscall sub_1017BA90(_DWORD *this, int a2)
{
  const char *v3; // eax
  int v4; // eax
  const char *v5; // esi
  int v6; // eax
  char *v8; // eax
  char *v9; // ecx
  int v10; // eax

  v3 = (const char *)this[206];
  if ( !v3 )
    v3 = String;
  v4 = sub_101679A0((int)v3);
  v5 = (const char *)this[206];
  if ( v4 < 0 )
  {
    v8 = *(char **)(dword_106B31C8 + 60);
    if ( !v8 )
      v8 = (char *)String;
    v9 = (char *)v5;
    if ( !v5 )
      v9 = (char *)String;
    sub_10167E00(v9, v8, 2);
    if ( !v5 )
      v5 = String;
    v10 = sub_101679A0((int)v5);
    return sub_101678E0(v10, 0);
  }
  else
  {
    if ( !v5 )
      v5 = String;
    v6 = sub_101679A0((int)v5);
    return sub_101678B0(v6, 2);
  }
}
