double __thiscall sub_10065960(_WORD *this)
{
  double v2; // st7
  unsigned int v3; // edx
  float v5[2]; // [esp+4h] [ebp-8h] BYREF

  if ( (this[75] & 0x100) == 0 )
    return 0.0;
  v2 = sub_10065370(*(unsigned __int16 *)((char *)this + 153));
  v3 = *(unsigned __int16 *)((char *)this + 155);
  v5[0] = v2;
  v5[1] = sub_10065370(v3);
  return sub_10171610(v5);
}
