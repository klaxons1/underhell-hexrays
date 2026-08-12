const char *__cdecl sub_100D88C0(int *a1)
{
  int *v1; // ebx
  const char *result; // eax
  const char *v3; // esi
  const char *v4; // eax
  int v5; // eax
  const char *v6; // edi
  const char *v7; // ecx
  const char *v8; // eax
  const char *v9; // eax
  const char *v10; // esi
  const char *v11; // esi
  const char *v12; // esi

  v1 = a1;
  if ( *a1 >= 1 )
  {
    if ( *a1 <= 2 || (v4 = (const char *)a1[260], v4 == String) || !_stricmp(v4, String) )
    {
      v5 = sub_10153490();
      result = (const char *)sub_101E94B0(v5);
      v6 = result;
    }
    else
    {
      result = (const char *)sub_1012BC10(0);
      v6 = result;
      if ( !result )
        return result;
      while ( 1 )
      {
        v10 = (const char *)*((_DWORD *)v6 + 65);
        if ( v10 )
        {
          result = sub_100634F0(v1, 1);
          if ( result == v10 )
            break;
          result = (const char *)_stricmp(result, v10);
          if ( !result )
            break;
        }
        v11 = (const char *)*((_DWORD *)v6 + 23);
        if ( v11 )
        {
          result = sub_100634F0(v1, 1);
          if ( result == v11 )
            break;
          result = (const char *)_stricmp(result, v11);
          if ( !result )
            break;
        }
        v12 = (const char *)*((_DWORD *)v6 + 23);
        if ( !v12 )
          v12 = String;
        result = sub_100634F0(v1, 1);
        if ( result == v12 )
          break;
        result = (const char *)_stricmp(result, v12);
        if ( !result )
          break;
        result = (const char *)sub_1012BC10(v6);
        v6 = result;
        if ( !result )
          return result;
      }
    }
    if ( v6 )
    {
      v7 = String;
      if ( *v1 > 1 )
        v7 = (const char *)v1[259];
      v8 = (const char *)*((_DWORD *)v6 + 23);
      if ( !v8 )
        v8 = String;
      Msg("Set the name of %s to %s\n", v8, v7);
      v9 = String;
      if ( *v1 > 1 )
        v9 = (const char *)v1[259];
      result = *(const char **)sub_10162BE0(&a1, v9);
      *((_DWORD *)v6 + 65) = result;
    }
  }
  else
  {
    result = (const char *)sub_10153490();
    v3 = result;
    if ( result )
    {
      result = (const char *)(*(int (__thiscall **)(const char *))(*(_DWORD *)result + 320))(result);
      if ( (_BYTE)result )
        return (const char *)sub_102601C0(v3, 2, "Usage:\n   ent_setname <new name> <entity name>\n", 0, 0, 0, 0);
    }
  }
  return result;
}
