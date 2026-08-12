char __thiscall sub_10338D30(int this)
{
  int v2; // eax
  int v3; // eax
  bool v4; // zf
  signed int v5; // eax
  int v6; // eax
  int *v7; // eax
  int *v8; // ecx
  int v9; // ebx
  unsigned int v10; // ecx
  int *v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // edi
  int v18; // eax
  void (__thiscall *v19)(int); // edx
  char result; // al
  int v21; // [esp-4h] [ebp-Ch]
  int v22; // [esp-4h] [ebp-Ch]
  int v23; // [esp-4h] [ebp-Ch]

  sub_10399F00(this);
  if ( *(_BYTE *)(this + 5684) )
  {
    v21 = sub_10219A30() % 3;
    v2 = sub_100BF520(this, "Armor");
    sub_100C1600(this, v2, v21);
    v22 = sub_10219A30() % 6;
    v3 = sub_100BF520(this, "Helmet");
    sub_100C1600(this, v3, v22);
    v5 = sub_10219A30() & 0x80000001;
    v4 = v5 == 0;
    if ( v5 < 0 )
      v4 = (((_BYTE)v5 - 1) | 0xFFFFFFFE) == -1;
    if ( v4 )
      v23 = 4;
    else
      v23 = 0;
    v6 = sub_100BF520(this, "Legs");
    sub_100C1600(this, v6, v23);
  }
  if ( *(_DWORD *)(dword_106E601C + 48) )
  {
    if ( *(char **)(this + 2800) == dword_10690428 )
    {
      v7 = sub_100B0F90(&dword_10695280, dword_10690428);
      if ( v7 )
      {
        if ( sub_100B16F0(v7, 1) >= 4 )
          *(_DWORD *)(this + 2800) = 0;
      }
    }
    flt_1066E9A4 = -1.0;
  }
  if ( (*(_DWORD *)(this + 248) & 0x80000) != 0 && *(_DWORD *)(this + 848) != 2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        sub_100194B0(v8, 848);
    }
    *(_DWORD *)(this + 848) = 2;
  }
  *(_WORD *)(this + 5728) = 0;
  v9 = (int)*(float *)(dword_106E5B9C + 44);
  if ( *(_DWORD *)(this + 220) != v9 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = v9;
  }
  v10 = *(_DWORD *)(this + 308);
  if ( v10 != -1 )
  {
    v11 = &off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 1];
    v12 = v10 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 2] == v12 )
    {
      if ( *v11 )
      {
        v13 = off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 2] == v12 ? *v11 : 0;
        if ( *(char **)(v13 + 92) == "func_tracktrain" || sub_100D6240((_DWORD *)v13, "func_tracktrain") )
        {
          sub_10020480((_DWORD *)this, 1);
          sub_100E0970(this, v14, 0, 0);
          if ( *(const char **)(this + 260) == "citizen_train_2" || sub_100D6190((_DWORD *)this, "citizen_train_2") )
            sub_100374A0((_DWORD *)this, "d1_t01_TrainRide_Sit_Idle");
          else
            sub_100374A0((_DWORD *)this, "d1_t01_TrainRide_Stand");
          sub_10039F40((int *)this, 171);
        }
      }
    }
  }
  v15 = *(_DWORD *)(this + 2800);
  *(float *)(this + 5696) = -1.0;
  *(_DWORD *)(this + 5732) = v15;
  *(_DWORD *)(this + 3828) = "scenes/expressions/citizenidle.vcd";
  *(_DWORD *)(this + 3832) = "scenes/expressions/citizenalert_loop.vcd";
  *(_DWORD *)(this + 3836) = "scenes/expressions/citizencombat_loop.vcd";
  *(float *)(this + 5708) = *(float *)(dword_106B31C8 + 12);
  v16 = sub_100CF460((_DWORD *)this);
  v17 = __RTDynamicCast(
          v16,
          0,
          (struct _s_RTTICompleteObjectLocator *)&CBaseCombatWeapon `RTTI Type Descriptor',
          (int)&CWeaponRPG `RTTI Type Descriptor',
          0);
  if ( v17 )
  {
    sub_10020480((_DWORD *)this, 0x1000000);
    sub_10408BA0(v17);
  }
  sub_10020460((_DWORD *)this, 0x1000000);
  v18 = *(_DWORD *)this;
  *(float *)(this + 5780) = 3.4028235e38;
  v19 = *(void (__thiscall **)(int))(v18 + 1164);
  *(_DWORD *)(this + 252) |= 0x58000000u;
  v19(this);
  *(_DWORD *)(this + 200) = sub_103386A0;
  *(_BYTE *)(this + 5740) = sub_100296A0((_DWORD *)this);
  result = *(_BYTE *)(this + 251) & 1;
  *(_BYTE *)(this + 5172) = result;
  return result;
}
