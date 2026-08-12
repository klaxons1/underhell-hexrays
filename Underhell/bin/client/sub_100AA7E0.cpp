void __thiscall sub_100AA7E0(int *this)
{
  float *v2; // edi
  float *v3; // edi
  float *v4; // edi
  double v5; // st7
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  double v9; // st7
  double v10; // st7
  double v11; // st6
  int v12; // edx
  double v13; // st6
  double v14; // rtt
  int v15; // edx
  float *v16; // eax
  float *v17; // ecx
  double v18; // st7
  double v19; // st7
  float *v20; // eax
  float *v21; // esi
  float *v22; // edi
  int v23; // ebx
  int v24; // eax
  float *v25; // eax
  double v26; // st6
  double v27; // st7
  float *v28; // eax
  int v29; // eax
  float *v30; // esi
  float *v31; // ecx
  float *v32; // esi
  float *v33; // ecx
  float v34; // [esp+Ch] [ebp-C8h]
  float v35; // [esp+10h] [ebp-C4h]
  float v36; // [esp+10h] [ebp-C4h]
  float v37; // [esp+10h] [ebp-C4h]
  float v38; // [esp+10h] [ebp-C4h]
  _BYTE v39[12]; // [esp+1Ch] [ebp-B8h] BYREF
  float v40; // [esp+28h] [ebp-ACh]
  float v41; // [esp+2Ch] [ebp-A8h]
  float v42; // [esp+30h] [ebp-A4h]
  float v43; // [esp+48h] [ebp-8Ch]
  _BYTE v44[12]; // [esp+70h] [ebp-64h] BYREF
  float v45[3]; // [esp+7Ch] [ebp-58h] BYREF
  float v46[3]; // [esp+88h] [ebp-4Ch] BYREF
  float v47; // [esp+94h] [ebp-40h]
  float v48; // [esp+98h] [ebp-3Ch]
  float v49; // [esp+9Ch] [ebp-38h]
  float v50[2]; // [esp+A0h] [ebp-34h] BYREF
  float v51; // [esp+A8h] [ebp-2Ch]
  float v52; // [esp+ACh] [ebp-28h] BYREF
  float v53; // [esp+B0h] [ebp-24h]
  float v54; // [esp+B4h] [ebp-20h]
  float v55[2]; // [esp+B8h] [ebp-1Ch] BYREF
  float v56; // [esp+C0h] [ebp-14h]
  float v57; // [esp+C4h] [ebp-10h]
  float v58; // [esp+C8h] [ebp-Ch]
  float v59; // [esp+CCh] [ebp-8h]
  float v60; // [esp+D0h] [ebp-4h]

  if ( *(_DWORD *)(dword_1042E284 + 48) == 1
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 312))(dword_1041315C) )
  {
    v2 = (float *)this[1];
    v60 = sin(*(float *)(dword_1042E2CC + 44) * *((float *)off_103DC81C + 3) + *(float *)(dword_1042E47C + 44));
    sub_10038150((int)v2);
    v35 = v2[62] * v2[62] + v2[61] * v2[61] + v2[63] * v2[63];
    v59 = off_103EDFE0(v35);
    v47 = *(float *)(dword_1042E3A4 + 44);
    v3 = (float *)this[1];
    v49 = sin(*(float *)(dword_1042E314 + 44) * *((float *)off_103DC81C + 3) + *(float *)(dword_1042E4C4 + 44));
    sub_10038150((int)v3);
    v36 = v3[62] * v3[62] + v3[61] * v3[61] + v3[63] * v3[63];
    v48 = off_103EDFE0(v36);
    v57 = *(float *)(dword_1042E3EC + 44);
    v4 = (float *)this[1];
    v58 = sin(*(float *)(dword_1042E35C + 44) * *((float *)off_103DC81C + 3) + *(float *)(dword_1042E50C + 44));
    sub_10038150((int)v4);
    v37 = v4[62] * v4[62] + v4[61] * v4[61] + v4[63] * v4[63];
    v5 = off_103EDFE0(v37);
    v6 = this[1];
    v45[0] = v59 * v60 * v47 * 0.0099999998;
    v45[1] = v48 * v49 * v57 * 0.0099999998;
    v45[2] = 0.0099999998 * (v5 * v58 * *(float *)(dword_1042E434 + 44));
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v6 + 960))(v6, v45);
  }
  sub_101EE040(this[2] + 12, v55, v50, v44);
  v7 = sub_100F7AF0(this[1]);
  if ( v7 )
    v59 = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
  else
    v59 = NAN;
  v8 = this[2];
  v57 = *(float *)(v8 + 44);
  v58 = *(float *)(v8 + 48);
  if ( !byte_103E0658 )
  {
    v56 = 0.0;
    v51 = 0.0;
    off_103EDFEC();
    goto LABEL_13;
  }
  v9 = 0.0;
  if ( 0.0 != v56 )
  {
    v56 = 0.0;
    off_103EDFEC();
    v9 = 0.0;
  }
  if ( v9 != v51 )
  {
    v51 = v9;
LABEL_13:
    off_103EDFEC();
    v9 = 0.0;
  }
  v52 = v55[0] * v57 + v50[0] * v58;
  v53 = v57 * v55[1] + v58 * v50[1];
  v54 = v9;
  v10 = off_103EDFEC();
  v60 = v10;
  v11 = 0.0;
  if ( 0.0 != v10 )
  {
    v12 = this[2];
    if ( *(float *)(v12 + 56) < v10 )
    {
      v13 = *(float *)(v12 + 56);
      v60 = *(float *)(v12 + 56);
      v14 = v13;
      v11 = 0.0;
      v10 = v14;
    }
  }
  v15 = *this;
  *(float *)(this[2] + 72) = v11;
  v34 = v10;
  (*(void (__thiscall **)(int *, float *, _DWORD, _DWORD))(v15 + 80))(
    this,
    &v52,
    LODWORD(v34),
    *(float *)(dword_10434884 + 44));
  v16 = (float *)this[2];
  v16[18] = 0.0;
  v17 = (float *)this[1];
  v18 = v16[16] + v17[71];
  v17 += 71;
  v16[16] = v18;
  v16[17] = v16[17] + v17[1];
  v16[18] = v16[18] + v17[2];
  v38 = v16[17] * v16[17] + v16[16] * v16[16] + v16[18] * v16[18];
  v19 = off_103EDFE0(v38);
  v20 = (float *)this[2];
  if ( v19 < 1.0 )
  {
    v21 = (float *)this[1];
    v20[16] = 0.0;
    v20[17] = 0.0;
    v20[18] = 0.0;
    v20[16] = v20[16] - v21[71];
    v20[17] = v20[17] - v21[72];
    v20[18] = v20[18] - v21[73];
    return;
  }
  v22 = v20 + 38;
  v23 = *this;
  v46[0] = v20[16] * *((float *)off_103DC81C + 4) + v20[38];
  v46[1] = v20[17] * *((float *)off_103DC81C + 4) + v20[39];
  v46[2] = v20[40];
  v24 = (*(int (__thiscall **)(int *, _DWORD, int, _BYTE *))(v23 + 44))(this, 0, 8, v39);
  (*(void (__thiscall **)(int *, float *, float *, int))(v23 + 40))(this, v22, v46, v24);
  v25 = (float *)this[2];
  v26 = v60 * v54;
  v27 = v53 * v60;
  v25[26] = v52 * v60 + v25[26];
  v25[27] = v27 + v25[27];
  v25[28] = v26 + v25[28];
  if ( 1.0 == v43 )
  {
    v28 = (float *)this[2];
    v28[38] = v40;
    v28[39] = v41;
    v28[40] = v42;
  }
  else
  {
    if ( v59 == NAN
      || *((_DWORD *)off_103DCD74 + 4 * (LOWORD(v59) & 0xFFF) + 2) != LODWORD(v59) >> 12
      || !*((_DWORD *)off_103DCD74 + 4 * (LOWORD(v59) & 0xFFF) + 1) )
    {
      v29 = this[1];
      if ( !*(_BYTE *)(v29 + 320) )
      {
        v30 = (float *)this[2];
        v30[16] = v30[16] - *(float *)(v29 + 284);
        v30[17] = v30[17] - *(float *)(v29 + 288);
        v30[18] = v30[18] - *(float *)(v29 + 292);
        return;
      }
    }
    v31 = (float *)this[1];
    if ( 0.0 != v31[1053] )
    {
      v32 = (float *)this[2];
      v32[16] = v32[16] - v31[71];
      v32[17] = v32[17] - v31[72];
      v32[18] = v32[18] - v31[73];
      return;
    }
    (*(void (__thiscall **)(int *, float *, _BYTE *))(*this + 192))(this, v46, v39);
    v28 = (float *)this[2];
  }
  v33 = (float *)this[1];
  v28[16] = v28[16] - v33[71];
  v28[17] = v28[17] - v33[72];
  v28[18] = v28[18] - v33[73];
  sub_100AA6C0(this);
}
