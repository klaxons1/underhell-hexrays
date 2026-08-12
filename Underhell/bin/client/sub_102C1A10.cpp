_DWORD *sub_102C1A10()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)off_103EA4B4);
  off_103EA4B4[0] = (void (__noreturn **)())&PrecacheEffectSparks::ClientEffectRegister::`vftable';
  return result;
}
