int __thiscall sub_10283590(_DWORD *this, int a2)
{
  int *v3; // eax
  int v4; // edi
  int v5; // eax
  int result; // eax

  if ( (dword_10481A88 & 1) == 0 )
  {
    dword_10481A88 |= 1u;
    dword_10481A78 = -1;
    dword_10481A7C = -1;
    dword_10481A80 = -1;
    dword_10481A84 = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_10481A78;
  else
    v3 = (int *)(this[1] + 20 * a2);
  v4 = *v3;
  *(_DWORD *)(this[1] + 20 * a2) = sub_102831E0(this, *v3);
  if ( sub_102831E0(this, v4) != -1 )
    *(_DWORD *)(this[1] + 20 * sub_102831E0(this, v4) + 8) = a2;
  if ( v4 != -1 )
    *(_DWORD *)(this[1] + 20 * v4 + 8) = sub_10283140(this, a2);
  if ( a2 == this[4] )
  {
    this[4] = v4;
  }
  else
  {
    v5 = sub_10283140(this, a2);
    if ( sub_102831E0(this, v5) == a2 )
      *(_DWORD *)(this[1] + 20 * sub_10283140(this, a2) + 4) = v4;
    else
      *(_DWORD *)(this[1] + 20 * sub_10283140(this, a2)) = v4;
  }
  result = 5 * v4;
  *(_DWORD *)(this[1] + 20 * v4 + 4) = a2;
  if ( a2 != -1 )
    *(_DWORD *)(this[1] + 20 * a2 + 8) = v4;
  return result;
}
