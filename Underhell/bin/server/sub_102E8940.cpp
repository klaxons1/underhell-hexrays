bool __thiscall sub_102E8940(_DWORD *this, int a2)
{
  int v2; // edx
  int *v3; // eax
  int v4; // eax

  v2 = dword_106E1708;
  if ( (dword_106E1708 & 1) == 0 )
  {
    v2 = dword_106E1708 | 1;
    dword_106E1708 |= 1u;
    dword_106E16F8 = -1;
    dword_106E16FC = -1;
    dword_106E1700 = -1;
    dword_106E1704 = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_106E16F8;
  else
    v3 = (int *)(this[1] + 24 * a2);
  v4 = v3[2];
  if ( (v2 & 1) == 0 )
  {
    dword_106E1708 = v2 | 1;
    dword_106E16F8 = -1;
    dword_106E16FC = -1;
    dword_106E1700 = -1;
    dword_106E1704 = 1;
  }
  if ( v4 == -1 )
    return dword_106E16F8 == a2;
  else
    return *(_DWORD *)(this[1] + 24 * v4) == a2;
}
