int sub_102B47F0()
{
  sub_102292A0(dword_10413058, (int)"cl_predict", "1.0", 512, "Perform client side prediction.");
  dword_10413058[0] = (int)&CBoundedCvar_Predict::`vftable';
  dword_10413070 = (int)&CBoundedCvar_Predict::`vftable';
  return atexit(sub_102C90B0);
}
