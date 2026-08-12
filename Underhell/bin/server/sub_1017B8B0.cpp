int __stdcall sub_1017B8B0(int a1)
{
  const char **v1; // eax
  const char *v2; // esi
  const char *v3; // eax
  int v4; // eax
  char *v6; // ecx
  char *v7; // eax
  int v8; // eax

  v1 = (const char **)(a1 + 8);
  if ( *(_DWORD *)(a1 + 24) != 2 )
  {
    a1 = 0;
    v1 = (const char **)&a1;
  }
  v2 = *v1;
  v3 = v2;
  if ( !v2 )
    v3 = String;
  if ( sub_101679A0((int)v3) < 0 )
  {
    v6 = *(char **)(dword_106B31C8 + 60);
    if ( !v6 )
      v6 = (char *)String;
    v7 = (char *)v2;
    if ( !v2 )
      v7 = (char *)String;
    sub_10167E00(v7, v6, 0);
    if ( !v2 )
      v2 = String;
    v8 = sub_101679A0((int)v2);
    return sub_101678E0(v8, 0);
  }
  else
  {
    if ( !v2 )
      v2 = String;
    v4 = sub_101679A0((int)v2);
    return sub_101678B0(v4, 0);
  }
}
