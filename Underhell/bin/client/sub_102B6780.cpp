_DWORD *sub_102B6780()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)off_103E07B0);
  off_103E07B0[0] = (void (__noreturn **)())&PrecacheEffectGlow::ClientEffectRegister::`vftable';
  return result;
}
