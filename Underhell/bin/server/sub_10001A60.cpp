int __thiscall sub_10001A60(void *this, int a2, int a3, int a4, int a5)
{
  int result; // eax

  result = __RTDynamicCast(
             a3,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CBounceBomb `RTTI Type Descriptor',
             0);
  if ( result )
  {
    if ( *(_BYTE *)(result + 1177) )
      return sub_100BC7D0(this);
  }
  return result;
}
