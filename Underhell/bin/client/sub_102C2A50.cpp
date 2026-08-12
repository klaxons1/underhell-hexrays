_DWORD *sub_102C2A50()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)&off_103EB068);
  off_103EB068 = (void (__noreturn *)())&PrecacheEffectPlasmaBeam::ClientEffectRegister::`vftable';
  return result;
}
