int __thiscall sub_10266A70(volatile signed __int32 *this, int a2)
{
  int v3; // eax
  int v4; // edi

  v3 = (*(int (__thiscall **)(volatile signed __int32 *))(*this + 340))(this);
  v4 = __RTDynamicCast(
         v3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&IServerVehicle `RTTI Type Descriptor',
         (int)&CFourWheelServerVehicle `RTTI Type Descriptor',
         0);
  *((_DWORD *)this + 282) = *(_DWORD *)(*(int (__thiscall **)(volatile signed __int32 *))(*this + 8))(this);
  *((_DWORD *)this + 283) = v4;
  return sub_100BDCB0(this, a2);
}
