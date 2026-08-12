int __thiscall sub_1017BBD0(_DWORD *this, int a2)
{
  const char *v3; // eax
  char *v4; // eax
  const char *v5; // esi
  char *v6; // ecx
  int v7; // eax
  int v8; // esi
  const char *v9; // eax
  int v10; // eax

  v3 = (const char *)this[206];
  if ( !v3 )
    v3 = String;
  if ( sub_101679A0((int)v3) < 0 )
  {
    v4 = *(char **)(dword_106B31C8 + 60);
    v5 = (const char *)this[206];
    if ( !v4 )
      v4 = (char *)String;
    v6 = (char *)this[206];
    if ( !v5 )
      v6 = (char *)String;
    sub_10167E00(v6, v4, 1);
    if ( !v5 )
      v5 = String;
    v7 = sub_101679A0((int)v5);
    sub_101678E0(v7, 0);
  }
  if ( *(_DWORD *)(a2 + 24) == 5 )
    v8 = *(_DWORD *)(a2 + 8);
  else
    v8 = 0;
  v9 = (const char *)this[206];
  if ( !v9 )
    v9 = String;
  v10 = sub_101679A0((int)v9);
  return sub_10167910(v10, v8);
}
