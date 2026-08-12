const char **__thiscall sub_1023B020(void *this, int a2, int a3)
{
  _DWORD *v3; // ebx
  int v4; // ebp
  int v5; // edi
  int v6; // esi
  int v7; // eax
  const char **result; // eax

  v3 = (_DWORD *)(*(int (__fastcall **)(void *))(*(_DWORD *)this + 116))(this);
  if ( !v3 )
    return 0;
  while ( 1 )
  {
    v4 = v3[15];
    v5 = 0;
    if ( v4 > 0 )
      break;
LABEL_8:
    v3 = (_DWORD *)v3[6];
    if ( !v3 )
      return 0;
  }
  v6 = 0;
  while ( 1 )
  {
    v7 = v6 + v3[12];
    if ( *(_DWORD *)(v7 + 8) == a2 && *(_DWORD *)(v7 + 12) == a3 )
    {
      result = sub_1023AF50(this, *(char **)(v7 + 4));
      if ( result )
        return result;
    }
    ++v5;
    v6 += 16;
    if ( v5 >= v4 )
      goto LABEL_8;
  }
}
