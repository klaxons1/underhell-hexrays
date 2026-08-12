_DWORD *sub_102B4640()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)&off_103DC4A8);
  off_103DC4A8 = (void (__noreturn *)())&PrecacheEffectVGuiScreen::ClientEffectRegister::`vftable';
  return result;
}
