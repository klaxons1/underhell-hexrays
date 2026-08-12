int __thiscall sub_101A2C50(int this)
{
  int v3; // eax
  int v4; // eax
  int v5; // edi
  int v6[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( sub_10023D10((_DWORD *)this, 79) )
    return 100;
  if ( *(int *)(this + 220) <= 0 )
    return sub_1032F2D0(this);
  if ( sub_10023D10((_DWORD *)this, 46)
    && (*(float *)v6 = 540.0,
        *(float *)&v6[1] = 540.0,
        *(float *)&v6[2] = 100.0,
        v3 = sub_100C9B10((_BYTE *)this, (float *)v6),
        v4 = __RTDynamicCast(
               v3,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CBaseHLCombatWeapon `RTTI Type Descriptor',
               0),
        (v5 = v4) != 0) )
  {
    *(float *)(this + 2748) = *(float *)(dword_106B31C8 + 12) + 10.0;
    sub_100D14A0(v4, 10.0, this);
    sub_100218B0((_DWORD *)this, v5);
    return 63;
  }
  else if ( !sub_10023D10((_DWORD *)this, 10) && (*(_DWORD *)(dword_106B936C + 48) || *(_BYTE *)(this + 3992)) )
  {
    return 33;
  }
  else
  {
    return sub_1032F2D0(this);
  }
}
