int __thiscall sub_10002780(_DWORD *this, int a2)
{
  int v2; // eax
  int *v4; // ecx
  int v5; // edi
  int *v6; // eax
  int *v7; // eax
  int result; // eax

  v2 = dword_10690170;
  if ( (dword_10690170 & 1) == 0 )
  {
    v2 = dword_10690170 | 1;
    dword_10690170 |= 1u;
    dword_10690160 = -1;
    dword_10690164 = -1;
    dword_10690168 = -1;
    dword_1069016C = 1;
  }
  if ( a2 == -1 )
    v4 = &dword_10690160;
  else
    v4 = (int *)(this[1] + 40 * a2);
  v5 = *v4;
  if ( (v2 & 1) == 0 )
  {
    dword_10690170 = v2 | 1;
    dword_10690160 = -1;
    dword_10690164 = -1;
    dword_10690168 = -1;
    dword_1069016C = 1;
  }
  if ( v5 == -1 )
    v6 = &dword_10690160;
  else
    v6 = (int *)(this[1] + 40 * v5);
  *(_DWORD *)(40 * a2 + this[1]) = v6[1];
  if ( (dword_10690170 & 1) == 0 )
  {
    dword_10690170 |= 1u;
    dword_10690160 = -1;
    dword_10690164 = -1;
    dword_10690168 = -1;
    dword_1069016C = 1;
  }
  if ( v5 == -1 )
    v7 = &dword_10690160;
  else
    v7 = (int *)(this[1] + 40 * v5);
  if ( v7[1] != -1 )
    *(_DWORD *)(this[1] + 40 * sub_10002220(this, v5) + 8) = a2;
  if ( v5 != -1 )
    *(_DWORD *)(this[1] + 40 * v5 + 8) = sub_10002410(this, a2);
  if ( a2 == this[4] )
  {
    this[4] = v5;
  }
  else if ( sub_10002470(this, a2) )
  {
    *(_DWORD *)(this[1] + 40 * sub_10002410(this, a2) + 4) = v5;
  }
  else
  {
    *(_DWORD *)(this[1] + 40 * sub_10002410(this, a2)) = v5;
  }
  result = 5 * v5;
  *(_DWORD *)(this[1] + 40 * v5 + 4) = a2;
  if ( a2 != -1 )
  {
    result = 40 * a2;
    *(_DWORD *)(40 * a2 + this[1] + 8) = v5;
  }
  return result;
}
