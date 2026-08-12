int __thiscall sub_10269E90(_DWORD *this, int a2)
{
  int result; // eax

  this[11] = a2;
  result = __RTDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&IDrivableVehicle `RTTI Type Descriptor',
             0);
  this[12] = result;
  return result;
}
