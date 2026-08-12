int __thiscall sub_10174F60(_DWORD *this, __int64 a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax
  _BYTE v7[8]; // [esp+14h] [ebp-20h] BYREF
  int v8; // [esp+1Ch] [ebp-18h]
  int v9; // [esp+28h] [ebp-Ch]
  int v10; // [esp+2Ch] [ebp-8h]

  v4 = a2;
  if ( !(_DWORD)a2 || !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a2 + 320))(a2) )
    v4 = 0;
  result = __RTDynamicCast(
             v4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBasePlayer `RTTI Type Descriptor',
             (int)&CHL2_Player `RTTI Type Descriptor',
             0);
  if ( v4 && result )
  {
    if ( !*(_BYTE *)(v4 + 2138) )
      sub_102600F0(v4, "Valve_Hint_NightVision");
    sub_1023C380((int)"HL2Player.PickupItems", 0.0, 0);
    sub_1010DD80(this + 282, a2, 0.0);
    v8 = 1;
    v9 = -1;
    v10 = 6;
    sub_101E36C0(v7);
    sub_102E1EC0(2);
    return sub_1025FAC0(this);
  }
  return result;
}
