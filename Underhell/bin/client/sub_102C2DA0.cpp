_DWORD *sub_102C2DA0()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)&off_103EB3FC);
  off_103EB3FC = (void (__noreturn *)())&PrecacheEffectFlares::ClientEffectRegister::`vftable';
  return result;
}
