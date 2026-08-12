_DWORD *sub_102C0C80()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)&off_103E9A84);
  off_103E9A84 = (void (__noreturn **)())&PrecacheEffectGlassShatter::ClientEffectRegister::`vftable';
  return result;
}
