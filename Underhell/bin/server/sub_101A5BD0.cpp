int __thiscall sub_101A5BD0(int this)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( *(int *)(this + 220) <= 0 )
    return sub_1032F2D0(this);
  if ( sub_10023D10((_DWORD *)this, 78) )
    return 101;
  if ( sub_10023D10((_DWORD *)this, 80) && sub_10023D10((_DWORD *)this, 80) && (unsigned __int8)sub_103E0CF0(0) )
  {
    sub_10023E00((char *)this, 80);
    if ( sub_1001ED60((float *)(this + 3860)) )
    {
      v3 = sub_1026A890(this + 3840);
      sub_100218B0((_DWORD *)this, v3);
      return 103;
    }
    *(_DWORD *)(this + 3840) = -1;
  }
  if ( sub_10023D10((_DWORD *)this, 46)
    && (*(float *)v9 = 540.0,
        *(float *)&v9[1] = 540.0,
        *(float *)&v9[2] = 100.0,
        v4 = sub_100C9B10((_BYTE *)this, (float *)v9),
        v5 = __RTDynamicCast(
               v4,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CBaseHLCombatWeapon `RTTI Type Descriptor',
               0),
        (v6 = v5) != 0) )
  {
    *(float *)(this + 2748) = *(float *)(dword_106B31C8 + 12) + 10.0;
    sub_100D14A0(v5, 10.0, this);
    sub_100218B0((_DWORD *)this, v6);
    return 63;
  }
  else if ( sub_10023D10((_DWORD *)this, 60)
         && !sub_10023D10((_DWORD *)this, 10)
         && (v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1460))(this, 1048351)) != 0
         && (*(_DWORD *)(v7 + 16) & 0x20000) != 0 )
  {
    v8 = sub_1026A890(v7);
    sub_100218B0((_DWORD *)this, v8);
    return 104;
  }
  else if ( sub_10023D10((_DWORD *)this, 77) )
  {
    return 77;
  }
  else if ( !sub_10023D10((_DWORD *)this, 10) && (*(_DWORD *)(dword_106B936C + 48) || *(_BYTE *)(this + 3912)) )
  {
    return 33;
  }
  else
  {
    return sub_1032F2D0(this);
  }
}
