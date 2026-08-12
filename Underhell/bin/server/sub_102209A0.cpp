int __stdcall sub_102209A0(int a1, int a2, int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // esi
  char *v7; // ebx
  char *v8; // eax
  const char *v9; // eax
  const char *v10; // ecx

  if ( !sub_102208D0((int *)a1, a2) )
    return 0;
  v4 = *(_DWORD *)(a1 + 96);
  if ( v4 )
  {
    v5 = sub_101679A0(v4);
    v6 = v5;
    if ( v5 < 0 )
    {
      v9 = *(const char **)(a1 + 92);
      if ( !v9 )
        v9 = String;
      v10 = *(const char **)(a1 + 96);
      if ( !v10 )
        v10 = String;
      Warning("Global Entity %s (%s) not in table!!!\n", v10, v9);
      sub_1017B330(*(char **)(a1 + 96), *(char **)(dword_106B31C8 + 60), 1);
    }
    else
    {
      if ( sub_10167A00(v5) == 2 )
        return -1;
      v7 = *(char **)(dword_106B31C8 + 60);
      if ( !v7 )
        v7 = (char *)String;
      v8 = (char *)sub_10167A60(v6);
      if ( !sub_10043F40(v7, v8) )
      {
        sub_100E2610(a1);
        return 0;
      }
    }
  }
  return 0;
}
