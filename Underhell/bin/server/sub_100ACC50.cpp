int __thiscall sub_100ACC50(_DWORD *this, int a2)
{
  if ( (dword_10695154 & 1) == 0 )
  {
    dword_10695154 |= 1u;
    dword_10695144 = -1;
    dword_10695148 = -1;
    dword_1069514C = -1;
    dword_10695150 = 1;
  }
  if ( a2 == -1 )
    return dword_10695148;
  else
    return *(_DWORD *)(this[1] + 28 * a2 + 4);
}
