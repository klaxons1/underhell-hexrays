int sub_102B4870()
{
  sub_10229300(
    &dword_104130E8,
    (int)"cl_interp",
    "0.1",
    512,
    "Sets the interpolation amount (bounded on low side by server interp ratio settings).",
    1,
    0.0,
    1,
    0.5);
  dword_104130E8 = (int)&CBoundedCvar_Interp::`vftable';
  dword_10413100 = (int)&CBoundedCvar_Interp::`vftable';
  return atexit(sub_102C90D0);
}
