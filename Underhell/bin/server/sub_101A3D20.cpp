char __thiscall sub_101A3D20(int this, int a2, int a3, int a4, int a5)
{
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // edi
  float *v11; // eax
  int v12; // eax
  int v13; // ebx
  float *v14; // eax
  double v15; // st4
  double v16; // rt0
  char v17; // al
  int v18; // ebx
  int v19; // esi
  double v20; // st7
  int v21; // [esp+20h] [ebp-54h]
  float v22; // [esp+2Ch] [ebp-48h]
  int v23[8]; // [esp+3Ch] [ebp-38h] BYREF
  _BYTE v24[12]; // [esp+5Ch] [ebp-18h] BYREF
  float v25; // [esp+68h] [ebp-Ch] BYREF
  float v26; // [esp+6Ch] [ebp-8h]
  float v27; // [esp+70h] [ebp-4h]

  sub_1030B5E0(this, (int)&a2, 128.0, 350.0, 0);
  sub_1023C380((int)"NPC_Butcher.ChargeHit", 0.0, 0);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v6 = *(_DWORD *)(this + 704);
  v7 = *(_DWORD *)(this + 708);
  v25 = *(float *)(this + 580);
  v21 = v6;
  v26 = *(float *)(this + 584) + 128.0;
  v8 = *(_DWORD *)(this + 712);
  v27 = *(float *)(this + 588);
  sub_101AB000("door_explosion_shockwave", LODWORD(v25), LODWORD(v26), LODWORD(v27), v21, v7, v8, this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_10261B70(this + 580, 25.0, 150.0, 1.0, 128.0, 0, 0);
  v9 = a5;
  if ( *(float *)&a5 != 0.0
    && !(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a5 + 24)) )
  {
    sub_101A3A20(this, v9, &a5);
    v9 = a5;
    if ( !(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(a5 + 24)) )
    {
      sub_1023C380((int)"Metal.Door_Breach", 0.0, 0);
      ++*(_DWORD *)(this + 3896);
      return 1;
    }
  }
  v11 = (float *)__RTDynamicCast(
                   v9,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                   (int)&CBreakable `RTTI Type Descriptor',
                   0);
  if ( v11 )
  {
    v23[2] = 0;
    v23[5] = -1;
    v23[6] = 0;
    v23[0] = this;
    v23[1] = this;
    sub_10149140(v11, v23);
    return 1;
  }
  v12 = __RTDynamicCast(
          v9,
          0,
          (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
          (int)&CBasePropDoor `RTTI Type Descriptor',
          0);
  v13 = v12;
  if ( v12 && !*(_BYTE *)(v12 + 1720) )
  {
    (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)this + 528))(this, &v25, 0, 0);
    (*(void (__thiscall **)(int, int, int, _DWORD, float, float, float))(*(_DWORD *)v13 + 852))(
      v13,
      this,
      this,
      0,
      COERCE_FLOAT(LODWORD(v25)),
      COERCE_FLOAT(LODWORD(v26)),
      COERCE_FLOAT(LODWORD(v27)));
  }
  if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1080))(this, v9) == 1
    && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 1672) )
  {
    if ( !sub_100C4E90((_DWORD *)this, dword_106B8F44) )
      sub_100C7570((volatile signed __int32 *)this, dword_106B8F44, COERCE_FLOAT(1), 1);
    sub_101A2860((void *)this, v9);
    v14 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)this + 904))(this, v24);
    v15 = v14[2];
    v16 = v14[1] * 400.0;
    v25 = *v14 * 400.0;
    v26 = v16;
    v27 = 400.0 * v15 + 200.0;
    sub_100EA150(v9, &v25);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 264))(v9)
      && (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) == v9 )
    {
      sub_100285C0((_DWORD *)this, 0, 1);
    }
    v22 = *(float *)(dword_106B31C8 + 12) + 2.0;
    sub_10031BA0(this, v22);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, dword_106B8F40);
    *(_DWORD *)(this + 3896) = 0;
    return 0;
  }
  v17 = *(_BYTE *)(v9 + 306);
  if ( v17 && v17 != 7 )
  {
    if ( v17 != 6 )
      return 0;
    v18 = *(_DWORD *)(v9 + 424);
    if ( !v18 )
      return 0;
    if ( ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v18 + 76))(*(_DWORD *)(v9 + 424)) & 4) != 0 )
    {
      sub_101FB2A0(v9);
      return 0;
    }
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v18 + 40))(v18) )
    {
      v19 = *(_DWORD *)(this + 424);
      *(float *)&a5 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v18 + 116))(v18);
      v20 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v19 + 116))(v19) * 0.5;
      if ( v20 >= *(float *)&a5 )
        return 0;
    }
  }
  return 1;
}
