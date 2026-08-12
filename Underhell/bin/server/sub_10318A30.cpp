int __cdecl sub_10318A30(int a1, float a2, float a3, float *a4)
{
  float *v4; // eax
  int v5; // esi
  int (__thiscall *v6)(int); // eax
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int result; // eax
  unsigned int v12; // eax
  int v13; // edi
  float *v14; // ebx
  float *v15; // eax
  float *v16; // eax
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // rt1
  double v21; // st5
  double v22; // rt2
  double v23; // st5
  double v24; // st7
  double v25; // st5
  double v26; // st6
  double v27; // st5
  double v28; // st7
  double v29; // st7
  double v30; // st7
  double v31; // st7
  double v32; // st4
  double v33; // st7
  double v34; // st6
  double v35; // st6
  float *v36; // eax
  double v37; // st7
  double v38; // st6
  double v39; // st5
  double v40; // rt2
  double v41; // st5
  int v42[10]; // [esp+18h] [ebp-CCh] BYREF
  char v43; // [esp+40h] [ebp-A4h]
  int v44[3]; // [esp+6Ch] [ebp-78h] BYREF
  int v45[6]; // [esp+78h] [ebp-6Ch] BYREF
  float v46; // [esp+90h] [ebp-54h]
  float v47; // [esp+94h] [ebp-50h]
  float v48; // [esp+98h] [ebp-4Ch]
  float v49; // [esp+9Ch] [ebp-48h]
  int v50; // [esp+A0h] [ebp-44h] BYREF
  float v51; // [esp+A4h] [ebp-40h]
  float v52; // [esp+A8h] [ebp-3Ch]
  int v53; // [esp+ACh] [ebp-38h] BYREF
  float v54; // [esp+B0h] [ebp-34h]
  float v55; // [esp+B4h] [ebp-30h]
  int i; // [esp+B8h] [ebp-2Ch]
  int v57; // [esp+BCh] [ebp-28h] BYREF
  int v58; // [esp+C0h] [ebp-24h] BYREF
  float v59; // [esp+C4h] [ebp-20h]
  float v60; // [esp+C8h] [ebp-1Ch]
  int v61; // [esp+CCh] [ebp-18h] BYREF
  int v62; // [esp+D0h] [ebp-14h]
  int v63; // [esp+D4h] [ebp-10h]
  float v64; // [esp+D8h] [ebp-Ch]
  float v65; // [esp+DCh] [ebp-8h]
  float v66; // [esp+E0h] [ebp-4h]

  v4 = a4;
  *a4 = 0.0;
  v4[1] = 0.0;
  v5 = a1;
  v4[2] = 0.0;
  if ( (*(_DWORD *)(v5 + 252) & 0x1000) != 0 )
    sub_100DAFD0(v5);
  v6 = *(int (__thiscall **)(int))(*(_DWORD *)v5 + 576);
  *(float *)&v53 = *(float *)(v5 + 476) * a3;
  v54 = *(float *)(v5 + 480) * a3;
  v55 = a3 * *(float *)(v5 + 484);
  v7 = v6(v5);
  v50 = *(int *)v7;
  v8 = *(_DWORD *)(v5 + 252);
  v51 = *(float *)(v7 + 4);
  v52 = *(float *)(v7 + 8);
  if ( (v8 & 0x1000) != 0 )
    sub_100DAFD0(v5);
  v9 = *(_DWORD *)(v5 + 476);
  v10 = *(_DWORD *)(v5 + 480);
  v45[5] = *(_DWORD *)(v5 + 484);
  v45[3] = v9;
  v45[4] = v10;
  off_10689714();
  result = dword_106E3BE4 - 1;
  for ( i = dword_106E3BE4 - 1; i >= 0; --i )
  {
    v12 = *(_DWORD *)(dword_106E3BD8 + 4 * result);
    if ( v12 == -1 || off_1061BE18[4 * (v12 & 0xFFF) + 2] != v12 >> 12 )
      v13 = 0;
    else
      v13 = off_1061BE18[4 * (v12 & 0xFFF) + 1];
    v14 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 576))(v13);
    a3 = *(float *)(v13 + 352) + a2;
    if ( sub_10113200((float *)&v50, (float *)&v53, v14, a3, (float *)&a1, (float *)&v57)
      && *(float *)&v57 >= 0.0
      && *(float *)&a1 <= 1.0 )
    {
      sub_10111110((_BYTE *)(v13 + 320), (float *)&v50, (float *)v45);
      sub_101111C0((_BYTE *)(v13 + 320), (float *)&v53, (float *)v44);
      *(float *)&v61 = -a2;
      v62 = v61;
      v63 = v61;
      *(float *)&v58 = a2;
      v59 = a2;
      v60 = a2;
      v15 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(v13 + 320) + 4))(v13 + 320);
      *(float *)&v61 = *v15 + *(float *)&v61;
      *(float *)&v62 = v15[1] + *(float *)&v62;
      *(float *)&v63 = v15[2] + *(float *)&v63;
      v16 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(v13 + 320) + 8))(v13 + 320);
      *(float *)&v58 = *v16 + *(float *)&v58;
      v59 = v16[1] + v59;
      v60 = v16[2] + v60;
      if ( sub_10113A30((float *)v45, (float *)v44, (int)&v61, (int)&v58, 0.0, (int)v42, 0) )
      {
        v17 = (*(float *)&a1 + *(float *)&v57) * 0.5;
        v18 = *(float *)&v53 * v17 + *(float *)&v50;
        v46 = v18;
        v19 = v54 * v17 + v51;
        v47 = v19;
        v20 = v19;
        v21 = v17 * v55 + v52;
        v48 = v21;
        v22 = v21;
        v23 = v18 - *v14;
        v64 = v23;
        v24 = v23;
        v25 = v20 - v14[1];
        v65 = v25;
        v26 = v25;
        v27 = v22 - v14[2];
        v66 = v27;
        if ( v43 == 3 && *(float *)&v42[8] <= 0.0 )
        {
          v28 = v27;
        }
        else
        {
          v64 = v24 * 0.1;
          v28 = v27;
          v65 = 0.1 * v26;
        }
        v49 = v28;
        v29 = off_10689714();
        if ( v29 >= 10.0 )
        {
          if ( v49 >= 0.0 || (*(_BYTE *)(v13 + 250) & 1) != 0 )
          {
            v30 = a3 - v29;
          }
          else
          {
            v31 = -v66;
            v66 = v31;
            v32 = v31;
            v33 = v65 * a3 + v14[1];
            v34 = a3 * v32 + v14[2];
            v64 = v64 * a3 + *v14 - v46;
            v65 = v33 - v47;
            v66 = v34 - v48;
            v30 = off_10689714();
          }
        }
        else
        {
          v64 = 0.0;
          v65 = 0.0;
          v66 = 1.0;
          v30 = a3;
        }
        v35 = 0.25;
        if ( *(float *)&a1 >= 0.25 )
          v35 = *(float *)&a1;
        else
          *(float *)&a1 = 0.25;
        v36 = a4;
        v37 = v30 * 1.5 / v35;
        v38 = v64 * v37;
        v64 = v38;
        v39 = v37 * v65;
        v65 = v39;
        v40 = v39;
        v41 = v37 * v66;
        v66 = v41;
        *a4 = v38 + *a4;
        v36[1] = v40 + v36[1];
        v36[2] = v41 + v36[2];
      }
    }
    result = i - 1;
  }
  return result;
}
