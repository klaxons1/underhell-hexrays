int __thiscall sub_10105840(_DWORD *this, int a2)
{
  int v3; // eax
  int i; // ebx
  int v5; // esi
  int v7; // [esp+Ch] [ebp-4h]

  v3 = this[1];
  v7 = v3;
  if ( !a2 || v3 >= this[6] )
    return 0;
  for ( i = 1240 * v3; ; i += 1240 )
  {
    v5 = i + this[3];
    if ( (*(_BYTE *)v5 & 1) != 0 )
      break;
LABEL_9:
    v7 = ++v3;
    if ( v3 >= this[6] )
      return 0;
  }
  if ( _stricmp((const char *)(a2 + 16), (const char *)(v5 + 16))
    || _stricmp((const char *)(a2 + 116), (const char *)(v5 + 116))
    || *(_DWORD *)(a2 + 12) != *(_DWORD *)(v5 + 12) )
  {
    v3 = v7;
    goto LABEL_9;
  }
  return v5;
}
