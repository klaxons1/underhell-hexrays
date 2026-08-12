_DWORD *sub_102C4F70()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)&off_103EC970);
  off_103EC970 = (void (__noreturn **)())&PrecacheEffectStunstick::ClientEffectRegister::`vftable';
  return result;
}
