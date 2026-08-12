void __thiscall sub_10110780(int this, int a2, float **a3, float **a4, float a5)
{
  int v5; // edx
  float *v7; // eax
  float *v9; // ecx
  double v10; // st7
  double v11; // st7
  int v12; // esi
  double v13; // rt0
  double v14; // st7
  int v15; // eax
  double v16; // st6
  int v17; // ecx
  float v18; // edi
  float v19; // eax
  float v20; // ecx
  double v21; // st3
  int v22; // eax
  double v23; // rt0
  double v24; // st3
  double v25; // st6
  int v26; // edi
  double v27; // st6
  int v28; // ecx
  double v29; // st5
  int v30; // edi
  float *v31; // ecx
  float v32; // eax
  float v33; // ecx
  int v34; // ecx
  float v35; // [esp+0h] [ebp-78h]
  int v36[4]; // [esp+14h] [ebp-64h] BYREF
  int v37[4]; // [esp+24h] [ebp-54h] BYREF
  int v38[4]; // [esp+34h] [ebp-44h] BYREF
  _DWORD v39[3]; // [esp+44h] [ebp-34h] BYREF
  float v40; // [esp+50h] [ebp-28h]
  float v41; // [esp+54h] [ebp-24h]
  float v42; // [esp+58h] [ebp-20h]
  float v43; // [esp+5Ch] [ebp-1Ch]
  float v44; // [esp+60h] [ebp-18h]
  float v45; // [esp+64h] [ebp-14h]
  float v46; // [esp+68h] [ebp-10h]
  float v47; // [esp+6Ch] [ebp-Ch]
  float v48; // [esp+70h] [ebp-8h]
  int v49; // [esp+74h] [ebp-4h]
  int v50; // [esp+84h] [ebp+Ch]
  float v51; // [esp+8Ch] [ebp+14h]

  v5 = (int)a4;
  v7 = *a3;
  v9 = *a4;
  v10 = **a4;
  v49 = this;
  v11 = v10 - *v7;
  if ( fabs(a5 - v11) > 0.000099999997 && v11 > 0.000099999997 )
  {
    v12 = 0;
    v50 = 0;
    v13 = a5;
    v51 = a5 / v11;
    *(float *)a2 = *v9 - v13;
    if ( *(_BYTE *)(this + 29) )
    {
      v14 = 1.0;
      while ( 1 )
      {
        if ( *(_BYTE *)(v50 + *(_DWORD *)(this + 32)) )
        {
          v15 = *(_DWORD *)(*(_DWORD *)v5 + 8);
          v16 = v14 - v51;
          v17 = *((_DWORD *)*a3 + 2);
          v40 = *(float *)(v12 + v15);
          v18 = *(float *)(v12 + v15 + 4);
          v42 = *(float *)(v12 + v15 + 8);
          v43 = *(float *)(v12 + v17);
          v19 = *(float *)(v12 + v17 + 4);
          v20 = *(float *)(v12 + v17 + 8);
          v44 = v19;
          v21 = v19 * (v14 - v16);
          v22 = *(_DWORD *)(a2 + 8);
          v45 = v20;
          v41 = v18;
          v23 = v21 + v16 * v18;
          v24 = v16 * v42;
          *(float *)(v22 + v12) = v43 * (v14 - v16) + v16 * v40;
          v25 = (v14 - v16) * v20 + v24;
          *(float *)(v22 + v12 + 4) = v23;
        }
        else
        {
          v26 = *(_DWORD *)(*(_DWORD *)v5 + 8);
          v27 = *(float *)(v26 + v12);
          v28 = *((_DWORD *)*a3 + 2);
          v29 = *(float *)(v28 + v12);
          v30 = v12 + v26;
          v31 = (float *)(v12 + v28);
          if ( v29 == v27 && v31[1] == *(float *)(v30 + 4) && v31[2] == *(float *)(v30 + 8) )
          {
            v46 = *v31;
            v32 = v31[1];
            v33 = v31[2];
            v47 = v32;
            v48 = v33;
          }
          else
          {
            sub_101EF050(v31, v37);
            sub_101EF050(v30, v38);
            v35 = 1.0 - v51;
            sub_101F0F00((int)v37, (int)v38, v35, (int)v36);
            sub_101F0F70(v36, v39);
            v14 = 1.0;
            v48 = *(float *)&v39[2];
            v5 = (int)a4;
            v46 = *(float *)v39;
            v47 = *(float *)&v39[1];
          }
          v22 = *(_DWORD *)(a2 + 8);
          *(float *)(v22 + v12) = v46;
          *(float *)(v22 + v12 + 4) = v47;
          v25 = v48;
        }
        v34 = v49;
        *(float *)(v22 + v12 + 8) = v25;
        v12 += 12;
        if ( ++v50 >= *(unsigned __int8 *)(v34 + 29) )
          break;
        this = v49;
      }
    }
    *a3 = (float *)a2;
  }
}
