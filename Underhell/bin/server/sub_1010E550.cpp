void __cdecl sub_1010E550(int a1, char *String1, int a3)
{
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  char *v9; // eax
  char *v10; // eax

  if ( a1 )
  {
    v3 = 0;
    while ( String1 != String && _stricmp(String1, String) )
    {
      v6 = atoi(String1);
      if ( v6 )
      {
        if ( v3 )
          return;
        v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, v6);
        if ( (v7 || (v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
          && (v8 = *(_DWORD *)(v7 + 12)) != 0 )
        {
          v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 20))(v8);
        }
        else
        {
          v4 = 0;
        }
        goto LABEL_7;
      }
      v3 = (_DWORD *)sub_1012BC10(v3);
      if ( !v3 )
        return;
      while ( 1 )
      {
        v9 = (char *)v3[65];
        if ( v9 )
        {
          if ( v9 == String1 || sub_100D6190(v3, String1) )
            break;
        }
        v10 = (char *)v3[23];
        if ( v10 )
        {
          if ( v10 == String1 || sub_100D6240(v3, String1) )
            break;
        }
        v3 = (_DWORD *)sub_1012BC10(v3);
        if ( !v3 )
          return;
      }
LABEL_8:
      if ( !v3 )
        return;
      v5 = v3[59];
      if ( (v5 & a3) != 0 )
        v3[59] = v5 & ~a3;
      else
        v3[59] = a3 | v5;
    }
    if ( v3 )
      return;
    v4 = sub_101E94B0(a1);
LABEL_7:
    v3 = (_DWORD *)v4;
    goto LABEL_8;
  }
}
