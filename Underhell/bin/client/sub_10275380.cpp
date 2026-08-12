bool __thiscall sub_10275380(_DWORD *this, int a2)
{
  int v2; // esi
  int v4; // esi
  int v5; // edx
  int v6; // eax
  _DWORD *v7; // ecx

  if ( a2 < 0 )
    return 0;
  if ( a2 >= this[54] )
    return 0;
  if ( a2 > this[60] )
    return 0;
  v2 = 12 * a2 + this[53];
  if ( *(_DWORD *)(v2 + 4) == a2 && *(_DWORD *)(v2 + 8) != a2 )
    return 0;
  v4 = *(_DWORD *)(12 * a2 + this[53]);
  v5 = this[72];
  v6 = 0;
  if ( v5 <= 0 )
  {
LABEL_11:
    v6 = -1;
  }
  else
  {
    v7 = (_DWORD *)this[69];
    while ( *v7 != v4 )
    {
      ++v6;
      ++v7;
      if ( v6 >= v5 )
        goto LABEL_11;
    }
  }
  return v6 != -1;
}
