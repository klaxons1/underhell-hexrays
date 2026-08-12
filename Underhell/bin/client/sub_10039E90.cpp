int __thiscall sub_10039E90(int this)
{
  int v1; // edx
  int v2; // eax

  if ( *(_WORD *)(this + 632) <= 1u )
    return *(_DWORD *)(this + 620);
  v1 = *(unsigned __int16 *)(this + 628);
  v2 = *(unsigned __int16 *)(this + 630) + 1;
  if ( v2 >= v1 )
    v2 -= v1;
  return *(_DWORD *)(this + 624) + 16 * v2 + 4;
}
