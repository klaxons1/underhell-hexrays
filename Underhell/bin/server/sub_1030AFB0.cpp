void __thiscall sub_1030AFB0(int *this)
{
  int v2; // ebx
  float *v3; // edi
  float *v4; // eax
  float *v5; // eax
  double v6; // st7
  double v7; // st7
  float *v8; // eax
  double v9; // st7
  double v10; // st7
  int v11; // edi
  int v12; // eax
  _DWORD *v13; // ebx
  int v14; // edi
  void (__thiscall *v15)(int); // eax
  _DWORD *v16; // eax
  int v17; // ebx
  float v18; // [esp+8h] [ebp-3Ch]
  float v19; // [esp+8h] [ebp-3Ch]
  float v20; // [esp+Ch] [ebp-38h]
  float v21; // [esp+Ch] [ebp-38h]
  float v22; // [esp+10h] [ebp-34h]
  float v23; // [esp+10h] [ebp-34h]
  float v24; // [esp+10h] [ebp-34h]
  float v25; // [esp+10h] [ebp-34h]
  _BYTE v26[12]; // [esp+20h] [ebp-24h] BYREF
  float v27[3]; // [esp+2Ch] [ebp-18h] BYREF
  float v28; // [esp+38h] [ebp-Ch]
  int v29; // [esp+3Ch] [ebp-8h]
  int v30; // [esp+40h] [ebp-4h]

  *(float *)&v29 = sub_100BE820((int)this, this[957]);
  v28 = sub_100BE820((int)this, this[958]);
  if ( sub_10307F70(this) && (*(int (**)(void))(*this + 368))() )
  {
    v2 = (*(int (__thiscall **)(int *))(*this + 368))(this);
    v3 = (float *)(*(int (__thiscall **)(int *))(*this + 576))(this);
    v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 576))(v2);
    v27[0] = *v4 - *v3;
    v27[1] = v4[1] - v3[1];
    v27[2] = v4[2] - v3[2];
    off_10689714();
    v5 = (float *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 908))(this, v26);
    *(float *)&v30 = sub_10029300((float *)this, v5);
    v6 = sub_10029300((float *)this, v27);
    v22 = *(float *)&v30 + *(float *)&v29;
    v20 = v6;
    sub_10424C10(v20, v22);
    v7 = v6 + *(float *)&v29;
    v18 = v7;
    sub_10424B10(v18, *(float *)&v29, 50.0);
    v23 = v7;
    sub_10019C10(this, this[957], v23);
    v8 = (float *)(*(int (__thiscall **)(int *, _BYTE *))(*this + 908))(this, v26);
    *(float *)&v30 = sub_10265080(v8);
    v9 = sub_10265080(v27);
    v24 = *(float *)&v30 + v28;
    v21 = v9;
    sub_10424C10(v21, v24);
    v10 = v9 + v28;
    v19 = v10;
    sub_10424B10(v19, v28, 50.0);
    v25 = v10;
    sub_10019C10(this, this[958], v25);
  }
  else
  {
    sub_10424B10(0.0, *(float *)&v29, 10.0);
    *(float *)&v29 = 0.0;
    v11 = dword_10700AC8;
    v12 = *(_DWORD *)dword_10700AC8;
    v30 = this[957];
    (*(void (__thiscall **)(int))(v12 + 100))(dword_10700AC8);
    if ( !this[275] && sub_100D7240(this) )
      sub_100BD750(this);
    v13 = (_DWORD *)this[275];
    if ( !v13 || !*v13 )
      v13 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 104))(v11);
    sub_100BE7D0(this, (int)v13, v30, *(float *)&v29);
    sub_10424B10(0.0, v28, 10.0);
    v28 = 0.0;
    v14 = dword_10700AC8;
    v15 = *(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100);
    v29 = this[958];
    v15(dword_10700AC8);
    if ( !this[275] && sub_100D7240(this) )
      sub_100BD750(this);
    v16 = (_DWORD *)this[275];
    if ( v16 && *v16 )
      v17 = this[275];
    else
      v17 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 104))(v14);
    sub_100BE7D0(this, v17, v29, v28);
  }
}
