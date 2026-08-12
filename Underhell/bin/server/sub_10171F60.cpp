void __thiscall sub_10171F60(_DWORD *this, __int64 a2, int a3, int a4)
{
  if ( (_DWORD)a2
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 320))(a2)
    && __RTDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBasePlayer `RTTI Type Descriptor',
         (int)&CHL2_Player `RTTI Type Descriptor',
         0) )
  {
    if ( (unsigned __int8)sub_102DC450(10.0, (int)"HL2Player.PickupArmor", 100) )
    {
      sub_1010DD80(this + 282, a2, 0.0);
      sub_1025FAC0(this);
    }
  }
}
