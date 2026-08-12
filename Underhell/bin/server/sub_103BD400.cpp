char __thiscall sub_103BD400(_DWORD *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // edx
  double v5; // st7
  double v6; // st7
  int v7; // edi
  int v8; // eax
  void (__thiscall *v9)(int); // edx
  _DWORD *v10; // eax
  int v11; // ebx
  double (__thiscall *v12)(_DWORD *); // eax
  double v13; // st7
  double v14; // st7
  int v15; // edi
  int v16; // eax
  void (__thiscall *v17)(int); // edx
  _DWORD *v18; // eax
  int v19; // ebx
  float v21; // [esp+10h] [ebp-BCh]
  float v22; // [esp+10h] [ebp-BCh]
  float v23; // [esp+14h] [ebp-B8h]
  float v24; // [esp+14h] [ebp-B8h]
  _BYTE v25[48]; // [esp+20h] [ebp-ACh] BYREF
  _BYTE v26[12]; // [esp+50h] [ebp-7Ch] BYREF
  int v27[3]; // [esp+5Ch] [ebp-70h] BYREF
  float v28[3]; // [esp+68h] [ebp-64h] BYREF
  float v29; // [esp+74h] [ebp-58h] BYREF
  float v30; // [esp+78h] [ebp-54h]
  float v31; // [esp+7Ch] [ebp-50h]
  float v32; // [esp+80h] [ebp-4Ch] BYREF
  float v33; // [esp+84h] [ebp-48h]
  float v34; // [esp+88h] [ebp-44h]
  int v35; // [esp+8Ch] [ebp-40h] BYREF
  float v36; // [esp+90h] [ebp-3Ch]
  float v37; // [esp+94h] [ebp-38h]
  int v38; // [esp+98h] [ebp-34h]
  int v39; // [esp+9Ch] [ebp-30h] BYREF
  float v40; // [esp+A0h] [ebp-2Ch]
  float v41; // [esp+A4h] [ebp-28h]
  int v42; // [esp+A8h] [ebp-24h] BYREF
  float v43; // [esp+ACh] [ebp-20h]
  float v44; // [esp+B0h] [ebp-1Ch]
  int v45; // [esp+B4h] [ebp-18h]
  int v46; // [esp+B8h] [ebp-14h] BYREF
  float v47; // [esp+BCh] [ebp-10h]
  float v48; // [esp+C0h] [ebp-Ch]
  float v49; // [esp+C4h] [ebp-8h]
  char v50; // [esp+CBh] [ebp-1h]

  v2 = *this;
  v50 = 0;
  v3 = sub_100BEF30((int)this, "eyes");
  (*(void (__thiscall **)(_DWORD *, int, _BYTE *))(v2 + 796))(this, v3, v25);
  sub_10422220(this + 911, &v32);
  sub_10421C60(&v32, v25, v26);
  if ( *(_DWORD *)(dword_106EBC14 + 48) )
  {
    sub_100BEFA0(this, "eyes", (int)&v42, (int)v27);
    sub_10422220(v27, &v29);
    *(float *)&v35 = 2.0;
    v36 = 2.0;
    v37 = 2.0;
    *(float *)&v39 = -2.0;
    v40 = -2.0;
    v41 = -2.0;
    sub_1011C000((float *)&v42, (float *)&v39, (float *)&v35, 255, 255, 0, 0, 0.050000001);
    *(float *)&v39 = 2.0;
    v40 = 2.0;
    v41 = 2.0;
    *(float *)&v35 = -2.0;
    v36 = -2.0;
    v37 = -2.0;
    *(float *)&v46 = v29 * 256.0 + *(float *)&v42;
    v47 = v30 * 256.0 + v43;
    v48 = 256.0 * v31 + v44;
    sub_1011C000((float *)&v46, (float *)&v35, (float *)&v39, 255, 255, 0, 0, 0.050000001);
    *(float *)&v46 = v29 * 256.0 + *(float *)&v42;
    v47 = v30 * 256.0 + v43;
    v48 = 256.0 * v31 + v44;
    sub_1011BC50((float *)&v42, (float *)&v46, 255, 255, 0, 0, 0.050000001);
    *(float *)&v46 = 2.0;
    v47 = 2.0;
    v48 = 2.0;
    *(float *)&v39 = -2.0;
    v40 = -2.0;
    v41 = -2.0;
    sub_1011C000((float *)&v42, (float *)&v39, (float *)&v46, 255, 0, 0, 0, 0.050000001);
    *(float *)&v46 = 2.0;
    v47 = 2.0;
    v48 = 2.0;
    *(float *)&v39 = -2.0;
    v40 = -2.0;
    v41 = -2.0;
    *(float *)&v35 = v32 * 256.0 + *(float *)&v42;
    v36 = v33 * 256.0 + v43;
    v37 = 256.0 * v34 + v44;
    sub_1011C000((float *)&v35, (float *)&v39, (float *)&v46, 255, 0, 0, 0, 0.050000001);
    *(float *)&v46 = v32 * 256.0 + *(float *)&v42;
    v47 = v33 * 256.0 + v43;
    v48 = 256.0 * v34 + v44;
    sub_1011BC50((float *)&v42, (float *)&v46, 255, 0, 0, 0, 0.050000001);
  }
  sub_10422540(v26, v28);
  v4 = *this;
  v49 = v28[0];
  v23 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(v4 + 1700))(this) * 0.1;
  v5 = v49;
  sub_10424B50(v49, 0.0, v23);
  v24 = v5;
  sub_10424CA0(v24);
  v49 = v5;
  v6 = sub_100BE820((int)this, this[545]);
  v7 = dword_10700AC8;
  v8 = *(_DWORD *)dword_10700AC8;
  v45 = this[545];
  v9 = *(void (__thiscall **)(int))(v8 + 100);
  *(float *)&v38 = v6 + v49 * 0.66666669;
  v9(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v10 = (_DWORD *)this[275];
  if ( v10 && *v10 )
    v11 = this[275];
  else
    v11 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 104))(v7);
  sub_100BE7D0(this, v11, v45, *(float *)&v38);
  if ( fabs(v49) > 0.1 )
    v50 = 1;
  v12 = *(double (__thiscall **)(_DWORD *))(*this + 1700);
  v45 = SLODWORD(v28[1]);
  v21 = v12(this) * 0.1;
  v13 = *(float *)&v45;
  sub_10424B50(*(float *)&v45, 0.0, v21);
  v22 = v13;
  sub_10424CA0(v22);
  v49 = v13;
  v14 = sub_100BE820((int)this, this[546]);
  v15 = dword_10700AC8;
  v16 = *(_DWORD *)dword_10700AC8;
  v38 = this[546];
  v17 = *(void (__thiscall **)(int))(v16 + 100);
  *(float *)&v45 = v14 + v49 * 0.66666669;
  v17(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v18 = (_DWORD *)this[275];
  if ( v18 && *v18 )
    v19 = this[275];
  else
    v19 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 104))(v15);
  sub_100BE7D0(this, v19, v38, *(float *)&v45);
  if ( fabs(v49) > 0.1 )
    v50 = 1;
  sub_100BCCF0(this);
  return v50;
}
