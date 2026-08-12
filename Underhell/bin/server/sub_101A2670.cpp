void __thiscall sub_101A2670(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // edi
  double v7; // st4
  double v8; // st6
  double v9; // st4
  double v10; // st5
  double v11; // st6
  double v12; // st7
  int v13; // eax
  double v14; // st4
  double v15; // st6
  double v16; // st4
  double v17; // st5
  double v18; // st6
  double v19; // st7
  float v20; // [esp+0h] [ebp-20h]
  float v21; // [esp+0h] [ebp-20h]
  int v22[3]; // [esp+10h] [ebp-10h] BYREF
  float v23; // [esp+1Ch] [ebp-4h]

  sub_1032CEC0();
  v2 = *(_DWORD *)(this + 2372);
  if ( v2 == 15 || v2 == dword_106B8F40 || v2 == dword_106B8F44 || v2 == 332 )
    sub_10024290((char *)this, 79);
  else
    sub_10024230((char *)this, 79);
  if ( sub_100697A0((_DWORD *)this, 72, 1) || sub_100697A0((_DWORD *)this, 71, 1) || sub_100697A0((_DWORD *)this, 33, 1) )
  {
    sub_10024230((char *)this, 26);
    sub_10024230((char *)this, 10);
  }
  if ( sub_100697A0((_DWORD *)this, 63, 1) )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    *(float *)v22 = 540.0;
    *(float *)&v22[1] = 540.0;
    v4 = v3;
    *(float *)&v22[2] = 100.0;
    v5 = sub_100C9B10((_BYTE *)this, (float *)v22);
    v6 = __RTDynamicCast(
           v5,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CBaseHLCombatWeapon `RTTI Type Descriptor',
           0);
    if ( v6 )
    {
      if ( v4 )
      {
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
          sub_100DAE60(v6);
        v7 = *(float *)(v6 + 584) - *(float *)(this + 584);
        v8 = v7 * v7;
        v9 = *(float *)(v6 + 580) - *(float *)(this + 580);
        v10 = v8;
        v11 = *(float *)(v6 + 588) - *(float *)(this + 588);
        v20 = v9 * v9 + v10 + v11 * v11;
        v12 = off_10689708(v20);
        v13 = *(_DWORD *)(this + 252);
        v23 = v12;
        if ( (v13 & 0x800) != 0 )
          sub_100DAE60(this);
        if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
          sub_100DAE60(v4);
        v14 = *(float *)(v4 + 584) - *(float *)(this + 584);
        v15 = v14 * v14;
        v16 = *(float *)(v4 + 580) - *(float *)(this + 580);
        v17 = v15;
        v18 = *(float *)(v4 + 588) - *(float *)(this + 588);
        v21 = v16 * v16 + v17 + v18 * v18;
        v19 = off_10689708(v21);
        if ( v19 <= v23 )
        {
          sub_10024230((char *)this, 26);
          sub_10024230((char *)this, 10);
        }
      }
    }
  }
}
