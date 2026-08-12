int __thiscall sub_100CC990(_DWORD *this, int a2)
{
  int v2; // eax
  int *v4; // ecx
  int v5; // edi
  int *v6; // eax
  int *v7; // eax
  int result; // eax

  v2 = dword_10430EA8;
  if ( (dword_10430EA8 & 1) == 0 )
  {
    v2 = dword_10430EA8 | 1;
    dword_10430EA8 |= 1u;
    dword_10430E98 = -1;
    dword_10430E9C = -1;
    dword_10430EA0 = -1;
    dword_10430EA4 = 1;
  }
  if ( a2 == -1 )
    v4 = &dword_10430E98;
  else
    v4 = (int *)(this[1] + 24 * a2);
  v5 = *v4;
  if ( (v2 & 1) == 0 )
  {
    dword_10430EA8 = v2 | 1;
    dword_10430E98 = -1;
    dword_10430E9C = -1;
    dword_10430EA0 = -1;
    dword_10430EA4 = 1;
  }
  if ( v5 == -1 )
    v6 = &dword_10430E98;
  else
    v6 = (int *)(this[1] + 24 * v5);
  *(_DWORD *)(24 * a2 + this[1]) = v6[1];
  if ( (dword_10430EA8 & 1) == 0 )
  {
    dword_10430EA8 |= 1u;
    dword_10430E98 = -1;
    dword_10430E9C = -1;
    dword_10430EA0 = -1;
    dword_10430EA4 = 1;
  }
  if ( v5 == -1 )
    v7 = &dword_10430E98;
  else
    v7 = (int *)(this[1] + 24 * v5);
  if ( v7[1] != -1 )
    *(_DWORD *)(this[1] + 24 * sub_100CC170(this, v5) + 8) = a2;
  if ( v5 != -1 )
    *(_DWORD *)(this[1] + 24 * v5 + 8) = sub_100CC040(this, a2);
  if ( a2 == this[4] )
  {
    this[4] = v5;
  }
  else if ( sub_100CC680(this, a2) )
  {
    *(_DWORD *)(this[1] + 24 * sub_100CC040(this, a2) + 4) = v5;
  }
  else
  {
    *(_DWORD *)(this[1] + 24 * sub_100CC040(this, a2)) = v5;
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
