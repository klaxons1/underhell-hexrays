_DWORD *sub_102B5E20()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)off_103E0294);
  off_103E0294[0] = (void (__noreturn **)())&PrecacheEffectExplosion::ClientEffectRegister::`vftable';
  return result;
}
