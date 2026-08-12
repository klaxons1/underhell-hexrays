int __stdcall sub_100D8A80(char *String1)
{
  int result; // eax
  int v2; // esi
  int v4; // ebx
  bool v5; // cc
  const char *v6; // esi
  const char *v7; // eax
  const char *v8; // eax
  const char *v9; // eax
  const char *v10; // eax
  float v11; // [esp+0h] [ebp-44h]
  int v12; // [esp+20h] [ebp-24h]
  int v13; // [esp+24h] [ebp-20h]
  int v14; // [esp+2Ch] [ebp-18h]
  _BYTE v15[4]; // [esp+30h] [ebp-14h] BYREF
  _BYTE v16[4]; // [esp+34h] [ebp-10h] BYREF
  _BYTE v17[4]; // [esp+38h] [ebp-Ch] BYREF
  int v18; // [esp+3Ch] [ebp-8h]
  int v19; // [esp+40h] [ebp-4h]
  char *String1a; // [esp+4Ch] [ebp+8h]

  result = sub_10153490();
  v2 = result;
  v19 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      if ( *(int *)String1 >= 2 )
      {
        v4 = 0;
        v5 = *(_DWORD *)String1 <= 1;
        v6 = "Use";
        v14 = 0;
        v18 = 0;
        v7 = String;
        if ( !v5 )
          v7 = (const char *)*((_DWORD *)String1 + 259);
        String1a = *(char **)sub_10162BE0(v17, v7);
        if ( !String1a )
          String1a = (char *)String;
        if ( *(int *)(dword_106B31C8 + 20) <= 1
          || _stricmp(String1a, "point_servercommand")
          || (result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 8))(dword_106B31D0), !(_BYTE)result)
          && (result = sub_1025FC50(), v19 == result) )
        {
          result = dword_1069ABE0;
          if ( *(_DWORD *)(*(_DWORD *)(dword_1069ABE0 + 28) + 48) )
          {
            if ( *(int *)String1 >= 3 )
            {
              v8 = String;
              if ( *(int *)String1 > 2 )
                v8 = (const char *)*((_DWORD *)String1 + 260);
              v6 = *(const char **)sub_10162BE0(v16, v8);
              if ( !v6 )
                v6 = String;
            }
            if ( *(int *)String1 >= 4 )
            {
              v9 = String;
              if ( *(int *)String1 > 3 )
                v9 = (const char *)*((_DWORD *)String1 + 261);
              v4 = *(_DWORD *)sub_10162BE0(v15, v9);
              v14 = 2;
            }
            if ( *(int *)String1 >= 5 )
            {
              v10 = String;
              if ( *(int *)String1 > 4 )
                v10 = (const char *)*((_DWORD *)String1 + 262);
              v18 = atoi(v10);
            }
            v11 = (float)v18;
            return sub_1010C5D0((int)String1a, (int)v6, v4, v12, v13, -1, v14, v11, v19, v19, 0);
          }
        }
      }
      else
      {
        return sub_102601C0(v2, 2, "Usage:\n   ent_fire <target> [action] [value] [delay]\n", 0, 0, 0, 0);
      }
    }
  }
  return result;
}
