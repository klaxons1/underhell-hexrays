_DWORD *sub_102B5430()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)off_103DD5DC);
  off_103DD5DC[0] = (void (__noreturn **)())&PrecacheEffectsTest::ClientEffectRegister::`vftable';
  return result;
}
