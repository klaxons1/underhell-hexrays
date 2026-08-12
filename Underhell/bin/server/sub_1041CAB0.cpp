double __thiscall sub_1041CAB0(int this, float a2)
{
  if ( (*(_BYTE *)(this + 524) & 8) != 0 )
    return (double)(int)(a2 * (double)*(int *)(this + 296) + 0.5) / (double)*(int *)(this + 296);
  else
    return a2;
}
