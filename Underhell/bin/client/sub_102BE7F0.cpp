_DWORD *sub_102BE7F0()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)off_103E7EF4);
  off_103E7EF4[0] = (void (__noreturn **)())&PrecacheViewRender::ClientEffectRegister::`vftable';
  return result;
}
