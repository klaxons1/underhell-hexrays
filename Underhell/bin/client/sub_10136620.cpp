void __thiscall sub_10136620(float *this, int *a2)
{
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  double v8; // st7
  double v9; // st7
  int v10; // edx
  double v11; // st6
  double v12; // st5
  double v13; // st6
  bool v14; // zf
  int v15; // ebx
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  char v19; // bl
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // edx
  int (__thiscall *v27)(float *); // eax
  int v28; // edi
  int v29; // eax
  int v30; // edi
  int v31; // eax
  int v32; // [esp-8h] [ebp-A8h]
  int v33; // [esp-4h] [ebp-A4h]
  _DWORD v34[21]; // [esp+Ch] [ebp-94h] BYREF
  char v35; // [esp+60h] [ebp-40h]
  float v36; // [esp+64h] [ebp-3Ch]
  char v37; // [esp+68h] [ebp-38h]
  __int16 v38; // [esp+7Ch] [ebp-24h]
  int v39; // [esp+80h] [ebp-20h] BYREF
  int v40; // [esp+84h] [ebp-1Ch] BYREF
  int v41; // [esp+88h] [ebp-18h] BYREF
  int v42; // [esp+8Ch] [ebp-14h] BYREF
  _DWORD v43[2]; // [esp+90h] [ebp-10h] BYREF
  _DWORD v44[2]; // [esp+98h] [ebp-8h] BYREF
  float v45; // [esp+A8h] [ebp+8h]
  int v46; // [esp+A8h] [ebp+8h]

  CVProfile::EnterScope(g_VProfCurrentProfile, "CViewRender::Render", 0, "CViewRender::Render", 0, 4);
  v4 = *a2;
  v5 = a2[2];
  v41 = a2[1];
  v6 = a2[4];
  v40 = v4;
  v7 = a2[3];
  v43[1] = v6;
  v42 = v5;
  v43[0] = v7;
  sub_10077210(&v39);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 212))(dword_1041315C);
  *((_BYTE *)this + 268) = 0;
  v8 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1041315C + 352))(dword_1041315C) * 0.75;
  this[10] = atan2(tan(this[10] * 0.008726646259971648) * v8, 1.0) * 57.29577951308232 * 2.0;
  this[11] = 2.0 * (57.29577951308232 * atan2(v8 * tan(0.008726646259971648 * this[11]), 1.0));
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_1044CC48 + 108))(dword_1044CC48, (_BYTE *)this + 4);
  (*(void (__thiscall **)(int, int *, int *, int *, _DWORD *))(*(_DWORD *)dword_1044CC48 + 104))(
    dword_1044CC48,
    &v40,
    &v41,
    &v42,
    v43);
  sub_101BC9E0(&v40, &v41, &v42, v43);
  v9 = *(float *)(dword_10439D7C + 44);
  v45 = *(float *)(dword_10439D7C + 44);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 352))(dword_1041315C);
  v10 = v41;
  v11 = (double)v42 * v45;
  *((_DWORD *)this + 1) = v40;
  v12 = v11;
  *((_DWORD *)this + 2) = v10;
  v13 = v45 * (double)v43[0];
  *((_DWORD *)this + 3) = (int)v12;
  v44[0] = (int)v13;
  *((_DWORD *)this + 4) = (int)v13;
  if ( v9 <= 0.0 )
    v9 = (double)(int)v12 / (double)v44[0];
  v14 = *((_BYTE *)this + 144) == 0;
  this[23] = v9;
  v46 = 34;
  if ( v14 )
  {
    if ( *(_DWORD *)(dword_10439E9C + 48) )
    {
      v16 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
      v17 = v16;
      if ( v16 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 8))(v16);
      v44[0] = *(_DWORD *)v17 + 288;
      v33 = sub_10115FB0() % 256;
      v32 = sub_10115FB0() % 256;
      v18 = sub_10115FB0() % 256;
      (*(void (__thiscall **)(int, int, int, int))v44[0])(v17, v18, v32, v33);
      (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v17 + 48))(v17, 1, 0, 0);
      (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 4))(v17);
      (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 12))(v17);
      (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 4))(v17);
    }
    else if ( *(_DWORD *)(dword_10439E54 + 48) )
    {
      v46 = 35;
    }
  }
  else
  {
    v15 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
    if ( v15 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 8))(v15);
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v15 + 208))(v15, v44);
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v15 + 288))(
      v15,
      v44[0],
      *(_DWORD *)((char *)v44 + 1),
      *(_DWORD *)((char *)v44 + 2));
    (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v15 + 48))(v15, 1, 0, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 4))(v15);
    (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 12))(v15);
    (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 4))(v15);
  }
  v19 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 96))(dword_1044CC48);
  if ( *(float *)(dword_10439DC4 + 44) > 0.0 )
  {
    sub_10136500((int)this);
    v46 |= 1u;
    v19 = 0;
  }
  v20 = sub_100422D0();
  if ( v20 && !*(_BYTE *)(v20 + 3680) )
    v19 = 0;
  (*(void (__thiscall **)(int, _BYTE *, _BYTE *))(*(_DWORD *)dword_10413168 + 164))(
    dword_10413168,
    (_BYTE *)this + 48,
    (_BYTE *)this + 60);
  v21 = 2;
  if ( v19 )
    v21 = 3;
  (*(void (__thiscall **)(float *, _BYTE *, int, int))(*(_DWORD *)this + 24))(this, (_BYTE *)this + 4, v46, v21);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 112))(dword_1044CC48);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 216))(dword_1041315C);
  sub_100771C0(&v39);
  v22 = *a2;
  v36 = 0.0;
  v23 = a2[1];
  v24 = a2[2];
  v34[0] = v22;
  v25 = a2[3];
  v34[1] = v23;
  v34[2] = v24;
  v26 = *(_DWORD *)this;
  v34[3] = v25;
  v27 = *(int (__thiscall **)(float *))(v26 + 40);
  v35 = 0;
  v37 = 0;
  v38 = 1;
  v28 = *(_DWORD *)dword_10413168;
  v29 = v27(this);
  (*(void (__thiscall **)(int, _DWORD *, _DWORD, _DWORD, int))(v28 + 156))(dword_10413168, v34, 0, 0, v29);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10413168 + 144))(dword_10413168, 1);
  v30 = *(_DWORD *)dword_10413168;
  v31 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 40))(this);
  (*(void (__thiscall **)(int, int))(v30 + 160))(dword_10413168, v31);
  sub_100771C0(&v39);
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
