int __thiscall sub_1041D6D0(_DWORD *this, int a2)
{
  int *v3; // eax
  int v4; // edi
  int v5; // eax
  int result; // eax

  if ( (dword_106F1860 & 1) == 0 )
  {
    dword_106F1860 |= 1u;
    dword_106F1850 = -1;
    dword_106F1854 = -1;
    dword_106F1858 = -1;
    dword_106F185C = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_106F1850;
  else
    v3 = (int *)(this[1] + 24 * a2);
  v4 = *v3;
  *(_DWORD *)(this[1] + 24 * a2) = sub_1041D320(this, *v3);
  if ( sub_1041D320(this, v4) != -1 )
    *(_DWORD *)(this[1] + 24 * sub_1041D320(this, v4) + 8) = a2;
  if ( v4 != -1 )
    *(_DWORD *)(this[1] + 24 * v4 + 8) = sub_1041D280(this, a2);
  if ( a2 == this[4] )
  {
    this[4] = v4;
  }
  else
  {
    v5 = sub_1041D280(this, a2);
    if ( sub_1041D320(this, v5) == a2 )
      *(_DWORD *)(this[1] + 24 * sub_1041D280(this, a2) + 4) = v4;
    else
      *(_DWORD *)(this[1] + 24 * sub_1041D280(this, a2)) = v4;
  }
  result = 3 * v4;
  *(_DWORD *)(this[1] + 24 * v4 + 4) = a2;
  if ( a2 != -1 )
    *(_DWORD *)(this[1] + 24 * a2 + 8) = v4;
  return result;
}
