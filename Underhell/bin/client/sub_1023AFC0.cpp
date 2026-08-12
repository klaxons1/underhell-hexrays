_DWORD *__thiscall sub_1023AFC0(void *this, char *String2)
{
  _DWORD *v2; // ebx
  int v3; // ebp
  int v4; // edi
  int v5; // esi

  v2 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 116))(this);
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    v3 = v2[3];
    v4 = 0;
    if ( v3 > 0 )
      break;
LABEL_6:
    v2 = (_DWORD *)v2[6];
    if ( !v2 )
      return 0;
  }
  v5 = 0;
  while ( _stricmp(*(const char **)(v5 + *v2), String2) )
  {
    ++v4;
    v5 += 48;
    if ( v4 >= v3 )
      goto LABEL_6;
  }
  return v2;
}
