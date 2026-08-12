_DWORD *sub_102C5420()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)off_103ECFC0);
  off_103ECFC0[0] = (void (__noreturn **)())&PrecacheTracers::ClientEffectRegister::`vftable';
  return result;
}
