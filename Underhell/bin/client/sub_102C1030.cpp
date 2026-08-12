_DWORD *sub_102C1030()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)&off_103E9C30);
  off_103E9C30 = (void (__noreturn **)())&PrecacheEffectMuzzleFlash::ClientEffectRegister::`vftable';
  return result;
}
