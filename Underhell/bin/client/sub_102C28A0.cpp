_DWORD *sub_102C28A0()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)&off_103EAF0C);
  off_103EAF0C = (void (__noreturn *)())&PrecacheGunshipFX::ClientEffectRegister::`vftable';
  return result;
}
