_DWORD *__thiscall sub_1042ACB0(_DWORD *this, char *Str, int a3)
{
  _DWORD *result; // eax
  char *v5; // eax
  char *v6; // esi
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  _DWORD *v10; // ebx
  int v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // edx
  _BYTE v14[256]; // [esp+4h] [ebp-104h] BYREF
  _DWORD *v15; // [esp+104h] [ebp-4h]
  char *Stra; // [esp+110h] [ebp+8h]

  result = this;
  v15 = this;
  if ( Str && *Str )
  {
    v5 = strchr(Str, 47);
    Stra = v5;
    v6 = Str;
    if ( v5 )
    {
      v7 = v5 - Str;
      memcpy_0(v14, Str, v5 - Str);
      v14[v7] = 0;
      v6 = v14;
    }
    v8 = KeyValuesSystem();
    v9 = (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)v8 + 12))(v8, v6, a3);
    if ( v9 == -1 )
      return 0;
    result = (_DWORD *)v15[6];
    v10 = 0;
    if ( result )
    {
      while ( 1 )
      {
        v10 = result;
        if ( *result == v9 )
          break;
        result = (_DWORD *)result[5];
        if ( !result )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      if ( v15[7] )
        result = (_DWORD *)sub_1042ACB0(Str, 0);
      if ( !result )
      {
        if ( !(_BYTE)a3 )
          return 0;
        v11 = KeyValuesSystem();
        v12 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v11 + 4))(v11, 32);
        if ( v12 )
          result = sub_1042A330(v12, (int)v6);
        else
          result = 0;
        if ( v10 )
          v10[5] = result;
        else
          v15[6] = result;
        v13 = v15;
        result[5] = 0;
        *((_BYTE *)v13 + 16) = 0;
      }
    }
    if ( Stra )
      return (_DWORD *)sub_1042ACB0(Stra + 1, a3);
  }
  return result;
}
