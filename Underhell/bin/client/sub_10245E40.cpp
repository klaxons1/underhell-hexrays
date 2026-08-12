int __thiscall sub_10245E40(_DWORD *this, int a2)
{
  int v3; // edi
  int *v4; // eax
  int *v5; // eax
  int result; // eax

  v3 = sub_10245BF0(this, a2);
  if ( (dword_1047CC4C & 1) == 0 )
  {
    dword_1047CC4C |= 1u;
    dword_1047CC3C = -1;
    dword_1047CC40 = -1;
    dword_1047CC44 = -1;
    dword_1047CC48 = 1;
  }
  if ( v3 == -1 )
    v4 = &dword_1047CC3C;
  else
    v4 = (int *)(this[1] + 24 * v3);
  *(_DWORD *)(this[1] + 24 * a2 + 4) = *v4;
  if ( (dword_1047CC4C & 1) == 0 )
  {
    dword_1047CC4C |= 1u;
    dword_1047CC3C = -1;
    dword_1047CC40 = -1;
    dword_1047CC44 = -1;
    dword_1047CC48 = 1;
  }
  if ( v3 == -1 )
    v5 = &dword_1047CC3C;
  else
    v5 = (int *)(this[1] + 24 * v3);
  if ( *v5 != -1 )
    *(_DWORD *)(this[1] + 24 * sub_10245BA0(this, v3) + 8) = a2;
  if ( v3 != -1 )
    *(_DWORD *)(this[1] + 24 * v3 + 8) = sub_10245AE0(this, a2);
  if ( a2 == this[4] )
  {
    this[4] = v3;
  }
  else if ( sub_10245DD0(this, a2) )
  {
    *(_DWORD *)(this[1] + 24 * sub_10245AE0(this, a2)) = v3;
  }
  else
  {
    *(_DWORD *)(this[1] + 24 * sub_10245AE0(this, a2) + 4) = v3;
  }
  result = 3 * v3;
  *(_DWORD *)(this[1] + 24 * v3) = a2;
  if ( a2 != -1 )
    *(_DWORD *)(this[1] + 24 * a2 + 8) = v3;
  return result;
}
