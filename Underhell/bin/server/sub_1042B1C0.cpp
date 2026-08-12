int __thiscall sub_1042B1C0(_DWORD *this, int a2)
{
  int result; // eax
  _DWORD *v3; // ebx
  _DWORD *i; // esi
  _DWORD *v5; // edi
  int v6; // eax
  const char *v7; // esi
  int v8; // eax
  int v9; // ecx

  result = a2;
  v3 = *(_DWORD **)(a2 + 24);
  for ( i = this; v3; v3 = (_DWORD *)v3[5] )
  {
    v5 = (_DWORD *)i[6];
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = KeyValuesSystem();
        v7 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 16))(v6, *v5);
        v8 = KeyValuesSystem();
        if ( !strcmp((const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 16))(v8, *v3), v7) )
          break;
        v5 = (_DWORD *)v5[5];
        if ( !v5 )
        {
          i = this;
          goto LABEL_6;
        }
      }
      result = sub_1042B1C0(v3);
      i = this;
    }
    else
    {
LABEL_6:
      result = sub_1042AFF0(v3);
      v9 = i[6];
      if ( v9 )
      {
        for ( ; *(_DWORD *)(v9 + 20); v9 = *(_DWORD *)(v9 + 20) )
          ;
        *(_DWORD *)(v9 + 20) = result;
      }
      else
      {
        i[6] = result;
      }
    }
  }
  return result;
}
