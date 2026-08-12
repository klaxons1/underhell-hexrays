_DWORD *sub_102BE810()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)&off_103E7EF8);
  off_103E7EF8 = (void (__noreturn **)())&PrecachePostProcessingEffects::ClientEffectRegister::`vftable';
  return result;
}
