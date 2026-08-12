int __thiscall sub_10283460(_DWORD *this, int a2)
{
  int v3; // edi
  int *v4; // eax
  int *v5; // eax
  int result; // eax

  v3 = sub_102831E0(this, a2);
  if ( (dword_10481A88 & 1) == 0 )
  {
    dword_10481A88 |= 1u;
    dword_10481A78 = -1;
    dword_10481A7C = -1;
    dword_10481A80 = -1;
    dword_10481A84 = 1;
  }
  if ( v3 == -1 )
    v4 = &dword_10481A78;
  else
    v4 = (int *)(this[1] + 20 * v3);
  *(_DWORD *)(this[1] + 20 * a2 + 4) = *v4;
  if ( (dword_10481A88 & 1) == 0 )
  {
    dword_10481A88 |= 1u;
    dword_10481A78 = -1;
    dword_10481A7C = -1;
    dword_10481A80 = -1;
    dword_10481A84 = 1;
  }
  if ( v3 == -1 )
    v5 = &dword_10481A78;
  else
    v5 = (int *)(this[1] + 20 * v3);
  if ( *v5 != -1 )
    *(_DWORD *)(this[1] + 20 * sub_10283190(this, v3) + 8) = a2;
  if ( v3 != -1 )
    *(_DWORD *)(this[1] + 20 * v3 + 8) = sub_10283140(this, a2);
  if ( a2 == this[4] )
  {
    this[4] = v3;
  }
  else if ( sub_102833F0(this, a2) )
  {
    *(_DWORD *)(this[1] + 20 * sub_10283140(this, a2)) = v3;
  }
  else
  {
    *(_DWORD *)(this[1] + 20 * sub_10283140(this, a2) + 4) = v3;
  }
  result = 5 * v3;
  *(_DWORD *)(this[1] + 20 * v3) = a2;
  if ( a2 != -1 )
    *(_DWORD *)(this[1] + 20 * a2 + 8) = v3;
  return result;
}
