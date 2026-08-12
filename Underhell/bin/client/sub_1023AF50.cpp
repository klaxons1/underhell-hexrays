const char **__thiscall sub_1023AF50(void *this, char *String2)
{
  _DWORD *v2; // ebp
  int v3; // ebx
  int v4; // edi
  const char **v5; // esi
  int v7; // [esp+10h] [ebp-4h]

  v2 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this);
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    v3 = 0;
    v7 = v2[3];
    if ( v7 > 0 )
      break;
LABEL_6:
    v2 = (_DWORD *)v2[6];
    if ( !v2 )
      return 0;
  }
  v4 = 0;
  while ( 1 )
  {
    v5 = (const char **)(v4 + *v2);
    if ( !_stricmp(*v5, String2) )
      return v5;
    ++v3;
    v4 += 48;
    if ( v3 >= v7 )
      goto LABEL_6;
  }
}
