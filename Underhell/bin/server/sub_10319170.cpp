int __thiscall sub_10319170(int this)
{
  bool v2; // zf
  void (__fastcall *v3)(int); // eax
  int v4; // eax
  float *v5; // eax
  double v6; // st6
  int v7; // ebx
  int *v8; // edi
  int *v9; // ebx
  double v10; // st6
  double v11; // st5
  int *v12; // eax
  int v13; // edx
  void (__thiscall *v14)(int, int); // eax
  int v15; // edi
  int v16; // eax
  unsigned int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  int v24; // ecx
  unsigned int v25; // eax
  int v26; // ecx
  int result; // eax
  float v28; // [esp+8h] [ebp-18h]
  const char *v29; // [esp+Ch] [ebp-14h]
  float v30; // [esp+Ch] [ebp-14h]
  float v31; // [esp+1Ch] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  v2 = (*(_DWORD *)(this + 248) & 0x20000) == 0;
  v3 = *(void (__fastcall **)(int))(*(_DWORD *)this + 104);
  *(_BYTE *)(this + 4172) = 0;
  *(_WORD *)(this + 4244) = 0;
  *(_BYTE *)(this + 4261) = 0;
  if ( v2 )
    v29 = "models/combine_helicopter.mdl";
  else
    v29 = "models/combine_helicopter/helicopter_bomb01.mdl";
  v3(this);
  v4 = sub_100BDE80(this, 1);
  sub_100BF580(this, v4, (float *)(this + 3876), (float *)(this + 3888));
  v5 = (float *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1868))(this, 5.0);
  sub_100756C0(v5, *(float *)&v29);
  v31 = *(float *)(this + 3832);
  sub_102B4360(this);
  if ( (*(_DWORD *)(this + 248) & 0x100000) != 0 )
    v6 = 64.0;
  else
    v6 = 128.0;
  v28 = v6;
  sub_100B6CC0(this, 128.0, v28, 512.0);
  v30 = sub_10314220((void *)this);
  sub_100B5310((float *)this, v30);
  if ( *(_BYTE *)(this + 225) != 2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
    *(_BYTE *)(this + 225) = 2;
  }
  *(_DWORD *)(this + 4076) = 0;
  *(_DWORD *)(this + 1676) = 8;
  sub_10027A90(this, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 584))(this);
  *(_DWORD *)(this + 3776) = 0;
  v7 = *(_DWORD *)(dword_106E34AC + 48);
  v8 = (int *)(this + 220);
  if ( *(_DWORD *)(this + 220) != v7 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *v8 = v7;
  }
  v9 = (int *)(this + 216);
  if ( *(_DWORD *)(this + 216) != *v8 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 456))(this, this + 216);
    *v9 = *v8;
  }
  *(float *)(this + 3832) = v31;
  if ( v31 <= 0.0 )
    *(float *)(this + 3832) = 1056.0;
  v10 = (double)*v9;
  v11 = *(float *)(dword_106E3ADC + 44);
  *(_DWORD *)(this + 4092) = 6;
  *(float *)(this + 4236) = v10 - v11 * v10;
  *(float *)(this + 1684) = -1.0;
  *(float *)(this + 4084) = 0.0;
  v12 = sub_102D9B20();
  *(_DWORD *)(this + 4068) = sub_100B9D10(v12, "HelicopterGun");
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 800))(this);
  v13 = *(_DWORD *)this;
  *(float *)(this + 4100) = -1.0;
  *(_DWORD *)(this + 3792) = 1;
  *(float *)(this + 4096) = 0.0;
  *(_BYTE *)(this + 3868) = 0;
  *(float *)(this + 4104) = 0.0;
  *(_DWORD *)(this + 4120) = 0;
  v14 = *(void (__thiscall **)(int, int))(v13 + 1416);
  *(float *)(this + 4124) = *(float *)(dword_106B31C8 + 12);
  v14(this, 1);
  v15 = sub_100BEF30(this, "bomb");
  v16 = sub_101811E0("npc_helicoptersensor", -1);
  if ( v16 )
    *(_DWORD *)(this + 4128) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 8))(v16);
  else
    *(_DWORD *)(this + 4128) = -1;
  v17 = *(_DWORD *)(this + 4128);
  if ( v17 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4128) & 0xFFF) + 2] != v17 >> 12 )
    v18 = 0;
  else
    v18 = off_1061BE18[4 * (*(_DWORD *)(this + 4128) & 0xFFF) + 1];
  (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 96))(v18);
  v19 = *(_DWORD *)(this + 4128);
  if ( v19 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4128) & 0xFFF) + 2] != v19 >> 12 )
    v20 = 0;
  else
    v20 = off_1061BE18[4 * (*(_DWORD *)(this + 4128) & 0xFFF) + 1];
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v20 + 140))(v20, this, v15);
  v21 = *(_DWORD *)(this + 4128);
  if ( v21 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4128) & 0xFFF) + 2] != v21 >> 12 )
    v22 = 0;
  else
    v22 = off_1061BE18[4 * (*(_DWORD *)(this + 4128) & 0xFFF) + 1];
  sub_100E10C0(v22, &flt_106F1CA8);
  v23 = *(_DWORD *)(this + 4128);
  if ( v23 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4128) & 0xFFF) + 2] != v23 >> 12 )
    v24 = 0;
  else
    v24 = off_1061BE18[4 * (*(_DWORD *)(this + 4128) & 0xFFF) + 1];
  sub_100E11A0(v24, &flt_106F1CB4);
  v25 = *(_DWORD *)(this + 4128);
  if ( v25 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4128) & 0xFFF) + 2] != v25 >> 12 )
    v26 = 0;
  else
    v26 = off_1061BE18[4 * (*(_DWORD *)(this + 4128) & 0xFFF) + 1];
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v26 + 76))(v26, this);
  result = sub_100EA940((int *)this, 0x10000);
  *(_DWORD *)(this + 4332) = -1;
  return result;
}
