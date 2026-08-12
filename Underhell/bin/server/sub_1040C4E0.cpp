void __thiscall sub_1040C4E0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int *v4; // ebx
  bool v5; // zf
  int v6; // edi
  int v7; // edx
  float *v8; // eax
  int v9; // eax
  float v10; // [esp+14h] [ebp-80h]
  __int64 v11; // [esp+18h] [ebp-7Ch]
  int v12[20]; // [esp+30h] [ebp-64h] BYREF
  float v13[3]; // [esp+80h] [ebp-14h] BYREF
  const char *v14; // [esp+8Ch] [ebp-8h]
  int *v15; // [esp+90h] [ebp-4h]

  v2 = *(_DWORD *)(this + 412);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = (int *)*v3;
  v5 = *(_BYTE *)(this + 1688) == 0;
  v15 = v4;
  if ( v5 && v4 )
  {
    if ( *(int *)(dword_106B31C8 + 20) <= 1 )
      v6 = sub_10261B20();
    else
      v6 = 0;
    v7 = *(_DWORD *)(this + 252) >> 11;
    v14 = (const char *)v4[55];
    if ( (v7 & 1) != 0 )
      sub_100DAE60(this);
    v10 = (float)(int)v14;
    v8 = sub_1001F010(v13, -100.0, 100.0);
    sub_102487B0((int)v12, v6, this, v8, (float *)(this + 580), v10, 0, 0, 0);
    sub_100D9E70(v4, this, v12);
    v14 = *(const char **)(this + 92);
    if ( !v14 )
      v14 = String;
    if ( v6 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 320))(v6) )
      v9 = v6;
    else
      v9 = 0;
    (*(void (__thiscall **)(int, int, int, const char *, int *))(*(_DWORD *)off_10627F88 + 120))(
      off_10627F88,
      v9,
      1,
      v14,
      v12);
    v4 = v15;
    (*(void (__thiscall **)(int, int, int *, int *))(*(_DWORD *)off_10627F88 + 92))(off_10627F88, v6, v15, v12);
  }
  HIDWORD(v11) = this;
  LODWORD(v11) = this;
  sub_1010DD80((_DWORD *)(this + 1772), v11, 0.0);
  if ( *(_BYTE *)(this + 1688) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    sub_101AB000(
      "striderbuster_explode_dummy_core",
      *(float *)(this + 580),
      *(float *)(this + 584),
      *(float *)(this + 588),
      *(float *)(this + 704),
      *(float *)(this + 708),
      *(float *)(this + 712),
      0);
    sub_1023C380((_DWORD *)this, (int)"Weapon_StriderBuster.Dud_Detonate", 0.0, 0);
  }
  else
  {
    sub_1040AD70(this);
    sub_1023C380((_DWORD *)this, (int)"Weapon_StriderBuster.Detonate", 0.0, 0);
  }
  sub_1040BF40(this, (int)v4);
}
