bool __thiscall sub_103FB260(_DWORD *this, _DWORD *a2)
{
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // edi
  int v7; // edx
  int v8; // eax

  if ( !a2
    || (*(int (__thiscall **)(_DWORD *))(*a2 + 208))(a2)
    && (*(_DWORD *)((*(int (__thiscall **)(_DWORD *))(*a2 + 208))(a2) + 256) & 0x10000000) != 0 )
  {
    return 0;
  }
  v4 = a2[62];
  if ( ((v4 & 0x100000) != 0 || (v4 & 0x200000) != 0)
    && __RTDynamicCast(
         (int)a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CPhysBox `RTTI Type Descriptor',
         0) )
  {
    return (a2[62] & 0x200000) == 0;
  }
  if ( (a2[62] & 0x100000) != 0
    && __RTDynamicCast(
         (int)a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CPhysicsProp `RTTI Type Descriptor',
         0) )
  {
    return 1;
  }
  if ( (a2[63] & 0x40000000) != 0 )
    return 0;
  v5 = sub_100D1940(this);
  v6 = (_DWORD *)v5;
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5) && (_DWORD *)sub_101C5260(v6) == a2 )
      return 0;
  }
  v7 = *a2;
  if ( *(_BYTE *)(dword_106B3CDC + 12) != 1 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(v7 + 628))(a2) )
      return sub_101E48B0((int)a2, *(float *)(dword_106EFDDC + 44), 0.0);
    return 0;
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(v7 + 284))(a2) )
  {
    v8 = sub_100D7680((int)a2);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 764))(v8) )
      return 1;
  }
  if ( __RTDynamicCast(
         (int)a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CRagdollProp `RTTI Type Descriptor',
         0) )
  {
    return 1;
  }
  return sub_101E48B0((int)a2, 0.0, 0.0);
}
