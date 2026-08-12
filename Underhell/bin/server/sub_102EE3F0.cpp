void __thiscall sub_102EE3F0(_DWORD *this, __int64 a2, int a3, int a4)
{
  int v5; // eax
  int v6; // ebx

  if ( (_DWORD)a2 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 320))(a2) )
    {
      v5 = __RTDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBasePlayer `RTTI Type Descriptor',
             (int)&CHL2_Player `RTTI Type Descriptor',
             0);
      v6 = v5;
      if ( v5 )
      {
        if ( *(int *)(v5 + 5044) < 20 )
        {
          sub_1010DD80(this + 282, a2, 0.0);
          sub_1023C380(this, (int)"ItemBattery.Touch", 0.0, 0);
          sub_102E1EC0(v6, 1);
          sub_1025FAC0((int)this);
        }
      }
    }
  }
}
