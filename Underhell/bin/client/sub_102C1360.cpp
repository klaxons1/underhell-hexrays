_DWORD *sub_102C1360()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)&off_103EA10C);
  off_103EA10C = (void (__noreturn **)())&PrecachePlayerDecal::ClientEffectRegister::`vftable';
  return result;
}
