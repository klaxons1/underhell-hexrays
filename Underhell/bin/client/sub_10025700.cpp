double __thiscall sub_10025700(void *this, int a2, int a3)
{
  if ( a2 )
  {
    if ( a3 < sub_10126D70(a2) && a3 >= 0 )
      return sub_1001DD30(a2, a3, (int)this + 1404);
    DevWarning(2, "C_BaseAnimating::SequenceDuration( %d ) out of range\n", a3);
  }
  return 0.1;
}
