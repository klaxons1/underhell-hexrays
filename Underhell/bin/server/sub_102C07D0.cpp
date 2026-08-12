bool __thiscall sub_102C07D0(_DWORD *this, int a2)
{
  int v2; // edx
  int *v3; // eax
  int v4; // eax

  v2 = dword_106DE034;
  if ( (dword_106DE034 & 1) == 0 )
  {
    v2 = dword_106DE034 | 1;
    dword_106DE034 |= 1u;
    dword_106DE024 = -1;
    dword_106DE028 = -1;
    dword_106DE02C = -1;
    dword_106DE030 = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_106DE024;
  else
    v3 = (int *)(this[1] + 48 * a2);
  v4 = v3[2];
  if ( (v2 & 1) == 0 )
  {
    dword_106DE034 = v2 | 1;
    dword_106DE024 = -1;
    dword_106DE028 = -1;
    dword_106DE02C = -1;
    dword_106DE030 = 1;
  }
  if ( v4 == -1 )
    return dword_106DE028 == a2;
  else
    return *(_DWORD *)(this[1] + 48 * v4 + 4) == a2;
}
