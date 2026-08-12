int __thiscall sub_100EDA00(int this)
{
  int result; // eax
  int v2; // esi
  int v3; // eax
  int v4; // edx
  unsigned int v5; // edx

  for ( result = *(unsigned __int16 *)(this + 52);
        result != 0xFFFF;
        result = *(unsigned __int16 *)(*(_DWORD *)(this + 40) + v2 + 6) )
  {
    v2 = 8 * (unsigned __int16)result;
    v3 = *(_DWORD *)(v2 + *(_DWORD *)(this + 40));
    v4 = *(_DWORD *)(v3 + 148);
    if ( (v4 & 0x20) != 0 )
      v5 = v4 | 0x40;
    else
      v5 = v4 & 0xFFFFFFBF;
    *(_DWORD *)(v3 + 148) = v5;
    *(_DWORD *)(v3 + 148) &= ~0x800u;
  }
  return result;
}
