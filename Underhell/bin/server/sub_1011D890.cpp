int __thiscall sub_1011D890(_DWORD *this, int a2)
{
  int v2; // eax
  int *v4; // ecx
  int v5; // edi
  int *v6; // eax
  int v7; // eax
  int *v8; // ecx
  int *v9; // eax
  int result; // eax

  v2 = dword_1069C54C;
  if ( (dword_1069C54C & 1) == 0 )
  {
    v2 = dword_1069C54C | 1;
    dword_1069C54C |= 1u;
    dword_1069C53C = -1;
    dword_1069C540 = -1;
    dword_1069C544 = -1;
    dword_1069C548 = 1;
  }
  if ( a2 == -1 )
    v4 = &dword_1069C53C;
  else
    v4 = (int *)(this[1] + 40 * a2);
  v5 = v4[1];
  if ( (v2 & 1) == 0 )
  {
    dword_1069C54C = v2 | 1;
    dword_1069C53C = -1;
    dword_1069C540 = -1;
    dword_1069C544 = -1;
    dword_1069C548 = 1;
  }
  if ( v5 == -1 )
    v6 = &dword_1069C53C;
  else
    v6 = (int *)(this[1] + 40 * v5);
  *(_DWORD *)(40 * a2 + this[1] + 4) = *v6;
  v7 = dword_1069C54C;
  if ( (dword_1069C54C & 1) == 0 )
  {
    v7 = dword_1069C54C | 1;
    dword_1069C54C |= 1u;
    dword_1069C53C = -1;
    dword_1069C540 = -1;
    dword_1069C544 = -1;
    dword_1069C548 = 1;
  }
  if ( v5 == -1 )
    v8 = &dword_1069C53C;
  else
    v8 = (int *)(this[1] + 40 * v5);
  if ( *v8 != -1 )
  {
    if ( (v7 & 1) == 0 )
    {
      dword_1069C54C = v7 | 1;
      dword_1069C53C = -1;
      dword_1069C540 = -1;
      dword_1069C544 = -1;
      dword_1069C548 = 1;
    }
    if ( v5 == -1 )
      v9 = &dword_1069C53C;
    else
      v9 = (int *)(this[1] + 40 * v5);
    *(_DWORD *)(this[1] + 40 * *v9 + 8) = a2;
  }
  if ( v5 != -1 )
    *(_DWORD *)(this[1] + 40 * v5 + 8) = sub_1011D6D0(this, a2);
  if ( a2 == this[4] )
  {
    this[4] = v5;
  }
  else if ( sub_1011D7E0(this, a2) )
  {
    *(_DWORD *)(this[1] + 40 * sub_1011D6D0(this, a2)) = v5;
  }
  else
  {
    *(_DWORD *)(this[1] + 40 * sub_1011D6D0(this, a2) + 4) = v5;
  }
  result = 5 * v5;
  *(_DWORD *)(this[1] + 40 * v5) = a2;
  if ( a2 != -1 )
  {
    result = 40 * a2;
    *(_DWORD *)(40 * a2 + this[1] + 8) = v5;
  }
  return result;
}
