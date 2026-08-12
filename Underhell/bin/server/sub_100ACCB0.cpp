bool __thiscall sub_100ACCB0(_DWORD *this, int a2)
{
  int v2; // edx
  int *v3; // eax
  int v4; // eax

  v2 = dword_10695154;
  if ( (dword_10695154 & 1) == 0 )
  {
    v2 = dword_10695154 | 1;
    dword_10695154 |= 1u;
    dword_10695144 = -1;
    dword_10695148 = -1;
    dword_1069514C = -1;
    dword_10695150 = 1;
  }
  if ( a2 == -1 )
    v3 = &dword_10695144;
  else
    v3 = (int *)(this[1] + 28 * a2);
  v4 = v3[2];
  if ( (v2 & 1) == 0 )
  {
    dword_10695154 = v2 | 1;
    dword_10695144 = -1;
    dword_10695148 = -1;
    dword_1069514C = -1;
    dword_10695150 = 1;
  }
  if ( v4 == -1 )
    return dword_10695148 == a2;
  else
    return *(_DWORD *)(this[1] + 28 * v4 + 4) == a2;
}
