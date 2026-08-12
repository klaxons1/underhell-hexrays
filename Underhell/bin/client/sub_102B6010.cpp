_DWORD *sub_102B6010()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)&off_103E05F0);
  off_103E05F0 = (void (__noreturn **)())&PrecacheEffectSplash::ClientEffectRegister::`vftable';
  return result;
}
