void __thiscall sub_101DFBE0(int this, int a2, int a3)
{
  BOOL v3; // ebx
  int v5; // edi
  char v6; // cl
  int v7; // eax
  const char *v8; // esi
  int v9; // eax
  char v10; // al
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  unsigned int *v16; // ecx
  int v17; // edi
  int *v18; // eax
  int v19; // edx
  int v20; // ecx
  _DWORD *v21; // eax
  double v22; // st7
  int v23; // edx
  double v24; // st7
  float v25; // [esp+10h] [ebp-84h]
  __int64 v26; // [esp+10h] [ebp-84h]
  int v27; // [esp+28h] [ebp-6Ch] BYREF
  _BYTE v28[24]; // [esp+30h] [ebp-64h] BYREF
  float v29[3]; // [esp+48h] [ebp-4Ch] BYREF
  _BYTE v30[12]; // [esp+54h] [ebp-40h] BYREF
  float v31; // [esp+60h] [ebp-34h]
  float v32; // [esp+64h] [ebp-30h]
  float v33; // [esp+68h] [ebp-2Ch]
  float v34; // [esp+6Ch] [ebp-28h]
  float v35; // [esp+70h] [ebp-24h]
  char v36; // [esp+74h] [ebp-20h]
  _BYTE v37[12]; // [esp+78h] [ebp-1Ch] BYREF
  int v38; // [esp+84h] [ebp-10h]
  _DWORD *v39; // [esp+88h] [ebp-Ch] BYREF
  int v40; // [esp+8Ch] [ebp-8h]
  unsigned int *v41; // [esp+90h] [ebp-4h]

  v3 = a2 == 0;
  v5 = *(_DWORD *)(a3 + 4 * v3 + 104);
  v6 = *(_BYTE *)(v5 + 356) >> 2;
  v38 = v5;
  if ( (v6 & 1) != 0 )
    return;
  *(_BYTE *)(this + 1213) = 1;
  sub_101DE2D0(this, *(_DWORD *)(a3 + 4 * v3 + 104));
  if ( !*(_BYTE *)(this + 1212) )
    return;
  v7 = *(_DWORD *)(this + 1228);
  if ( v7 )
  {
    if ( v7 <= *(_DWORD *)(this + 1200) )
      return;
  }
  if ( (*(_DWORD *)(this + 248) & 0x10) != 0
    && *(char **)(v5 + 92) != "prop_vehicle_jeep"
    && !sub_100D6240((_DWORD *)v5, "prop_vehicle_jeep") )
  {
    if ( *(_BYTE *)(v5 + 225) < 2u )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a3 + 4 * v3) + 40))(*(_DWORD *)(a3 + 4 * v3)) )
      {
        sub_1025FAC0(v5);
      }
      else
      {
        v8 = *(const char **)(v5 + 92);
        if ( !v8 )
          v8 = String;
        v9 = sub_1001F3C0((_DWORD *)v5);
        Warning("CPhysMagnet %s:%d blocking magnet\n", v8, v9);
      }
    }
    else
    {
      v25 = (float)*(int *)(v5 + 220);
      sub_10248110(this, this, v25, 2048, 0);
      sub_100D9E70((int *)v5, this, &v27);
    }
    return;
  }
  v10 = *(_BYTE *)((*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF8 + 20))(
                     dword_106BAFF8,
                     *(_DWORD *)(a3 + 4 * v3 + 8))
                 + 72);
  if ( v10 != 77 && v10 != 80 )
  {
    if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 208))(v5) )
      return;
    v11 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 208))(v5);
    v12 = sub_10001430(v11);
    v13 = sub_10100E60((int)v12);
    if ( sub_104291C0(v13, "metal", 5) )
      return;
  }
  v14 = *(_DWORD *)(v5 + 424);
  if ( !v14
    || *(_BYTE *)(v5 + 306) != 6
    || !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v14 + 40))(*(_DWORD *)(v5 + 424)) )
  {
LABEL_31:
    sub_101DE2D0(this, v5);
    HIDWORD(v26) = this;
    LODWORD(v26) = this;
    sub_1010DD80((_DWORD *)(this + 1124), v26, 0.0);
    sub_100DA500((_BYTE *)this, a2, a3);
    return;
  }
  v15 = *(_DWORD *)(this + 1200);
  v40 = 0;
  if ( v15 <= 0 )
  {
LABEL_27:
    sub_100E05E0(v5, 2048.0);
    v17 = *(_DWORD *)(this + 424);
    v18 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v38 + 8))(v38);
    v19 = *(_DWORD *)(this + 248) >> 3;
    v40 = *v18;
    if ( (v19 & 1) != 0 )
    {
      sub_101B2C70(v29);
      v31 = 1.0;
      v20 = *(_DWORD *)(a3 + 28);
      v34 = 1.0;
      v35 = 1.0;
      v36 = 1;
      v32 = *(float *)(this + 1180) * 0.45454544;
      v33 = 0.45454544 * *(float *)(this + 1184);
      (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v20 + 4))(v20, v37);
      (*(void (__thiscall **)(int, float *, _BYTE *))(*(_DWORD *)v17 + 224))(v17, v29, v37);
      (*(void (__thiscall **)(int, _BYTE *, _BYTE *))(*(_DWORD *)v14 + 224))(v14, v30, v37);
      v21 = (_DWORD *)(*(int (__thiscall **)(int, int, int, _DWORD, float *))(*(_DWORD *)dword_106BAFF4 + 76))(
                        dword_106BAFF4,
                        v17,
                        v14,
                        0,
                        v29);
    }
    else
    {
      sub_100CFA00(v28);
      sub_100CFD60(v28, v17, v14);
      v31 = 1.0;
      v34 = 1.0;
      v35 = 1.0;
      v22 = *(float *)(this + 1180);
      v36 = 1;
      v32 = v22 * 0.45454544;
      v33 = 0.45454544 * *(float *)(this + 1184);
      v21 = (_DWORD *)(*(int (__thiscall **)(int, int, int, _DWORD, _BYTE *))(*(_DWORD *)dword_106BAFF4 + 68))(
                        dword_106BAFF4,
                        v17,
                        v14,
                        0,
                        v28);
    }
    v23 = *v21;
    v39 = v21;
    (*(void (__thiscall **)(_DWORD *, int))(v23 + 12))(v21, this);
    sub_10229160(*(_DWORD *)(this + 1200), &v39);
    v24 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v14 + 116))(v14);
    v5 = v38;
    *(float *)(this + 1216) = v24 + *(float *)(this + 1216);
    goto LABEL_31;
  }
  v16 = (unsigned int *)(*(_DWORD *)(this + 1188) + 4);
  v41 = v16;
  while ( !sub_1012B040(v16, v5) )
  {
    v41 += 2;
    if ( ++v40 >= *(_DWORD *)(this + 1200) )
      goto LABEL_27;
    v16 = v41;
  }
}
