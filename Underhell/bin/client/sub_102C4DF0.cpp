_DWORD *sub_102C4DF0()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)&off_103EC818);
  off_103EC818 = (void (__noreturn *)())&PrecacheEffectCrossbow::ClientEffectRegister::`vftable';
  return result;
}
