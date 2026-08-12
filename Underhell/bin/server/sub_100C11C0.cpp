double __thiscall sub_100C11C0(int this, int a2, int a3)
{
  const char *v4; // esi
  float *v6; // ebx

  if ( a2 )
  {
    if ( (sub_100BA270(a2, a3) & 1) != 0 )
    {
      return 1.0;
    }
    else
    {
      v6 = (float *)(sub_10245550(a3) + 108);
      return 1.0 - sub_100C0F70(this, a3) * *v6 * *(float *)(this + 864);
    }
  }
  else
  {
    v4 = *(const char **)(this + 92);
    if ( !v4 )
      v4 = String;
    DevWarning(2, "CBaseAnimating::LastVisibleCycle( %d ) NULL pstudiohdr on %s!\n", a3, v4);
    return 1.0;
  }
}
