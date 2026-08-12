_DWORD *sub_102BE910()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)off_103E82F8);
  off_103E82F8[0] = (void (__noreturn **)())&PrecacheEffectWarp::ClientEffectRegister::`vftable';
  return result;
}
