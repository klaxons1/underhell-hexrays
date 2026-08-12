_DWORD *sub_102C1A80()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)off_103EA538);
  off_103EA538[0] = (void (__noreturn **)())&PrecacheSmokeFogOverlay::ClientEffectRegister::`vftable';
  return result;
}
