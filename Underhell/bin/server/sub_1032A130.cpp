int __thiscall sub_1032A130(_DWORD *this, int a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // eax
  float *v9; // eax
  float *v10; // eax
  double v11; // st7
  bool v12; // c0
  bool v13; // c3
  double v14; // st7
  float *v15; // eax
  double v16; // st7
  int v17; // edx
  float *v18; // eax
  double v19; // st7
  double v20; // st7
  double v21; // st7
  float v23; // [esp+14h] [ebp-48h]
  float v24; // [esp+14h] [ebp-48h]
  float v25; // [esp+14h] [ebp-48h]
  float v26; // [esp+18h] [ebp-44h]
  float v27; // [esp+18h] [ebp-44h]
  float v28; // [esp+18h] [ebp-44h]
  float v29; // [esp+1Ch] [ebp-40h]
  float v30; // [esp+1Ch] [ebp-40h]
  float v31; // [esp+1Ch] [ebp-40h]
  float v32; // [esp+1Ch] [ebp-40h]
  float v33; // [esp+1Ch] [ebp-40h]
  float v34; // [esp+1Ch] [ebp-40h]
  _BYTE v35[12]; // [esp+28h] [ebp-34h] BYREF
  int v36; // [esp+34h] [ebp-28h] BYREF
  float v37; // [esp+38h] [ebp-24h]
  float v38; // [esp+3Ch] [ebp-20h]
  float v39; // [esp+40h] [ebp-1Ch] BYREF
  float v40; // [esp+44h] [ebp-18h]
  float v41; // [esp+48h] [ebp-14h]
  float v42; // [esp+4Ch] [ebp-10h]
  float v43; // [esp+50h] [ebp-Ch]
  float v44; // [esp+54h] [ebp-8h]
  float v45; // [esp+58h] [ebp-4h]

  v45 = sub_100BE820((int)this, this[946]);
  v44 = sub_100BE820((int)this, this[945]);
  v3 = this[605];
  if ( v3 != -1
    && (v4 = &off_1061BE18[4 * (this[605] & 0xFFF) + 1], v5 = v3 >> 12, off_1061BE18[4 * (this[605] & 0xFFF) + 2] == v5)
    && *v4 )
  {
    if ( off_1061BE18[4 * (this[605] & 0xFFF) + 2] == v5 )
      v6 = *v4;
    else
      v6 = 0;
  }
  else
  {
    v6 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  }
  v7 = v6;
  if ( !sub_10023D10(this, 1) || !sub_100BF1B0(this, "eyes", (int)&v36, 0, 0, 0) )
  {
    v8 = (*(int (__thiscall **)(_DWORD *, float *))(*this + 504))(this, &v39);
    v36 = *(int *)v8;
    v37 = *(float *)(v8 + 4);
    v38 = *(float *)(v8 + 8);
  }
  if ( v7 )
  {
    v9 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v7 + 504))(v7, v35);
    v39 = *v9 - *(float *)&v36;
    v40 = v9[1] - v37;
    v41 = v9[2] - v38;
    off_10689714();
    v10 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 908))(this, v35);
    v11 = v10[1] * v40 + v39 * *v10 + v10[2] * v41;
    v12 = v11 > 0.0;
    v13 = 0.0 == v11;
    v14 = 0.0;
    if ( v12 || v13 )
    {
      v15 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*this + 908))(this, v35);
      v43 = sub_10029300((float *)this, v15);
      v16 = sub_10029300((float *)this, &v39);
      v30 = v43 + v45;
      v27 = v16;
      sub_10424C10(v27, v30);
      v17 = *this;
      v42 = v16;
      v18 = (float *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(v17 + 908))(this, v35);
      v43 = sub_10265080(v18);
      v19 = sub_10265080(&v39);
      v31 = v43 + v44;
      v28 = v19;
      sub_10424C10(v28, v31);
      v43 = v19;
      v20 = v45 + v42;
      v23 = v20;
      sub_10424B10(v23, v45, 50.0);
      v32 = v20;
      sub_10019C10(this, this[946], v32);
      v21 = v44 + v43;
      v24 = v21;
      sub_10424B10(v24, v44, 50.0);
      v33 = v21;
      return sub_10019C10(this, this[945], v33);
    }
    v29 = 10.0;
    v26 = v45;
  }
  else
  {
    v29 = 10.0;
    v26 = v45;
    v14 = 0.0;
  }
  v25 = v14;
  sub_10424B10(v25, v26, v29);
  v34 = v14;
  sub_10019C10(this, this[946], v34);
  sub_10424B10(0.0, v44, 10.0);
  return sub_10019C10(this, this[945], 0.0);
}
