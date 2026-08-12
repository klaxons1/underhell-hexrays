_DWORD *sub_102B2C00()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)&off_103DABD8);
  off_103DABD8 = (void (__noreturn *)())&SmokeStackMaterials::ClientEffectRegister::`vftable';
  return result;
}
