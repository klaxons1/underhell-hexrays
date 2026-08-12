int __thiscall sub_10170140(_DWORD *this)
{
  int result; // eax
  _DWORD *v3; // [esp+4h] [ebp-4h] BYREF

  *this = &IGameSystem::`vftable';
  v3 = this;
  sub_1023E0F0(&v3);
  result = __RTDynamicCast(
             (int)this,
             0,
             (struct _s_RTTICompleteObjectLocator *)&IGameSystem `RTTI Type Descriptor',
             (int)&IGameSystemPerFrame `RTTI Type Descriptor',
             0);
  if ( result )
  {
    v3 = this;
    return sub_1023E0F0(&v3);
  }
  return result;
}
