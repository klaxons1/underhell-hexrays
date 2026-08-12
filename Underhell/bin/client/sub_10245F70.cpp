int __thiscall sub_10245F70(_DWORD *this, int a2)
{
  int *v3; // eax
  int v4; // edi
  int v5; // eax
  int result; // eax

  if ( (dword_1047CC4C & 1) == 0 )
  {
    dword_1047CC4C |= 1u;
    dword_1047CC3C = -1;
    dword_1047CC40 = -1;
    dword_1047CC44 = -1;
    dword_1047CC48 = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_1047CC3C;
  else
    v3 = (int *)(this[1] + 24 * a2);
  v4 = *v3;
  *(_DWORD *)(this[1] + 24 * a2) = sub_10245BF0(this, *v3);
  if ( sub_10245BF0(this, v4) != -1 )
    *(_DWORD *)(this[1] + 24 * sub_10245BF0(this, v4) + 8) = a2;
  if ( v4 != -1 )
    *(_DWORD *)(this[1] + 24 * v4 + 8) = sub_10245AE0(this, a2);
  if ( a2 == this[4] )
  {
    this[4] = v4;
  }
  else
  {
    v5 = sub_10245AE0(this, a2);
    if ( sub_10245BF0(this, v5) == a2 )
      *(_DWORD *)(this[1] + 24 * sub_10245AE0(this, a2) + 4) = v4;
    else
      *(_DWORD *)(this[1] + 24 * sub_10245AE0(this, a2)) = v4;
  }
  result = 3 * v4;
  *(_DWORD *)(this[1] + 24 * v4 + 4) = a2;
  if ( a2 != -1 )
    *(_DWORD *)(this[1] + 24 * a2 + 8) = v4;
  return result;
}
