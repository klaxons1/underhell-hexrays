int __thiscall sub_10263D70(_DWORD *this, int a2)
{
  int v3; // edi
  int *v4; // eax
  int *v5; // eax
  int result; // eax

  v3 = sub_102639E0(this, a2);
  if ( (dword_10480478 & 1) == 0 )
  {
    dword_10480478 |= 1u;
    dword_10480468 = -1;
    dword_1048046C = -1;
    dword_10480470 = -1;
    dword_10480474 = 1;
  }
  if ( v3 == -1 )
    v4 = &dword_10480468;
  else
    v4 = (int *)(this[1] + 24 * v3);
  *(_DWORD *)(this[1] + 24 * a2 + 4) = *v4;
  if ( (dword_10480478 & 1) == 0 )
  {
    dword_10480478 |= 1u;
    dword_10480468 = -1;
    dword_1048046C = -1;
    dword_10480470 = -1;
    dword_10480474 = 1;
  }
  if ( v3 == -1 )
    v5 = &dword_10480468;
  else
    v5 = (int *)(this[1] + 24 * v3);
  if ( *v5 != -1 )
    *(_DWORD *)(this[1] + 24 * sub_10263990(this, v3) + 8) = a2;
  if ( v3 != -1 )
    *(_DWORD *)(this[1] + 24 * v3 + 8) = sub_10263940(this, a2);
  if ( a2 == this[4] )
  {
    this[4] = v3;
  }
  else if ( sub_10263B20(this, a2) )
  {
    *(_DWORD *)(this[1] + 24 * sub_10263940(this, a2)) = v3;
  }
  else
  {
    *(_DWORD *)(this[1] + 24 * sub_10263940(this, a2) + 4) = v3;
  }
  result = 3 * v3;
  *(_DWORD *)(this[1] + 24 * v3) = a2;
  if ( a2 != -1 )
    *(_DWORD *)(this[1] + 24 * a2 + 8) = v3;
  return result;
}
