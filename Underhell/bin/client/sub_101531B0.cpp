void __thiscall sub_101531B0(float *this, float a2)
{
  int v2; // edi
  double v3; // st7
  int v4; // ebx
  int v5; // esi
  double v6; // st6
  double v7; // st5
  int v8; // edi
  _DWORD *v9; // edx
  float *v10; // ecx
  float *v11; // ecx
  float *v12; // ecx
  float *v13; // ecx
  int v14; // edi
  float *v15; // edx
  float *v16; // ecx
  float v17; // [esp+14h] [ebp-14h] BYREF
  float v18; // [esp+18h] [ebp-10h]
  float v19; // [esp+1Ch] [ebp-Ch]
  float v20; // [esp+20h] [ebp-8h]
  float *v21; // [esp+24h] [ebp-4h]

  v20 = -a2;
  v2 = (int)this;
  v21 = this;
  v17 = RandomFloat(LODWORD(v20), LODWORD(a2)) + this[304];
  v18 = RandomFloat(LODWORD(v20), LODWORD(a2)) + *(float *)(v2 + 1220);
  v3 = RandomFloat(LODWORD(v20), LODWORD(a2)) + *(float *)(v2 + 1224);
  v4 = *(_DWORD *)(v2 + 1256);
  v5 = 0;
  v19 = v3;
  v6 = v18;
  v7 = v17;
  if ( v4 < 4 )
  {
LABEL_29:
    if ( v5 >= v4 )
      goto LABEL_43;
    v14 = *(_DWORD *)(v2 + 1392);
    v15 = &v21[v5 + 315];
    do
    {
      v16 = (float *)(v14 + 36 * *(_DWORD *)v15);
      if ( v7 >= v16[3] && v7 <= v16[6] && v16[4] <= v6 && v16[7] >= v6 && v16[5] <= v3 && v16[8] >= v3 )
        break;
      ++v5;
      ++v15;
    }
    while ( v5 < v4 );
  }
  else
  {
    v8 = *(_DWORD *)(v2 + 1392);
    v9 = v21 + 316;
    while ( 1 )
    {
      v10 = (float *)(v8 + 36 * *(v9 - 1));
      if ( v7 >= v10[3] && v7 <= v10[6] && v10[4] <= v6 && v10[7] >= v6 && v10[5] <= v3 && v10[8] >= v3 )
        break;
      v11 = (float *)(v8 + 36 * *v9);
      if ( v7 >= v11[3] && v7 <= v11[6] && v11[4] <= v6 && v11[7] >= v6 && v11[5] <= v3 && v11[8] >= v3 )
      {
        ++v5;
        break;
      }
      v12 = (float *)(v8 + 36 * v9[1]);
      if ( v7 >= v12[3] && v7 <= v12[6] && v12[4] <= v6 && v12[7] >= v6 && v12[5] <= v3 && v12[8] >= v3 )
      {
        v5 += 2;
        break;
      }
      v13 = (float *)(v8 + 36 * v9[2]);
      if ( v7 >= v13[3] && v7 <= v13[6] && v13[4] <= v6 && v13[7] >= v6 && v13[5] <= v3 && v13[8] >= v3 )
      {
        v5 += 3;
        break;
      }
      v5 += 4;
      v9 += 4;
      if ( v5 >= v4 - 3 )
      {
        v2 = (int)v21;
        goto LABEL_29;
      }
    }
  }
  v2 = (int)v21;
LABEL_43:
  if ( v5 != v4 )
    sub_10151F30(v2, v5, &v17, *(_DWORD *)(v2 + 4 * v5 + 1260));
}
