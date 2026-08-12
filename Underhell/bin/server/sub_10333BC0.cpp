int __thiscall sub_10333BC0(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // edi
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // [esp+10h] [ebp-Ch] BYREF
  float v11; // [esp+14h] [ebp-8h]
  float v12; // [esp+18h] [ebp-4h]

  if ( sub_10023D10((_DWORD *)this, 46) )
  {
    *(float *)&v10 = 540.0;
    v11 = 540.0;
    v12 = 100.0;
    v2 = sub_100C9B10((_BYTE *)this, (float *)&v10);
    v3 = __RTDynamicCast(
           v2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CBaseHLCombatWeapon `RTTI Type Descriptor',
           0);
    v4 = v3;
    if ( v3 )
    {
      *(float *)(this + 2748) = *(float *)(dword_106B31C8 + 12) + 10.0;
      sub_100D14A0(v3, 10.0, this);
      sub_100218B0((_DWORD *)this, v4);
      return 63;
    }
  }
  if ( !sub_10023D10((_DWORD *)this, 47) )
    return 0;
  if ( !sub_100296A0((_DWORD *)this) )
  {
    sub_10023E00((char *)this, 47);
    return 0;
  }
  *(float *)&v10 = 120.0;
  v11 = 120.0;
  v12 = 120.0;
  v6 = sub_10050FC0((_DWORD *)(this + 4508));
  v7 = v6;
  if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
    sub_100DAE60(v6);
  v8 = sub_100C80F0((void *)this, (float *)(v7 + 580), (float *)&v10);
  v9 = __RTDynamicCast(
         v8,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CItem `RTTI Type Descriptor',
         0);
  if ( !v9 )
    return 0;
  sub_100218B0((_DWORD *)this, v9);
  return 66;
}
