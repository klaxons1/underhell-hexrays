const char *__cdecl sub_100D6C60(int *a1)
{
  const char *v1; // eax
  int v2; // eax
  const char *result; // eax
  const char *v4; // edi
  const char *v5; // ecx
  const char *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  const char *v10; // esi
  const char *v11; // esi
  const char *v12; // esi
  const char *v13; // eax

  if ( *a1 <= 1 || (v1 = (const char *)a1[259], v1 == String) || !_stricmp(v1, String) )
  {
    v2 = sub_10153490();
    result = (const char *)sub_101E94B0(v2);
LABEL_5:
    v4 = result;
    goto LABEL_6;
  }
  v6 = String;
  if ( *a1 > 1 )
    v6 = (const char *)a1[259];
  v7 = atoi(v6);
  if ( v7 )
  {
    v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, v7);
    if ( (v8 || (v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
      && (v9 = *(_DWORD *)(v8 + 12)) != 0 )
    {
      result = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 20))(v9);
    }
    else
    {
      result = 0;
    }
    goto LABEL_5;
  }
  result = (const char *)sub_1012BC10(0);
  v4 = result;
  if ( !result )
    return result;
  while ( 1 )
  {
    v10 = (const char *)*((_DWORD *)v4 + 65);
    if ( v10 )
    {
      result = sub_100634F0(a1, 1);
      if ( result == v10 )
        break;
      result = (const char *)_stricmp(result, v10);
      if ( !result )
        break;
    }
    v11 = (const char *)*((_DWORD *)v4 + 23);
    if ( v11 )
    {
      result = sub_100634F0(a1, 1);
      if ( result == v11 )
        break;
      result = (const char *)_stricmp(result, v11);
      if ( !result )
        break;
    }
    v12 = (const char *)*((_DWORD *)v4 + 23);
    if ( !v12 )
      v12 = String;
    result = sub_100634F0(a1, 1);
    if ( result == v12 )
      break;
    result = (const char *)_stricmp(result, v12);
    if ( !result )
      break;
    result = (const char *)sub_1012BC10(v4);
    v4 = result;
    if ( !result )
      return result;
  }
LABEL_6:
  if ( v4 )
  {
    if ( *((_DWORD *)v4 + 65) )
    {
      v5 = (const char *)*((_DWORD *)v4 + 65);
    }
    else
    {
      v5 = (const char *)*((_DWORD *)v4 + 23);
      if ( !v5 )
        v5 = String;
    }
    v13 = (const char *)*((_DWORD *)v4 + 23);
    if ( !v13 )
      v13 = String;
    Msg("Removed %s(%s)\n", v13, v5);
    return (const char *)sub_1025FAC0(v4);
  }
  return result;
}
