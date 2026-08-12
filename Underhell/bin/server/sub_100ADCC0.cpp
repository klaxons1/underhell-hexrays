int __thiscall sub_100ADCC0(_DWORD *this)
{
  int v1; // ebx
  int result; // eax
  int *v3; // edx

  v1 = dword_10695154;
  result = this[4];
  while ( 1 )
  {
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10695154 = v1;
      dword_10695144 = -1;
      dword_10695148 = -1;
      dword_1069514C = -1;
      dword_10695150 = 1;
    }
    v3 = result == -1 ? &dword_10695144 : (int *)(this[1] + 28 * result);
    if ( *v3 == -1 )
      break;
    if ( (v1 & 1) == 0 )
    {
      v1 |= 1u;
      dword_10695154 = v1;
      dword_10695144 = -1;
      dword_10695148 = -1;
      dword_1069514C = -1;
      dword_10695150 = 1;
    }
    if ( result == -1 )
      result = dword_10695144;
    else
      result = *(_DWORD *)(this[1] + 28 * result);
  }
  return result;
}
