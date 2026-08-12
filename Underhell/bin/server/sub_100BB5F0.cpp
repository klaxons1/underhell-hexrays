int __thiscall sub_100BB5F0(_DWORD *this, int a2)
{
  int v2; // eax
  int *v4; // ecx
  int v5; // edi
  int *v6; // eax
  int v7; // eax
  int *v8; // ecx
  int *v9; // eax
  int result; // eax

  v2 = dword_106956C8;
  if ( (dword_106956C8 & 1) == 0 )
  {
    v2 = dword_106956C8 | 1;
    dword_106956C8 |= 1u;
    dword_106956B8 = -1;
    dword_106956BC = -1;
    dword_106956C0 = -1;
    dword_106956C4 = 1;
  }
  if ( a2 == -1 )
    v4 = &dword_106956B8;
  else
    v4 = (int *)(this[1] + 24 * a2);
  v5 = v4[1];
  if ( (v2 & 1) == 0 )
  {
    dword_106956C8 = v2 | 1;
    dword_106956B8 = -1;
    dword_106956BC = -1;
    dword_106956C0 = -1;
    dword_106956C4 = 1;
  }
  if ( v5 == -1 )
    v6 = &dword_106956B8;
  else
    v6 = (int *)(this[1] + 24 * v5);
  *(_DWORD *)(24 * a2 + this[1] + 4) = *v6;
  v7 = dword_106956C8;
  if ( (dword_106956C8 & 1) == 0 )
  {
    v7 = dword_106956C8 | 1;
    dword_106956C8 |= 1u;
    dword_106956B8 = -1;
    dword_106956BC = -1;
    dword_106956C0 = -1;
    dword_106956C4 = 1;
  }
  if ( v5 == -1 )
    v8 = &dword_106956B8;
  else
    v8 = (int *)(this[1] + 24 * v5);
  if ( *v8 != -1 )
  {
    if ( (v7 & 1) == 0 )
    {
      dword_106956C8 = v7 | 1;
      dword_106956B8 = -1;
      dword_106956BC = -1;
      dword_106956C0 = -1;
      dword_106956C4 = 1;
    }
    if ( v5 == -1 )
      v9 = &dword_106956B8;
    else
      v9 = (int *)(this[1] + 24 * v5);
    *(_DWORD *)(this[1] + 24 * *v9 + 8) = a2;
  }
  if ( v5 != -1 )
    *(_DWORD *)(this[1] + 24 * v5 + 8) = sub_100BB240(this, a2);
  if ( a2 == this[4] )
  {
    this[4] = v5;
  }
  else if ( sub_100BB540(this, a2) )
  {
    *(_DWORD *)(this[1] + 24 * sub_100BB240(this, a2)) = v5;
  }
  else
  {
    *(_DWORD *)(this[1] + 24 * sub_100BB240(this, a2) + 4) = v5;
  }
  result = 3 * v5;
  *(_DWORD *)(this[1] + 24 * v5) = a2;
  if ( a2 != -1 )
  {
    result = 24 * a2;
    *(_DWORD *)(24 * a2 + this[1] + 8) = v5;
  }
  return result;
}
