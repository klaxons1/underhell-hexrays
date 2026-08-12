int __thiscall sub_10266E40(volatile signed __int32 *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // edi

  v3 = *((_DWORD *)this + 373);
  if ( v3 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 292))(v3, 1);
    *((_DWORD *)this + 373) = 0;
  }
  (*(void (__thiscall **)(volatile signed __int32 *))(*this + 852))(this);
  v4 = (*(int (__thiscall **)(volatile signed __int32 *))(*this + 340))(this);
  v5 = __RTDynamicCast(
         v4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&IServerVehicle `RTTI Type Descriptor',
         (int)&CFourWheelServerVehicle `RTTI Type Descriptor',
         0);
  *((_DWORD *)this + 282) = *(_DWORD *)(*(int (__thiscall **)(volatile signed __int32 *))(*this + 8))(this);
  *((_DWORD *)this + 283) = v5;
  return sub_100BDCB0(this, a2);
}
