char __thiscall sub_10070940(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // ecx

  v2 = this[3];
  v3 = 0;
  if ( v2 > 0 )
  {
    v4 = (_DWORD *)*this;
    while ( *v4 != a2 )
    {
      ++v3;
      ++v4;
      if ( v3 >= v2 )
        goto LABEL_5;
    }
    return 1;
  }
LABEL_5:
  v5 = this[6];
  if ( v5 != -1 )
  {
    v6 = this[7];
    if ( v6 )
    {
      if ( a2 >= v5 && a2 <= v6 )
        return 1;
    }
    else if ( v5 == a2 )
    {
      return 1;
    }
  }
  return 0;
}
