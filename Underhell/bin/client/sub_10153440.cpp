void __thiscall sub_10153440(int this, float a2, float *a3, float *a4)
{
  bool v5; // zf
  double v6; // st7
  double v7; // st5
  double v8; // st7
  int v9; // ebx
  int v10; // esi
  double v11; // st6
  double v12; // st5
  int v13; // edi
  _DWORD *v14; // edx
  float *v15; // ecx
  float *v16; // ecx
  float *v17; // ecx
  float *v18; // ecx
  _DWORD *v19; // edx
  float *v20; // ecx
  float v21; // [esp+14h] [ebp-14h] BYREF
  float v22; // [esp+18h] [ebp-10h]
  float v23; // [esp+1Ch] [ebp-Ch]
  float v24; // [esp+20h] [ebp-8h]
  int v25; // [esp+24h] [ebp-4h]
  float v26; // [esp+30h] [ebp+8h]

  v5 = *(_BYTE *)(this + 1388) == 0;
  v25 = this;
  if ( !v5 || !*(_DWORD *)(dword_1043D53C + 48) )
  {
    v24 = *(float *)(dword_1043D4F4 + 44);
    v6 = RandomFloat(LODWORD(a2), *(float *)(dword_1043D4AC + 44));
    v7 = a4[1];
    v21 = *a4 * v6 + *a3;
    v22 = v6 * v7 + a3[1];
    v23 = RandomFloat(72.0, LODWORD(v24)) + a3[2];
    v26 = -v24;
    v21 = RandomFloat(LODWORD(v26), LODWORD(v24)) + v21;
    v8 = RandomFloat(LODWORD(v26), LODWORD(v24)) + v22;
    v9 = *(_DWORD *)(this + 1256);
    v10 = 0;
    v22 = v8;
    v11 = v23;
    v12 = v21;
    if ( v9 < 4 )
    {
LABEL_30:
      if ( v10 < v9 )
      {
        v19 = (_DWORD *)(v25 + 4 * v10 + 1260);
        do
        {
          v20 = (float *)(*(_DWORD *)(v25 + 1392) + 36 * *v19);
          if ( v12 >= v20[3] && v12 <= v20[6] && v20[4] <= v8 && v20[7] >= v8 && v20[5] <= v11 && v20[8] >= v11 )
            break;
          ++v10;
          ++v19;
        }
        while ( v10 < v9 );
      }
    }
    else
    {
      v13 = *(_DWORD *)(this + 1392);
      v14 = (_DWORD *)(v25 + 1264);
      while ( 1 )
      {
        v15 = (float *)(v13 + 36 * *(v14 - 1));
        if ( v12 >= v15[3] && v12 <= v15[6] && v15[4] <= v8 && v15[7] >= v8 && v15[5] <= v11 && v15[8] >= v11 )
          break;
        v16 = (float *)(v13 + 36 * *v14);
        if ( v12 >= v16[3] && v12 <= v16[6] && v16[4] <= v8 && v16[7] >= v8 && v16[5] <= v11 && v16[8] >= v11 )
        {
          ++v10;
          break;
        }
        v17 = (float *)(v13 + 36 * v14[1]);
        if ( v12 >= v17[3] && v12 <= v17[6] && v17[4] <= v8 && v17[7] >= v8 && v17[5] <= v11 && v17[8] >= v11 )
        {
          v10 += 2;
          break;
        }
        v18 = (float *)(v13 + 36 * v14[2]);
        if ( v12 >= v18[3] && v12 <= v18[6] && v18[4] <= v8 && v18[7] >= v8 && v18[5] <= v11 && v18[8] >= v11 )
        {
          v10 += 3;
          break;
        }
        v10 += 4;
        v14 += 4;
        if ( v10 >= v9 - 3 )
          goto LABEL_30;
      }
    }
    if ( v10 != v9 )
      sub_10151F30(v25, v10, &v21, *(_DWORD *)(v25 + 4 * v10 + 1260));
  }
}
