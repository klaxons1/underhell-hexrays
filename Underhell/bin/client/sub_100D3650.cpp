_DWORD *__thiscall sub_100D3650(_DWORD *this, char a2)
{
  _DWORD *v4; // [esp+4h] [ebp-4h] BYREF

  *this = &IGameSystem::`vftable';
  v4 = this;
  sub_1012D820(&v4);
  if ( __RTDynamicCast(
         (int)this,
         0,
         (struct _s_RTTICompleteObjectLocator *)&IGameSystem `RTTI Type Descriptor',
         (int)&IGameSystemPerFrame `RTTI Type Descriptor',
         0) )
  {
    v4 = this;
    sub_1012D820(&v4);
  }
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
