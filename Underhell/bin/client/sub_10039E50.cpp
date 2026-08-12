int __thiscall sub_10039E50(int this)
{
  int v1; // edx
  int v2; // eax

  if ( *(_WORD *)(this + 576) <= 1u )
    return *(_DWORD *)(this + 564);
  v1 = *(unsigned __int16 *)(this + 572);
  v2 = *(unsigned __int16 *)(this + 574) + 1;
  if ( v2 >= v1 )
    v2 -= v1;
  return *(_DWORD *)(this + 568) + 16 * v2 + 4;
}
