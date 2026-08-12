int __thiscall sub_1004F100(_DWORD **this, int a2)
{
  int result; // eax

  result = __RTDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
             (int)&C_BreakableSurface `RTTI Type Descriptor',
             0);
  if ( result )
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this[1] + 56))(this[1], *(_DWORD *)(result + 1244));
  return result;
}
