char __thiscall sub_103C1260(int *this)
{
  int v1; // eax
  int v3; // ecx
  void (__thiscall *v4)(int *, int, int *); // edx
  int v5; // edx
  double v6; // st7
  double v7; // st7
  int v8; // edi
  int v9; // eax
  void (__thiscall *v10)(int); // edx
  _DWORD *v11; // eax
  int v12; // ebx
  double (__thiscall *v13)(int *); // eax
  double v14; // st7
  double v15; // st7
  int v16; // edi
  int v17; // eax
  void (__thiscall *v18)(int); // edx
  _DWORD *v19; // eax
  int v20; // ebx
  float v22; // [esp+10h] [ebp-80h]
  float v23; // [esp+10h] [ebp-80h]
  float v24; // [esp+10h] [ebp-80h]
  float v25; // [esp+10h] [ebp-80h]
  _BYTE v26[12]; // [esp+20h] [ebp-70h] BYREF
  float v27[3]; // [esp+2Ch] [ebp-64h] BYREF
  int v28; // [esp+38h] [ebp-58h] BYREF
  float v29; // [esp+3Ch] [ebp-54h]
  float v30; // [esp+40h] [ebp-50h]
  int v31; // [esp+44h] [ebp-4Ch] BYREF
  float v32; // [esp+48h] [ebp-48h]
  float v33; // [esp+4Ch] [ebp-44h]
  int v34; // [esp+50h] [ebp-40h] BYREF
  float v35; // [esp+54h] [ebp-3Ch]
  float v36; // [esp+58h] [ebp-38h]
  float v37; // [esp+5Ch] [ebp-34h] BYREF
  float v38; // [esp+60h] [ebp-30h]
  float v39; // [esp+64h] [ebp-2Ch]
  float v40; // [esp+68h] [ebp-28h] BYREF
  float v41; // [esp+6Ch] [ebp-24h]
  float v42; // [esp+70h] [ebp-20h]
  int v43; // [esp+74h] [ebp-1Ch] BYREF
  float v44; // [esp+78h] [ebp-18h]
  float v45; // [esp+7Ch] [ebp-14h]
  int v46; // [esp+80h] [ebp-10h]
  int v47; // [esp+84h] [ebp-Ch]
  float v48; // [esp+88h] [ebp-8h]
  char v49; // [esp+8Fh] [ebp-1h]

  v1 = *(_DWORD *)(dword_106B31C8 + 24);
  v49 = 0;
  if ( v1 != this[931] )
  {
    v3 = this[950];
    v4 = *(void (__thiscall **)(int *, int, int *))(*this + 796);
    this[931] = v1;
    v4(this, v3, this + 919);
  }
  sub_10422220(this + 946, &v40);
  sub_10421C60(&v40, this + 919, v26);
  if ( *(_DWORD *)(dword_106EBC9C + 48) )
  {
    sub_10421CE0(this + 919, 3, &v43);
    sub_10421CE0(this + 919, 0, &v37);
    *(float *)&v34 = 2.0;
    v35 = 2.0;
    v36 = 2.0;
    *(float *)&v31 = -2.0;
    v32 = -2.0;
    v33 = -2.0;
    sub_1011C000((float *)&v43, (float *)&v31, (float *)&v34, 255, 255, 0, 0, 0.050000001);
    *(float *)&v31 = 2.0;
    v32 = 2.0;
    v33 = 2.0;
    *(float *)&v34 = -2.0;
    v35 = -2.0;
    v36 = -2.0;
    *(float *)&v28 = v37 * 256.0 + *(float *)&v43;
    v29 = v38 * 256.0 + v44;
    v30 = 256.0 * v39 + v45;
    sub_1011C000((float *)&v28, (float *)&v34, (float *)&v31, 255, 255, 0, 0, 0.050000001);
    *(float *)&v28 = v37 * 256.0 + *(float *)&v43;
    v29 = v38 * 256.0 + v44;
    v30 = 256.0 * v39 + v45;
    sub_1011BC50((float *)&v43, (float *)&v28, 255, 255, 0, 0, 0.050000001);
    *(float *)&v28 = 2.0;
    v29 = 2.0;
    v30 = 2.0;
    *(float *)&v31 = -2.0;
    v32 = -2.0;
    v33 = -2.0;
    sub_1011C000((float *)&v43, (float *)&v31, (float *)&v28, 255, 0, 0, 0, 0.050000001);
    *(float *)&v28 = 2.0;
    v29 = 2.0;
    v30 = 2.0;
    *(float *)&v31 = -2.0;
    v32 = -2.0;
    v33 = -2.0;
    *(float *)&v34 = v40 * 256.0 + *(float *)&v43;
    v35 = v41 * 256.0 + v44;
    v36 = 256.0 * v42 + v45;
    sub_1011C000((float *)&v34, (float *)&v31, (float *)&v28, 255, 0, 0, 0, 0.050000001);
    *(float *)&v28 = v40 * 256.0 + *(float *)&v43;
    v29 = v41 * 256.0 + v44;
    v30 = 256.0 * v42 + v45;
    sub_1011BC50((float *)&v43, (float *)&v28, 255, 0, 0, 0, 0.050000001);
  }
  sub_10422540(v26, v27);
  v5 = *this;
  v48 = v27[0];
  v22 = ((double (__thiscall *)(int *))*(_DWORD *)(v5 + 1700))(this) * 0.050000001;
  v6 = v48;
  sub_10424B50(v48, 0.0, v22);
  v23 = v6;
  sub_10424CA0(v23);
  v48 = v6;
  v7 = sub_100BE820((int)this, this[545]);
  v8 = dword_10700AC8;
  v9 = *(_DWORD *)dword_10700AC8;
  v46 = this[545];
  v10 = *(void (__thiscall **)(int))(v9 + 100);
  *(float *)&v47 = v7 + v48 * 0.66666669;
  v10(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v11 = (_DWORD *)this[275];
  if ( v11 && *v11 )
    v12 = this[275];
  else
    v12 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 104))(v8);
  sub_100BE7D0(this, v12, v46, *(float *)&v47);
  if ( fabs(v48) > 0.1 )
    v49 = 1;
  v13 = *(double (__thiscall **)(int *))(*this + 1700);
  v46 = SLODWORD(v27[1]);
  v24 = v13(this) * 0.050000001;
  v14 = *(float *)&v46;
  sub_10424B50(*(float *)&v46, 0.0, v24);
  v25 = v14;
  sub_10424CA0(v25);
  v48 = v14;
  v15 = sub_100BE820((int)this, this[546]);
  v16 = dword_10700AC8;
  v17 = *(_DWORD *)dword_10700AC8;
  v47 = this[546];
  v18 = *(void (__thiscall **)(int))(v17 + 100);
  *(float *)&v46 = v15 + v48 * 0.66666669;
  v18(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v19 = (_DWORD *)this[275];
  if ( v19 && *v19 )
    v20 = this[275];
  else
    v20 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 104))(v16);
  sub_100BE7D0(this, v20, v47, *(float *)&v46);
  if ( fabs(v48) > 0.1 )
    v49 = 1;
  sub_100BCCF0(this);
  return v49;
}
