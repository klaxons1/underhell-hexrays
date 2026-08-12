bool __thiscall sub_1038E1E0(_DWORD *this, int a2, float a3, int a4)
{
  int v4; // eax
  _DWORD *v6; // eax

  v4 = *(_DWORD *)(a2 + 96);
  if ( v4 )
  {
    v6 = (_DWORD *)__RTDynamicCast(
                     v4,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                     (int)&CPhysicsProp `RTTI Type Descriptor',
                     0);
    if ( v6 && v6[55] )
      this[580] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v6 + 8))(v6);
    else
      this[580] = -1;
  }
  return sub_10022470(this, a2, a3, a4);
}
