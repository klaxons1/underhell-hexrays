void __thiscall sub_101749C0(_DWORD *this, __int64 a2, int a3, int a4)
{
  int v5; // eax

  if ( (_DWORD)a2
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 320))(a2)
    && __RTDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBasePlayer `RTTI Type Descriptor',
         (int)&CHL2_Player `RTTI Type Descriptor',
         0)
    && (unsigned __int8)sub_102DC450(1.0, (int)"ItemBattery.Touch", 100) )
  {
    sub_1010DD80(this + 282, a2, 0.0);
    v5 = this[281];
    if ( v5 )
    {
      *(_DWORD *)(*(_DWORD *)(v5 + 8) + 4) = *(_DWORD *)(v5 + 4);
      *(_DWORD *)(*(_DWORD *)(v5 + 4) + 8) = *(_DWORD *)(v5 + 8);
      --dword_106960F0;
      sub_10184660(v5);
    }
    this[281] = 0;
    sub_1025FAC0(this);
  }
}
