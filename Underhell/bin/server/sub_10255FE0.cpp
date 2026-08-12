_DWORD *__thiscall sub_10255FE0(_DWORD *this, char *a2)
{
  int v3; // edi
  unsigned int v4; // eax
  _DWORD *v5; // esi
  int v7; // [esp+Ch] [ebp-4h]

  v3 = 0;
  v7 = this[271];
  if ( v7 <= 0 )
    return 0;
  while ( 1 )
  {
    v4 = *(_DWORD *)(this[268] + 4 * v3);
    if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(this[268] + 4 * v3) & 0xFFF) + 2] != v4 >> 12 )
      v5 = 0;
    else
      v5 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this[268] + 4 * v3) & 0xFFF) + 1];
    if ( (char *)v5[23] == a2 || sub_100D6240(v5, a2) )
      break;
    if ( ++v3 >= v7 )
      return 0;
  }
  return v5;
}
