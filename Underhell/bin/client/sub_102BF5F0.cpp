_DWORD *sub_102BF5F0()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)&off_103E8E18);
  off_103E8E18 = (void (__noreturn **)())&PrecacheEffectImpacts::ClientEffectRegister::`vftable';
  return result;
}
