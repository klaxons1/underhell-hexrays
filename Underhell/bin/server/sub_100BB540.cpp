bool __thiscall sub_100BB540(_DWORD *this, int a2)
{
  int v2; // edx
  int *v3; // eax
  int v4; // eax

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
    v3 = &dword_106956B8;
  else
    v3 = (int *)(this[1] + 24 * a2);
  v4 = v3[2];
  if ( (v2 & 1) == 0 )
  {
    dword_106956C8 = v2 | 1;
    dword_106956B8 = -1;
    dword_106956BC = -1;
    dword_106956C0 = -1;
    dword_106956C4 = 1;
  }
  if ( v4 == -1 )
    return dword_106956B8 == a2;
  else
    return *(_DWORD *)(this[1] + 24 * v4) == a2;
}
