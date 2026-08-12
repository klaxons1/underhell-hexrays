double __thiscall sub_10065870(int this)
{
  double v2; // st7
  unsigned int v3; // ecx
  float v5[2]; // [esp+4h] [ebp-8h] BYREF

  if ( (*(_BYTE *)(this + 150) & 8) == 0 )
    return 0.0;
  v2 = sub_10065370(*(unsigned __int16 *)(this + 140));
  v3 = *(unsigned __int16 *)(this + 142);
  v5[0] = v2;
  v5[1] = sub_10065370(v3);
  return sub_10171610(v5);
}
