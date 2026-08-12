int __thiscall sub_1041D5A0(_DWORD *this, int a2)
{
  int v3; // edi
  int *v4; // eax
  int *v5; // eax
  int result; // eax

  v3 = sub_1041D320(this, a2);
  if ( (dword_106F1860 & 1) == 0 )
  {
    dword_106F1860 |= 1u;
    dword_106F1850 = -1;
    dword_106F1854 = -1;
    dword_106F1858 = -1;
    dword_106F185C = 1;
  }
  if ( v3 == -1 )
    v4 = &dword_106F1850;
  else
    v4 = (int *)(this[1] + 24 * v3);
  *(_DWORD *)(this[1] + 24 * a2 + 4) = *v4;
  if ( (dword_106F1860 & 1) == 0 )
  {
    dword_106F1860 |= 1u;
    dword_106F1850 = -1;
    dword_106F1854 = -1;
    dword_106F1858 = -1;
    dword_106F185C = 1;
  }
  if ( v3 == -1 )
    v5 = &dword_106F1850;
  else
    v5 = (int *)(this[1] + 24 * v3);
  if ( *v5 != -1 )
    *(_DWORD *)(this[1] + 24 * sub_1041D2D0(this, v3) + 8) = a2;
  if ( v3 != -1 )
    *(_DWORD *)(this[1] + 24 * v3 + 8) = sub_1041D280(this, a2);
  if ( a2 == this[4] )
  {
    this[4] = v3;
  }
  else if ( sub_1041D530(this, a2) )
  {
    *(_DWORD *)(this[1] + 24 * sub_1041D280(this, a2)) = v3;
  }
  else
  {
    *(_DWORD *)(this[1] + 24 * sub_1041D280(this, a2) + 4) = v3;
  }
  result = 3 * v3;
  *(_DWORD *)(this[1] + 24 * v3) = a2;
  if ( a2 != -1 )
    *(_DWORD *)(this[1] + 24 * a2 + 8) = v3;
  return result;
}
