int sub_102B4830()
{
  sub_102292A0(
    dword_104130A0,
    (int)"cl_interp_ratio",
    "2.0",
    512,
    "Sets the interpolation amount (final amount is cl_interp_ratio / cl_updaterate).");
  dword_104130A0[0] = (int)&CBoundedCvar_InterpRatio::`vftable';
  dword_104130B8 = (int)&CBoundedCvar_InterpRatio::`vftable';
  return atexit(sub_102C90C0);
}
