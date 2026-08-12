_DWORD *sub_102B28D0()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)&off_103DA944);
  off_103DA944 = (void (__noreturn *)())&PrecacheEffectBuild::ClientEffectRegister::`vftable';
  return result;
}
