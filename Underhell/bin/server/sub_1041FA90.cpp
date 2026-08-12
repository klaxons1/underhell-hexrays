bool __thiscall sub_1041FA90(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = sub_1041F340(this, a2);
  if ( (dword_106F1888 & 1) == 0 )
  {
    dword_106F1888 |= 1u;
    dword_106F1878 = -1;
    dword_106F187C = -1;
    dword_106F1880 = -1;
    dword_106F1884 = 1;
  }
  if ( v3 == -1 )
    return dword_106F1878 == a2;
  else
    return *(_DWORD *)(this[1] + 48 * v3) == a2;
}
