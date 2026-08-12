int __thiscall sub_1023CA00(_DWORD *this, int a2)
{
  int v3; // edi
  int *v4; // eax
  int *v5; // eax
  int result; // eax

  v3 = sub_1023C270(this, a2);
  if ( (dword_1047CB44 & 1) == 0 )
  {
    dword_1047CB44 |= 1u;
    dword_1047CB34 = -1;
    dword_1047CB38 = -1;
    dword_1047CB3C = -1;
    dword_1047CB40 = 1;
  }
  if ( v3 == -1 )
    v4 = &dword_1047CB34;
  else
    v4 = (int *)(this[1] + 24 * v3);
  *(_DWORD *)(this[1] + 24 * a2 + 4) = *v4;
  if ( (dword_1047CB44 & 1) == 0 )
  {
    dword_1047CB44 |= 1u;
    dword_1047CB34 = -1;
    dword_1047CB38 = -1;
    dword_1047CB3C = -1;
    dword_1047CB40 = 1;
  }
  if ( v3 == -1 )
    v5 = &dword_1047CB34;
  else
    v5 = (int *)(this[1] + 24 * v3);
  if ( *v5 != -1 )
    *(_DWORD *)(this[1] + 24 * sub_1023C220(this, v3) + 8) = a2;
  if ( v3 != -1 )
    *(_DWORD *)(this[1] + 24 * v3 + 8) = sub_1023C1D0(this, a2);
  if ( a2 == this[4] )
  {
    this[4] = v3;
  }
  else if ( sub_1023C990(this, a2) )
  {
    *(_DWORD *)(this[1] + 24 * sub_1023C1D0(this, a2)) = v3;
  }
  else
  {
    *(_DWORD *)(this[1] + 24 * sub_1023C1D0(this, a2) + 4) = v3;
  }
  result = 3 * v3;
  *(_DWORD *)(this[1] + 24 * v3) = a2;
  if ( a2 != -1 )
    *(_DWORD *)(this[1] + 24 * a2 + 8) = v3;
  return result;
}
