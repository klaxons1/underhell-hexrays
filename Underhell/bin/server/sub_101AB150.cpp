void __cdecl sub_101AB150(int a1, char *String1)
{
  char *v2; // eax
  const char *v3; // ebx
  _DWORD *i; // esi
  int v5; // [esp+4h] [ebp-8h]
  int v6; // [esp+8h] [ebp-4h]

  if ( a1 )
  {
    if ( (dword_106B972C & 0x1000) != 0 )
    {
      v2 = "FCVAR_NEVER_AS_STRING";
    }
    else
    {
      v2 = *(char **)(dword_106B9734 + 36);
      if ( !v2 )
        v2 = (char *)String;
    }
    v5 = sub_101AAE20(v2);
    if ( v5 >= 0 )
    {
      v6 = *(_DWORD *)(dword_106B977C + 48);
      if ( (dword_106B96E4 & 0x1000) != 0 )
      {
        v3 = "FCVAR_NEVER_AS_STRING";
      }
      else
      {
        v3 = *(const char **)(dword_106B96EC + 36);
        if ( !v3 )
          v3 = String;
      }
      for ( i = sub_1010E480(a1, String1, 0); i; i = sub_1010E480(a1, String1, (int)i) )
        sub_101AAE70(v3, v5, (int)i, v6, 1);
    }
    else
    {
      Warning("Invalid attach type specified for particle_test in cvar 'particle_test_attach_mode.\n");
    }
  }
}
