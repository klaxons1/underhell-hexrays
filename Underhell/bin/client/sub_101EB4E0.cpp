bool __thiscall sub_101EB4E0(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = sub_101EAD90(this, a2);
  if ( (dword_10458E20 & 1) == 0 )
  {
    dword_10458E20 |= 1u;
    dword_10458E10 = -1;
    dword_10458E14 = -1;
    dword_10458E18 = -1;
    dword_10458E1C = 1;
  }
  if ( v3 == -1 )
    return dword_10458E10 == a2;
  else
    return *(_DWORD *)(this[1] + 48 * v3) == a2;
}
