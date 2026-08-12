int __usercall sub_100D8C70@<eax>(int a1@<edi>, int *a2)
{
  int result; // eax
  int v3; // ebx
  const char *v4; // eax
  int v5; // edi
  _DWORD *i; // esi
  int v7; // ebx
  int v8; // edi
  int v9; // eax
  _DWORD *j; // esi
  int v11; // ebx
  int v12; // edi
  int v13; // eax
  const char *v14; // eax
  int v15; // eax
  int v17; // [esp+4h] [ebp-8h]
  int v18; // [esp+8h] [ebp-4h]

  result = sub_10153490();
  v3 = result;
  v18 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      if ( *a2 >= 2 )
      {
        v4 = String;
        if ( *a2 > 1 )
          v4 = (const char *)a2[259];
        v5 = sub_101811E0(v4, -1);
        v17 = v5;
        if ( v5 )
        {
          for ( i = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 44))(v5, a1); i; i = (_DWORD *)i[3] )
          {
            v7 = 0;
            if ( (int)i[1] > 0 )
            {
              v8 = 0;
              do
              {
                if ( (*(_BYTE *)(*i + v8 + 18) & 0x10) != 0 )
                {
                  v9 = sub_1025F440("  output: %s\n", *(_DWORD *)(*i + v8 + 20));
                  sub_102601C0(v18, 2, v9, 0, 0, 0, 0);
                }
                ++v7;
                v8 += 52;
              }
              while ( v7 < i[1] );
              v5 = v17;
            }
          }
          for ( j = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 44))(v5); j; j = (_DWORD *)j[3] )
          {
            v11 = 0;
            if ( (int)j[1] > 0 )
            {
              v12 = 0;
              do
              {
                if ( (*(_BYTE *)(*j + v12 + 18) & 8) != 0 )
                {
                  v13 = sub_1025F440("  input: %s\n", *(_DWORD *)(*j + v12 + 20));
                  sub_102601C0(v18, 2, v13, 0, 0, 0, 0);
                }
                ++v11;
                v12 += 52;
              }
              while ( v11 < j[1] );
              v5 = v17;
            }
          }
          return (**(int (__thiscall ***)(int, int))v5)(v5, 1);
        }
        else
        {
          v14 = String;
          if ( *a2 > 1 )
            v14 = (const char *)a2[259];
          v15 = sub_1025F440("no such entity %s\n", (char)v14);
          return sub_102601C0(v3, 2, v15, 0, 0, 0, 0);
        }
      }
      else
      {
        return sub_102601C0(v3, 2, "Usage:\n   ent_info <class name>\n", 0, 0, 0, 0);
      }
    }
  }
  return result;
}
