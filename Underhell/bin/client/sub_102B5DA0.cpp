_DWORD *sub_102B5DA0()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)off_103E01E8);
  off_103E01E8[0] = (void (__noreturn **)())&PrecacheEffectBloodSpray::ClientEffectRegister::`vftable';
  return result;
}
