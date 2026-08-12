void __thiscall sub_102D6410(int this, int a2)
{
  void *v3; // edi
  int *v4; // ebx
  int v5; // eax
  int v6; // edx
  double v7; // st7
  double v8; // st7
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  float *v13; // edi
  float v14; // [esp+4h] [ebp-98h]
  float v15; // [esp+4h] [ebp-98h]
  int v16; // [esp+4h] [ebp-98h]
  float v17[4]; // [esp+1Ch] [ebp-80h] BYREF
  _BYTE v18[8]; // [esp+2Ch] [ebp-70h] BYREF
  float v19; // [esp+34h] [ebp-68h]
  float v20; // [esp+38h] [ebp-64h]
  float v21; // [esp+3Ch] [ebp-60h]
  int v22; // [esp+4Ch] [ebp-50h]
  float v23; // [esp+54h] [ebp-48h]
  _DWORD v24[3]; // [esp+7Ch] [ebp-20h] BYREF
  float v25; // [esp+88h] [ebp-14h] BYREF
  float v26; // [esp+8Ch] [ebp-10h]
  float v27; // [esp+90h] [ebp-Ch]
  float v28; // [esp+94h] [ebp-8h]
  char v29; // [esp+9Bh] [ebp-1h]

  if ( ((*(_BYTE *)(a2 + 356) & 0x28) == 0 || *(_BYTE *)(a2 + 225) >= 2u) && *(_DWORD *)(a2 + 420) != 21 )
  {
    v3 = sub_101C46A0();
    v4 = (int *)*((_DWORD *)v3 + 19);
    v5 = *((_DWORD *)v3 + 12) >> 5;
    v24[0] = *((_DWORD *)v3 + 6);
    v6 = *((_DWORD *)v3 + 7);
    v29 = v5 & 1;
    v24[1] = v6;
    v24[2] = *((_DWORD *)v3 + 8);
    if ( (v5 & 1) != 0 )
    {
      sub_1001F130(v17);
      v17[0] = *((float *)v3 + 3);
      v17[1] = *((float *)v3 + 4);
      v7 = *((float *)v3 + 5);
      v22 = 0;
      v17[2] = v7;
      v19 = 0.0;
      v20 = 0.0;
      v21 = 1.0;
      v23 = 8.0;
      sub_1028E890((int)"watersplash", (int)v17);
    }
    else
    {
      sub_10264E40((int)v3, (int)"BeerSplash");
    }
    v8 = *(float *)(dword_106DEA24 + 44);
    v28 = *(float *)(dword_106DEA24 + 44);
    if ( v4 )
    {
      v14 = (1.0 - v8) * *(float *)(this + 2128);
      v9 = sub_100F4030((_DWORD *)this);
      v10 = (_DWORD *)sub_10248110((int)v18, this, v9, v14, 0x100000, 0);
      sub_100D9E70(v4, this, v10);
      v15 = v28 * *(float *)(this + 2128);
      v11 = sub_100F4030((_DWORD *)this);
      v12 = (_DWORD *)sub_10248110((int)v18, this, v11, v15, 0x20000, 0);
      sub_100D9E70(v4, this, v12);
    }
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v13 = (float *)(this + 580);
    v16 = sub_100F4030((_DWORD *)this);
    sub_1023D4B0(8, (float *)(this + 580), (int)(*(float *)(this + 2112) + *(float *)(this + 2112)), 0.5, v16, 0, 0);
    sub_10422540(v24, &v25);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) || v29 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_101AB000("antlion_spit_player", *v13, *(float *)(this + 584), *(float *)(this + 588), v25, v26, v27, 0);
    }
    else
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_101AB000("antlion_spit", *v13, *(float *)(this + 584), *(float *)(this + 588), v25, v26, v27, 0);
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 1152))(this);
  }
}
