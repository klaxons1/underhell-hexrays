_DWORD *sub_102C18D0()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)off_103EA3C0);
  off_103EA3C0[0] = (void (__noreturn **)())&PrecacheMuzzleFlash::ClientEffectRegister::`vftable';
  return result;
}
