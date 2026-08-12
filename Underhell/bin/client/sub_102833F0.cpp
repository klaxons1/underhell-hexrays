bool __thiscall sub_102833F0(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = sub_10283140(this, a2);
  if ( (dword_10481A88 & 1) == 0 )
  {
    dword_10481A88 |= 1u;
    dword_10481A78 = -1;
    dword_10481A7C = -1;
    dword_10481A80 = -1;
    dword_10481A84 = 1;
  }
  if ( v3 == -1 )
    return dword_10481A78 == a2;
  else
    return *(_DWORD *)(this[1] + 20 * v3) == a2;
}
