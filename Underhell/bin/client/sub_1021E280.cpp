void __thiscall sub_1021E280(int this, int a2, float a3, int a4)
{
  int v5; // eax
  int v6; // ecx
  double v7; // st7
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  float *v12; // esi
  int v13; // edx
  double v14; // st6
  _DWORD *v15; // eax
  int v16; // eax
  int v17; // edi
  double v18; // st7
  float *v19; // eax
  double v20; // st7
  double v21; // st6
  double v22; // st5
  double v23; // st4
  double v24; // st3
  double v25; // st4
  double v26; // st6
  double v27; // rt1
  int i; // [esp+10h] [ebp-98h]
  float v30; // [esp+18h] [ebp-90h]
  float v31; // [esp+1Ch] [ebp-8Ch]
  float *v32; // [esp+20h] [ebp-88h]
  float v33; // [esp+28h] [ebp-80h]
  float *v34; // [esp+2Ch] [ebp-7Ch]
  float v35[3]; // [esp+30h] [ebp-78h] BYREF
  float v36[3]; // [esp+3Ch] [ebp-6Ch] BYREF
  float v37[3]; // [esp+48h] [ebp-60h] BYREF
  float v38[3]; // [esp+54h] [ebp-54h] BYREF
  float v39[18]; // [esp+60h] [ebp-48h] BYREF

  sub_101F98F0((float *)a2, *(_DWORD *)(this + 44));
  v5 = a2 + 24 * (*(_DWORD *)(this + 44) + 185);
  v6 = *(_DWORD *)(v5 + 8);
  if ( v6 && *(_DWORD *)(v5 + 12) == v6 )
  {
    v7 = *(float *)(this + 52);
    v31 = *(float *)(this + 52);
    if ( v7 <= 0.0 )
    {
      v31 = 1.0e20;
      v7 = 1.0e20;
    }
    v30 = 0.0;
    if ( *(float *)(this + 48) < (double)*(float *)(this + 52) )
      v30 = 1.0 / (*(float *)(this + 52) - *(float *)(this + 48));
    v8 = 0;
    for ( i = 0; i < *(_DWORD *)(a2 + 40); ++i )
    {
      v9 = v8 / 4;
      v10 = v8 / 4 * *(_DWORD *)(a2 + 6324);
      v11 = v8 & 3;
      v32 = (float *)(*(_DWORD *)(a2 + 6068) + 4 * (v11 + v10));
      v34 = (float *)(*(_DWORD *)(a2 + 6076) + 4 * (v11 + v9 * *(_DWORD *)(a2 + 6332)));
      v12 = (float *)(*(_DWORD *)(a2 + 6128) + 4 * (v11 + v9 * *(_DWORD *)(a2 + 6384)));
      v13 = *(_DWORD *)(*(_DWORD *)(a2 + 6124) + 4 * (v11 + v9 * *(_DWORD *)(a2 + 6380)));
      v14 = *(float *)(a2 + 36) - *(float *)(*(_DWORD *)(a2 + 6100) + 4 * (v11 + v9 * *(_DWORD *)(a2 + 6356)));
      v33 = v14;
      if ( v14 < v7 )
      {
        v15 = (_DWORD *)(a2 + 24 * *(_DWORD *)(this + 44));
        if ( v13 < v15[1112] && v13 < v15[1113] && v13 >= 0 )
        {
          v16 = v15[1114];
          v17 = 72 * v13;
          v18 = *(float *)(v16 + 72 * v13 + 12);
          v19 = (float *)(72 * v13 + v16);
          v35[0] = (v18 - *v19) * *v12 + *v19;
          v35[1] = (v19[4] - v19[1]) * v12[4] + v19[1];
          v35[2] = (v19[5] - v19[2]) * v12[8] + v19[2];
          sub_101ED860(v35, v19 + 6, v36);
          qmemcpy(v39, (const void *)(v17 + *(_DWORD *)(a2 + 24 * *(_DWORD *)(this + 44) + 4460)), sizeof(v39));
          v38[0] = v39[0] + (v39[3] - v39[0]) * *v12;
          v38[1] = v39[1] + (v39[4] - v39[1]) * v12[4];
          v38[2] = v39[2] + (v39[5] - v39[2]) * v12[8];
          sub_101ED860(v38, &v39[6], v37);
          v20 = v36[0] - v37[0];
          v21 = v36[1] - v37[1];
          v22 = v36[2] - v37[2];
          if ( v33 > (double)*(float *)(this + 48) )
          {
            v23 = (1.0 - (v33 - *(float *)(this + 48)) * v30) * a3;
            v20 = v20 * v23;
            v21 = v21 * v23;
            v22 = v22 * v23;
          }
          v24 = v32[4] + v21;
          v25 = v32[8] + v22;
          *v32 = *v32 + v20;
          v32[4] = v24;
          v32[8] = v25;
          v26 = v21 + v34[4];
          v27 = v22 + v34[8];
          *v34 = *v34 + v20;
          v34[4] = v26;
          v34[8] = v27;
          v7 = v31;
        }
      }
      v8 = i + 1;
    }
  }
}
