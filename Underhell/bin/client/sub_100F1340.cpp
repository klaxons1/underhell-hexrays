int __thiscall sub_100F1340(float *this, int a2)
{
  float *v3; // eax
  int v4; // edx
  float *v5; // ebx
  int result; // eax
  float v7; // edi
  double v8; // st7
  double v9; // st6
  double v10; // st5
  double v11; // st7
  double v12; // st5
  double v13; // st7
  int v14; // eax
  double v15; // st7
  float *v16; // eax
  float v17; // [esp+10h] [ebp-40h]
  float v18; // [esp+10h] [ebp-40h]
  float v19; // [esp+10h] [ebp-40h]
  float v20[3]; // [esp+20h] [ebp-30h] BYREF
  int v21[3]; // [esp+2Ch] [ebp-24h] BYREF
  float v22; // [esp+38h] [ebp-18h] BYREF
  float v23; // [esp+3Ch] [ebp-14h]
  float v24; // [esp+40h] [ebp-10h]
  float v25; // [esp+44h] [ebp-Ch]
  int v26; // [esp+48h] [ebp-8h]
  float v27; // [esp+4Ch] [ebp-4h]

  v3 = (float *)sub_100F0920();
  v4 = *(_DWORD *)(a2 + 4);
  v5 = v3;
  *(_BYTE *)(a2 + 16424) = 1;
  result = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(a2 + 16420) = result;
  if ( result != v4 + 4 )
  {
    result = *(_DWORD *)(result + 8);
    **(_DWORD **)(a2 + 8) = result;
    v7 = *(float *)(a2 + 16420);
    if ( v7 != 0.0 )
    {
      do
      {
        sub_101ED860(LODWORD(v7) + 12, this + 5, &v22);
        if ( ((_BYTE)this[67] & 1) != 0 )
          sub_100478B0(&v22, 0);
        *(float *)v21 = v5[26] * v24 + v5[25] * v23 + v5[24] * v22 + v5[27];
        *(float *)&v21[1] = v5[29] * v23 + v5[28] * v22 + v5[30] * v24 + v5[31];
        v8 = v24 * v5[34] + v23 * v5[33] + v22 * v5[32] + v5[35];
        *(float *)&v21[2] = v8;
        LODWORD(v27) = (int)v8;
        v25 = (float)(int)v8;
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
        v27 = v13;
        v14 = *(_DWORD *)this;
        v17 = *(float *)(LODWORD(v7) + 36);
        v26 = *(_DWORD *)(a2 + 8);
        v18 = ((double (__thiscall *)(float *, _DWORD, _DWORD))*(_DWORD *)(v14 + 56))(this, LODWORD(v7), LODWORD(v17));
        v15 = ((double (__thiscall *)(float *, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)this + 52))(
                this,
                LODWORD(v7),
                LODWORD(v18));
        v19 = v15 * v27;
        v16 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 68))(this);
        sub_10054ED0((float **)v26, (float *)v21, v16, COERCE_FLOAT(v20), v7, v19);
        result = sub_1004B070(a2, v25);
        v7 = *(float *)&result;
      }
      while ( result );
    }
  }
  return result;
}
