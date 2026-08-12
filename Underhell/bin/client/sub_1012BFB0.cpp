int __thiscall sub_1012BFB0(_DWORD *this, int a2)
{
  int v2; // eax
  int *v4; // ecx
  int v5; // edi
  int *v6; // eax
  int *v7; // eax
  int result; // eax

  v2 = dword_10439114;
  if ( (dword_10439114 & 1) == 0 )
  {
    v2 = dword_10439114 | 1;
    dword_10439114 |= 1u;
    dword_10439104 = -1;
    dword_10439108 = -1;
    dword_1043910C = -1;
    dword_10439110 = 1;
  }
  if ( a2 == -1 )
    v4 = &dword_10439104;
  else
    v4 = (int *)(this[1] + 24 * a2);
  v5 = *v4;
  if ( (v2 & 1) == 0 )
  {
    dword_10439114 = v2 | 1;
    dword_10439104 = -1;
    dword_10439108 = -1;
    dword_1043910C = -1;
    dword_10439110 = 1;
  }
  if ( v5 == -1 )
    v6 = &dword_10439104;
  else
    v6 = (int *)(this[1] + 24 * v5);
  *(_DWORD *)(24 * a2 + this[1]) = v6[1];
  if ( (dword_10439114 & 1) == 0 )
  {
    dword_10439114 |= 1u;
    dword_10439104 = -1;
    dword_10439108 = -1;
    dword_1043910C = -1;
    dword_10439110 = 1;
  }
  if ( v5 == -1 )
    v7 = &dword_10439104;
  else
    v7 = (int *)(this[1] + 24 * v5);
  if ( v7[1] != -1 )
    *(_DWORD *)(this[1] + 24 * sub_1012BB40(this, v5) + 8) = a2;
  if ( v5 != -1 )
    *(_DWORD *)(this[1] + 24 * v5 + 8) = sub_1012BAE0(this, a2);
  if ( a2 == this[4] )
  {
    this[4] = v5;
  }
  else if ( sub_1012BBA0(this, a2) )
  {
    *(_DWORD *)(this[1] + 24 * sub_1012BAE0(this, a2) + 4) = v5;
  }
  else
  {
    *(_DWORD *)(this[1] + 24 * sub_1012BAE0(this, a2)) = v5;
  }
  result = 3 * v5;
  *(_DWORD *)(this[1] + 24 * v5 + 4) = a2;
  if ( a2 != -1 )
  {
    result = 24 * a2;
    *(_DWORD *)(24 * a2 + this[1] + 8) = v5;
  }
  return result;
}
