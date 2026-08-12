double __thiscall sub_10065910(int this)
{
  double v2; // st7
  unsigned int v3; // ecx
  float v5[2]; // [esp+4h] [ebp-8h] BYREF

  if ( (*(_BYTE *)(this + 150) & 1) == 0 )
    return 0.0;
  v2 = sub_10065370(*(unsigned __int16 *)(this + 136));
  v3 = *(unsigned __int16 *)(this + 138);
  v5[0] = v2;
  v5[1] = sub_10065370(v3);
  return sub_10171610(v5);
}
