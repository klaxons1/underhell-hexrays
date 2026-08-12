int __thiscall sub_100F30D0(float *this, int a2)
{
  int v4; // ecx
  int result; // eax
  float *v6; // esi
  float *v7; // eax
  double v8; // st7
  double v9; // st6
  double v10; // st5
  double v11; // st7
  double v12; // st5
  double v13; // st7
  int v14; // edx
  float *v15; // eax
  float v16; // [esp+10h] [ebp-30h]
  float v17; // [esp+10h] [ebp-30h]
  float v18; // [esp+10h] [ebp-30h]
  float v19[3]; // [esp+20h] [ebp-20h] BYREF
  int v20[3]; // [esp+2Ch] [ebp-14h] BYREF
  float v21; // [esp+38h] [ebp-8h]
  int v22; // [esp+3Ch] [ebp-4h]
  float v23; // [esp+48h] [ebp+8h]

  v4 = *(_DWORD *)(a2 + 4);
  *(_BYTE *)(a2 + 16424) = 1;
  result = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(a2 + 16420) = result;
  if ( result != v4 + 4 )
  {
    **(_DWORD **)(a2 + 8) = *(_DWORD *)(result + 8);
    v6 = *(float **)(a2 + 16420);
    if ( v6 )
    {
      do
      {
        v7 = (float *)sub_100F0920();
        *(float *)v20 = v7[25] * v6[4] + v7[24] * v6[3] + v7[26] * v6[5] + v7[27];
        *(float *)&v20[1] = v7[28] * v6[3] + v7[29] * v6[4] + v7[30] * v6[5] + v7[31];
        v8 = v7[32] * v6[3] + v7[33] * v6[4] + v7[34] * v6[5] + v7[35];
        *(float *)&v20[2] = v8;
        v21 = (float)(int)v8;
        v9 = this[63];
        v10 = v8;
        v11 = this[64];
        v12 = -v10;
        if ( v12 <= v11 )
        {
          if ( v12 <= v9 )
            v13 = 0.0;
          else
            v13 = (v12 - v9) / (v11 - v9);
        }
        else
        {
          v13 = 1.0;
        }
        v23 = v13;
        v14 = *(_DWORD *)this;
        v16 = v6[9];
        v22 = *(_DWORD *)(a2 + 8);
        v17 = ((double (__thiscall *)(float *, float *, _DWORD))*(_DWORD *)(v14 + 56))(this, v6, LODWORD(v16));
        v18 = ((double (__thiscall *)(float *, float *, _DWORD))*(_DWORD *)(*(_DWORD *)this + 52))(
                this,
                v6,
                LODWORD(v17))
            * v23;
        v15 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 68))(this);
        sub_10054ED0((float **)v22, (float *)v20, v15, COERCE_FLOAT(v19), *(float *)&v6, v18);
        result = sub_1004B070(a2, v21);
        v6 = (float *)result;
      }
      while ( result );
    }
  }
  return result;
}
