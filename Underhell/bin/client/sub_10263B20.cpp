bool __thiscall sub_10263B20(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = sub_10263940(this, a2);
  if ( (dword_10480478 & 1) == 0 )
  {
    dword_10480478 |= 1u;
    dword_10480468 = -1;
    dword_1048046C = -1;
    dword_10480470 = -1;
    dword_10480474 = 1;
  }
  if ( v3 == -1 )
    return dword_10480468 == a2;
  else
    return *(_DWORD *)(this[1] + 24 * v3) == a2;
}
