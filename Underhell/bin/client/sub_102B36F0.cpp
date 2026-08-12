_DWORD *sub_102B36F0()
{
  int *v0; // eax
  _DWORD *result; // eax

  v0 = sub_1007A590();
  result = sub_1007A530(v0, (int)off_103DB57C);
  off_103DB57C[0] = (void (__noreturn **)())&PrecacheOcclusionProxy::ClientEffectRegister::`vftable';
  return result;
}
