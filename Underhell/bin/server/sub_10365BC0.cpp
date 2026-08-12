_DWORD *__thiscall sub_10365BC0(_DWORD *this)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // esi
  int v6; // eax

  sub_100422B0(this);
  result = (_DWORD *)dword_106E7F14;
  v3 = dword_106E7F08;
  v4 = 0;
  if ( dword_106E7F14 <= 0 )
    goto LABEL_6;
  while ( *(_DWORD **)(dword_106E7F08 + 4 * v4) != this )
  {
    if ( ++v4 >= dword_106E7F14 )
      goto LABEL_6;
  }
  if ( v4 == -1 )
  {
LABEL_6:
    v5 = dword_106E7F14;
    if ( dword_106E7F14 + 1 > dword_106E7F0C )
    {
      sub_102ABFC0(&dword_106E7F08, dword_106E7F14 - dword_106E7F0C + 1);
      result = (_DWORD *)dword_106E7F14;
      v3 = dword_106E7F08;
    }
    dword_106E7F14 = (int)result + 1;
    v6 = (int)result - v5;
    dword_106E7F18 = v3;
    if ( v6 > 0 )
    {
      memcpy((void *)(v3 + 4 * v5 + 4), (const void *)(v3 + 4 * v5), 4 * v6);
      v3 = dword_106E7F08;
    }
    result = (_DWORD *)(v3 + 4 * v5);
    if ( result )
      *result = this;
  }
  return result;
}
