int __thiscall sub_100025D0(_DWORD *this, int a2)
{
  int v2; // eax
  int *v4; // ecx
  int v5; // edi
  int *v6; // eax
  int v7; // eax
  int *v8; // ecx
  int *v9; // eax
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
  v5 = v4[1];
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
  *(_DWORD *)(40 * a2 + this[1] + 4) = *v6;
  v7 = dword_10690170;
  if ( (dword_10690170 & 1) == 0 )
  {
    v7 = dword_10690170 | 1;
    dword_10690170 |= 1u;
    dword_10690160 = -1;
    dword_10690164 = -1;
    dword_10690168 = -1;
    dword_1069016C = 1;
  }
  if ( v5 == -1 )
    v8 = &dword_10690160;
  else
    v8 = (int *)(this[1] + 40 * v5);
  if ( *v8 != -1 )
  {
    if ( (v7 & 1) == 0 )
    {
      dword_10690170 = v7 | 1;
      dword_10690160 = -1;
      dword_10690164 = -1;
      dword_10690168 = -1;
      dword_1069016C = 1;
    }
    if ( v5 == -1 )
      v9 = &dword_10690160;
    else
      v9 = (int *)(this[1] + 40 * v5);
    *(_DWORD *)(this[1] + 40 * *v9 + 8) = a2;
  }
  if ( v5 != -1 )
    *(_DWORD *)(this[1] + 40 * v5 + 8) = sub_10002410(this, a2);
  if ( a2 == this[4] )
  {
    this[4] = v5;
  }
  else if ( sub_10002520(this, a2) )
  {
    *(_DWORD *)(this[1] + 40 * sub_10002410(this, a2)) = v5;
  }
  else
  {
    *(_DWORD *)(this[1] + 40 * sub_10002410(this, a2) + 4) = v5;
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
