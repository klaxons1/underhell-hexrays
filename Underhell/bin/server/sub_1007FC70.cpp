char __thiscall sub_1007FC70(_DWORD *this, int a2, int a3, int a4, _DWORD *a5)
{
  if ( !(*(unsigned __int8 (__thiscall **)(int, int, int, int, _DWORD *))(*(_DWORD *)(*(this - 1) + 2104) + 32))(
          *(this - 1) + 2104,
          a2,
          a3,
          a4,
          a5) )
  {
    if ( (this[29] == -1
       || off_1061BE18[4 * (this[29] & 0xFFF) + 2] != this[29] >> 12
       || !off_1061BE18[4 * (this[29] & 0xFFF) + 1])
      && *(_DWORD *)(a3 + 28)
      && *(float *)(a3 + 32) - *(float *)(a3 + 36) < sub_100737B0(*(_DWORD *)(*(this - 1) + 1676))
      && *(_DWORD *)(a3 + 28) == sub_101C5260(*(this - 1))
      && ((*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a3 + 28) + 320))(*(_DWORD *)(a3 + 28))
       || __RTDynamicCast(
            *(_DWORD *)(a3 + 28),
            0,
            (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
            (int)&CPhysicsProp `RTTI Type Descriptor',
            0)) )
    {
      sub_10019680(this + 29, *(_DWORD *)(a3 + 28));
      *a5 = 1;
      return 1;
    }
    if ( a4 == 4 )
    {
      (*(void (__thiscall **)(_DWORD *))(*(this - 2) + 48))(this - 2);
      *a5 = 0;
      return 1;
    }
    if ( a4 == 2 )
    {
      if ( sub_1007FAD0((int)(this - 2), a3) )
        *a5 = 0;
    }
  }
  return 1;
}
