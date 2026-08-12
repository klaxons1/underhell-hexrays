void __thiscall sub_100A9C30(_DWORD *this)
{
  double v1; // st7
  char v3; // al
  float *v4; // eax
  double v5; // st6
  double v6; // st7
  int v7; // ecx
  int v8; // eax
  double v9; // st7
  double v10; // st6
  int v11; // edx
  long double v12; // st6
  long double v13; // st7
  int v14; // eax
  long double v15; // st7
  int v16; // eax
  long double v17; // st6
  int v18; // eax
  int v19; // edx
  float *v20; // ecx
  double v21; // st7
  double v22; // st6
  double v23; // st5
  double v24; // st6
  double v25; // rtt
  int v26; // edi
  int v27; // eax
  int v28; // eax
  float *v29; // eax
  float *v30; // eax
  float *v31; // ecx
  int v32; // esi
  float v33; // [esp+10h] [ebp-14h] BYREF
  float v34; // [esp+14h] [ebp-10h]
  float v35; // [esp+18h] [ebp-Ch]
  float v36; // [esp+1Ch] [ebp-8h]
  float v37; // [esp+20h] [ebp-4h]

  v1 = 0.0;
  v3 = *(_BYTE *)(this[1] + 316);
  if ( v3 != 1 && v3 != 8 && v3 != 10 )
  {
    v4 = (float *)this[2];
    v36 = v4[12] * v4[12] + v4[11] * v4[11] + v4[13] * v4[13];
    v5 = v4[15];
    v6 = v5;
    if ( v5 != 0.0 )
    {
      v7 = this[2];
      if ( v5 >= *(float *)(v7 + 56) )
        v6 = *(float *)(v7 + 56);
      *(float *)(v7 + 56) = v6;
    }
    v8 = *(_DWORD *)(this[1] + 4672);
    v37 = 1.0;
    if ( v8 )
      v37 = *(float *)(v8 + 64);
    v9 = sub_100A9A90((int)this);
    if ( v37 <= v9 )
      v9 = v37;
    *(float *)(this[2] + 56) = v9 * *(float *)(this[2] + 56);
    if ( byte_103E0658 )
    {
      v10 = 0.0;
      if ( 0.0 != v36 )
      {
        v11 = this[2];
        if ( *(float *)(v11 + 56) * *(float *)(v11 + 56) < v36 )
        {
          v1 = 0.0;
          v12 = *(float *)(v11 + 56) / sqrt(v36);
          *(float *)(v11 + 44) = *(float *)(v11 + 44) * v12;
          *(float *)(this[2] + 48) = *(float *)(this[2] + 48) * v12;
          *(float *)(this[2] + 52) = v12 * *(float *)(this[2] + 52);
          goto LABEL_20;
        }
      }
    }
    else
    {
      v13 = sqrt(v36);
      v10 = 0.0;
      if ( 0.0 != v13 && *(float *)(this[2] + 56) < v13 )
      {
        v14 = this[2];
        v15 = *(float *)(v14 + 56) / v13;
        *(float *)(v14 + 44) = *(float *)(v14 + 44) * v15;
        *(float *)(this[2] + 48) = *(float *)(this[2] + 48) * v15;
        v16 = this[2];
        v17 = v15 * *(float *)(v16 + 52);
        v1 = 0.0;
        *(float *)(v16 + 52) = v17;
        goto LABEL_20;
      }
    }
    v1 = v10;
  }
LABEL_20:
  v18 = this[1];
  if ( (*(_BYTE *)(v18 + 732) & 0x28) != 0 || *(int *)(v18 + 136) <= 0 )
  {
    *(float *)(this[2] + 44) = v1;
    *(float *)(this[2] + 48) = v1;
    *(float *)(this[2] + 52) = v1;
  }
  (*(void (__thiscall **)(_DWORD *))(*this + 56))(this);
  v19 = this[1];
  if ( *(int *)(v19 + 136) <= 0 )
  {
    v29 = (float *)this[2];
    v29[19] = v29[22];
    v29[20] = v29[23];
    v29[21] = v29[24];
  }
  else
  {
    v20 = (float *)this[2];
    v21 = v20[19];
    v33 = v20[19];
    v22 = v20[20];
    v34 = v20[20];
    v23 = v20[21];
    v35 = v20[21];
    v24 = v22 + *(float *)(v19 + 3572);
    v25 = v23 + *(float *)(v19 + 3576);
    v33 = v21 + *(float *)(v19 + 3568);
    v34 = v24;
    v35 = v25;
    if ( *(_BYTE *)(v19 + 316) == 1 || *(_BYTE *)(v19 + 316) == 8 )
    {
      v28 = this[2];
      v20[21] = 0.0;
      *(float *)(v28 + 76) = v33;
      *(float *)(v28 + 80) = v34;
    }
    else
    {
      v26 = this[2];
      *(float *)(v26 + 84) = ((double (__thiscall *)(_DWORD *, float *, int, _DWORD, _DWORD))*(_DWORD *)(*this + 52))(
                               this,
                               &v33,
                               v26 + 64,
                               *(float *)(dword_10434A34 + 44),
                               *(float *)(dword_104349EC + 44));
      v27 = this[2];
      *(float *)(v27 + 76) = v33;
      *(float *)(v27 + 80) = v34;
    }
  }
  if ( *(int *)(this[1] + 136) <= 0 )
  {
    v30 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
    v31 = (float *)this[1];
    v31[55] = v30[24];
    v31[56] = v30[25];
    v31[57] = v30[26];
  }
  v32 = this[2];
  if ( *(float *)(v32 + 80) > 180.0 )
    *(float *)(v32 + 80) = *(float *)(v32 + 80) - 360.0;
}
