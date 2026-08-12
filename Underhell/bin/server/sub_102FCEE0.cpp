int __thiscall sub_102FCEE0(float *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // ebx
  float *v7; // edi
  float *v8; // eax
  float *v9; // eax
  double v10; // st7
  bool v11; // c0
  bool v12; // c3
  double v13; // st7
  float *v14; // eax
  double v15; // st7
  float v16; // edx
  float *v17; // eax
  double v18; // st7
  double v19; // st7
  double v20; // st7
  float v22; // [esp+Ch] [ebp-3Ch]
  float v23; // [esp+Ch] [ebp-3Ch]
  float v24; // [esp+Ch] [ebp-3Ch]
  float v25; // [esp+10h] [ebp-38h]
  float v26; // [esp+10h] [ebp-38h]
  float v27; // [esp+10h] [ebp-38h]
  float v28; // [esp+14h] [ebp-34h]
  float v29; // [esp+14h] [ebp-34h]
  float v30; // [esp+14h] [ebp-34h]
  float v31; // [esp+14h] [ebp-34h]
  float v32; // [esp+14h] [ebp-34h]
  float v33; // [esp+14h] [ebp-34h]
  _BYTE v34[12]; // [esp+20h] [ebp-28h] BYREF
  float v35; // [esp+2Ch] [ebp-1Ch] BYREF
  float v36; // [esp+30h] [ebp-18h]
  float v37; // [esp+34h] [ebp-14h]
  float v38; // [esp+38h] [ebp-10h]
  float v39; // [esp+3Ch] [ebp-Ch]
  float v40; // [esp+40h] [ebp-8h]
  float v41; // [esp+44h] [ebp-4h]

  v41 = sub_100BE820((int)this, *((_DWORD *)this + 1037));
  v40 = sub_100BE820((int)this, *((_DWORD *)this + 1038));
  v2 = *((_DWORD *)this + 1025);
  if ( v2 != -1
    && (v3 = &off_1061BE18[4 * ((_DWORD)this[1025] & 0xFFF) + 1],
        v4 = v2 >> 12,
        off_1061BE18[4 * ((_DWORD)this[1025] & 0xFFF) + 2] == v4)
    && *v3 )
  {
    if ( off_1061BE18[4 * ((_DWORD)this[1025] & 0xFFF) + 2] == v4 )
      v5 = *v3;
    else
      v5 = 0;
  }
  else
  {
    v5 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  }
  v6 = v5;
  if ( v5 )
  {
    v7 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this);
    v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 576))(v6);
    v35 = *v8 - *v7;
    v36 = v8[1] - v7[1];
    v37 = v8[2] - v7[2];
    off_10689714();
    v9 = (float *)(*(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 908))(this, v34);
    v10 = v9[1] * v36 + *v9 * v35 + v9[2] * v37;
    v11 = v10 > 0.0;
    v12 = 0.0 == v10;
    v13 = 0.0;
    if ( v11 || v12 )
    {
      v14 = (float *)(*(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 908))(this, v34);
      v39 = sub_10029300(this, v14);
      v15 = sub_10029300(this, &v35);
      v29 = v39 + v41;
      v26 = v15;
      sub_10424C10(v26, v29);
      v16 = *this;
      v38 = v15;
      v17 = (float *)(*(int (__thiscall **)(float *, _BYTE *))(LODWORD(v16) + 908))(this, v34);
      v39 = sub_10265080(v17);
      v18 = sub_10265080(&v35);
      v30 = v39 + v40;
      v27 = v18;
      sub_10424C10(v27, v30);
      v39 = v18;
      v19 = v41 + v38;
      v22 = v19;
      sub_10424B10(v22, v41, 50.0);
      v31 = v19;
      sub_10019C10(this, *((_DWORD *)this + 1037), v31);
      v20 = v40 + v39;
      v23 = v20;
      sub_10424B10(v23, v40, 50.0);
      v32 = v20;
      return sub_10019C10(this, *((_DWORD *)this + 1038), v32);
    }
    v28 = 10.0;
    v25 = v41;
  }
  else
  {
    v28 = 10.0;
    v25 = v41;
    v13 = 0.0;
  }
  v24 = v13;
  sub_10424B10(v24, v25, v28);
  v33 = v13;
  sub_10019C10(this, *((_DWORD *)this + 1037), v33);
  sub_10424B10(0.0, v40, 10.0);
  return sub_10019C10(this, *((_DWORD *)this + 1038), 0.0);
}
