int __usercall sub_10356D40@<eax>(int a1@<ecx>, int a2@<edi>)
{
  void (__stdcall *v3)(const char *, int); // eax
  int v4; // eax
  _DWORD *v5; // edi
  void (__thiscall *v6)(int); // eax
  int v7; // edi
  _DWORD *v8; // eax
  int v9; // ebx
  int v10; // edi
  _DWORD *v11; // eax
  int v12; // ebx
  int v13; // edi
  _DWORD *v14; // eax
  int v15; // ebx
  int v16; // edi
  _DWORD *v17; // eax
  int v18; // ebx
  int *v19; // eax
  double v20; // st7
  int v21; // edx
  int result; // eax
  int v23; // [esp+20h] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 100))(a1);
  v3 = *(void (__stdcall **)(const char *, int))(*(_DWORD *)a1 + 104);
  if ( (*(_DWORD *)(a1 + 248) & 0x2000) != 0 )
    v3("models/combine_helicopter.mdl", v23);
  else
    v3("models/gunship.mdl", v23);
  v4 = sub_100BDE80(a1, dword_106E68B0);
  sub_100BF580(a1, v4, (float *)(a1 + 3876), (float *)(a1 + 3888));
  sub_102B4360(a1);
  sub_100B6CC0(a1, 128.0, 128.0, *(float *)(dword_106E693C + 44));
  *(_DWORD *)(a1 + 252) |= 0x58000000u;
  if ( *(_BYTE *)(a1 + 225) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 480))(a1, a1 + 225);
    *(_BYTE *)(a1 + 225) = 2;
  }
  *(_DWORD *)(a1 + 1676) = 8;
  sub_10027A90(a1, 0);
  v5 = (_DWORD *)(a1 + 220);
  if ( *(_DWORD *)(a1 + 220) != 100 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 464))(a1, a1 + 220);
    *v5 = 100;
  }
  if ( *(_DWORD *)(a1 + 216) != *v5 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 456))(a1, a1 + 216);
    *(_DWORD *)(a1 + 216) = *v5;
  }
  v6 = *(void (__thiscall **)(int))(*(_DWORD *)a1 + 800);
  *(float *)(a1 + 1684) = -0.70700002;
  *(_DWORD *)(a1 + 3792) |= 1u;
  v6(a1);
  sub_10356BF0();
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 1416))(a1, dword_106E68B0);
  sub_100EBE30(a1, 29);
  *(float *)(a1 + 3832) = 1056.0;
  *(float *)(a1 + 3836) = 1056.0;
  *(float *)(a1 + 4164) = *(float *)(dword_106B31C8 + 12);
  *(float *)(a1 + 4168) = *(float *)(dword_106B31C8 + 12);
  v7 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
    sub_100BD750((volatile signed __int32 *)a1);
  v8 = *(_DWORD **)(a1 + 1100);
  if ( v8 && *v8 )
    v9 = *(_DWORD *)(a1 + 1100);
  else
    v9 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 104))(v7);
  sub_100C1460((_DWORD *)a1, v9, "flex_horz", 0.0);
  v10 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
    sub_100BD750((volatile signed __int32 *)a1);
  v11 = *(_DWORD **)(a1 + 1100);
  if ( v11 && *v11 )
    v12 = *(_DWORD *)(a1 + 1100);
  else
    v12 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 104))(v10);
  sub_100C1460((_DWORD *)a1, v12, "flex_vert", 0.0);
  v13 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
    sub_100BD750((volatile signed __int32 *)a1);
  v14 = *(_DWORD **)(a1 + 1100);
  if ( v14 && *v14 )
    v15 = *(_DWORD *)(a1 + 1100);
  else
    v15 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 104))(v13);
  sub_100C1460((_DWORD *)a1, v15, "fin_accel", 0.0);
  v16 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
    sub_100BD750((volatile signed __int32 *)a1);
  v17 = *(_DWORD **)(a1 + 1100);
  if ( v17 && *v17 )
    v18 = *(_DWORD *)(a1 + 1100);
  else
    v18 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 104))(v16);
  sub_100C1460((_DWORD *)a1, v18, "fin_sway", 0.0);
  if ( *(_DWORD *)(a1 + 4132) == -1 )
  {
    v19 = sub_102D9B20();
    *(_DWORD *)(a1 + 4132) = sub_100B9D10(v19, "CombineCannon");
  }
  sub_100457E0((_DWORD *)a1, 1);
  sub_10020B90((int *)a1, "env_flare D_LI 9", 0);
  sub_10020B90((int *)a1, "rpg_missile D_HT 99", 0);
  v20 = *(float *)(dword_106B31C8 + 12);
  v21 = *(_DWORD *)(a1 + 248);
  *(_DWORD *)(a1 + 252) |= 0x8000000u;
  *(float *)(a1 + 4152) = v20 + 2.0;
  *(_WORD *)(a1 + 4140) = 0;
  *(_BYTE *)(a1 + 4142) = 0;
  *(float *)(a1 + 4156) = 24.0;
  *(_WORD *)(a1 + 4148) = 0;
  *(_BYTE *)(a1 + 4081) = (v21 & 0x1000) == 0;
  *(float *)(a1 + 4176) = 2.0;
  *(_DWORD *)(a1 + 4136) = 0;
  *(_DWORD *)(a1 + 4144) = 0;
  *(float *)(a1 + 4124) = 0.0;
  *(_DWORD *)(a1 + 4072) = 0;
  sub_10020460((_DWORD *)a1, 0x4000000);
  if ( *(_DWORD *)(dword_10698344 + 48) )
    sub_10355740((_DWORD *)a1);
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 240))(dword_106B3CDC, a2);
  if ( result == 2 )
    return sub_100EA940((int *)a1, 0x10000);
  return result;
}
