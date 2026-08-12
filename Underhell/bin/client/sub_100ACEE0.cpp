void __thiscall sub_100ACEE0(_DWORD *this)
{
  float *v2; // ecx
  double v3; // st7
  int v4; // eax
  double v5; // st7
  double v6; // st7
  int v7; // edx
  float *v8; // ecx
  float *v9; // ecx
  float *v10; // eax
  float *v11; // ecx
  float *v12; // eax
  double v13; // st7
  float *v14; // ecx
  float *v15; // esi
  float v16; // [esp+0h] [ebp-98h]
  float v17[13]; // [esp+Ch] [ebp-8Ch] BYREF
  char v18; // [esp+42h] [ebp-56h]
  _BYTE v19[12]; // [esp+60h] [ebp-38h] BYREF
  float v20[3]; // [esp+6Ch] [ebp-2Ch] BYREF
  float v21[3]; // [esp+78h] [ebp-20h] BYREF
  float v22; // [esp+84h] [ebp-14h]
  float v23; // [esp+88h] [ebp-10h]
  float v24; // [esp+8Ch] [ebp-Ch] BYREF
  float v25; // [esp+90h] [ebp-8h]
  float v26; // [esp+94h] [ebp-4h]

  (*(void (__thiscall **)(_DWORD *))(*this + 140))(this);
  v2 = (float *)this[2];
  v3 = 0.0;
  if ( 0.0 != v2[11] || 0.0 != v2[12] || 0.0 != v2[13] )
  {
    sub_101EE040(v2 + 3, v21, v20, v19);
    v4 = this[2];
    v23 = *(float *)(v4 + 44);
    v22 = *(float *)(v4 + 48);
    off_103EDFEC();
    off_103EDFEC();
    v5 = v23 * v21[2] + v22 * v20[2] + *(float *)(this[2] + 52);
    v24 = v21[0] * v23 + v20[0] * v22;
    v25 = v20[1] * v22 + v21[1] * v23;
    v26 = v5;
    v6 = off_103EDFEC();
    v7 = this[2];
    if ( v6 > *(float *)(v7 + 56) )
      v6 = *(float *)(v7 + 56);
    v16 = v6;
    (*(void (__thiscall **)(_DWORD *, float *, _DWORD, _DWORD))(*this + 80))(
      this,
      &v24,
      LODWORD(v16),
      *(float *)(dword_10434884 + 44));
    v3 = 0.0;
  }
  if ( v3 < *(float *)(this[2] + 72) )
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 188))(this, 0);
  if ( !sub_100F7AF0(this[1])
    || (v8 = (float *)this[1], v8[71] != flt_10459240)
    || v8[72] != *(float *)&qword_10459244
    || v8[73] != *((float *)&qword_10459244 + 1)
    || (v9 = (float *)this[2], v9[16] != flt_10459240)
    || v9[17] != *(float *)&qword_10459244
    || v9[18] != *((float *)&qword_10459244 + 1) )
  {
    sub_100A8BB0(this);
    if ( *(_BYTE *)(this[1] + 316) == 5 )
      sub_100A8D70(this);
    v10 = (float *)this[2];
    v11 = (float *)this[1];
    v10[16] = v11[71] + v10[16];
    v10[17] = v11[72] + v10[17];
    v10[18] = v11[73] + v10[18];
    sub_100A8BB0(this);
    v12 = (float *)this[2];
    v13 = *((float *)off_103DC81C + 4);
    v14 = (float *)this[1];
    v24 = v12[16] * v13;
    v25 = v12[17] * v13;
    v26 = v13 * v12[18];
    v12[16] = v12[16] - v14[71];
    v12[17] = v12[17] - v14[72];
    v12[18] = v12[18] - v14[73];
    sub_100A8E20(this, &v24, (int)v17);
    sub_100A8BB0(this);
    if ( v18 )
    {
      (*(void (__thiscall **)(_DWORD *, float *))(*this + 188))(this, v17);
      v15 = (float *)this[2];
      v15[16] = 0.0;
      v15[17] = 0.0;
      v15[18] = 0.0;
    }
    else
    {
      if ( 1.0 != v17[11] )
        sub_100A9770(this, v17, &v24);
      (*(void (__thiscall **)(_DWORD *))(*this + 140))(this);
    }
  }
}
