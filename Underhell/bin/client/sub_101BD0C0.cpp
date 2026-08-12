bool __userpurge sub_101BD0C0@<al>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4@<esi>,
        float *a5,
        float *a6,
        float *a7)
{
  bool v7; // zf
  int v8; // ecx
  int v11; // esi
  int v12; // esi
  int v13; // eax
  double v14; // st2
  double v15; // st6
  double v16; // rtt
  double v17; // rt0
  double v19; // st7
  double v20; // st6
  double v21; // st5
  double v22; // st4
  double v23; // st7
  double v24; // st6
  double v25; // st5
  double v26; // rt0
  double v27; // st5
  _BYTE v30[84]; // [esp+2Ch] [ebp-E4h] BYREF
  _BYTE v31[44]; // [esp+80h] [ebp-90h] BYREF
  float v32; // [esp+ACh] [ebp-64h]
  char v33; // [esp+B6h] [ebp-5Ah]
  char v34; // [esp+B7h] [ebp-59h]
  char v35; // [esp+C2h] [ebp-4Eh]
  float v36[3]; // [esp+D4h] [ebp-3Ch] BYREF
  float v37[3]; // [esp+E0h] [ebp-30h] BYREF
  float v38[3]; // [esp+ECh] [ebp-24h] BYREF
  float v39; // [esp+F8h] [ebp-18h]
  float v40; // [esp+FCh] [ebp-14h]
  float v41; // [esp+100h] [ebp-10h]
  int v42; // [esp+104h] [ebp-Ch]
  int v43; // [esp+108h] [ebp-8h]
  int v44; // [esp+10Ch] [ebp-4h]
  int savedregs; // [esp+110h] [ebp+0h] BYREF
  int v46; // [esp+118h] [ebp+8h]
  int v47; // [esp+120h] [ebp+10h]

  v7 = *(_DWORD *)(a1 + 12) == 0;
  v44 = a1;
  if ( v7 || !*(_DWORD *)(a1 + 16) )
    return 0;
  v8 = dword_1044F244;
  *a7 = 0.0;
  a7[1] = 0.0;
  a7[2] = 0.0;
  *a6 = 0.0;
  a6[1] = 0.0;
  a6[2] = 0.0;
  v11 = (*(int (__thiscall **)(int, float *, int, int, int))(*(_DWORD *)v8 + 44))(v8, a5, a3, a4, a2);
  v43 = (*(int (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)dword_1044F244 + 48))(dword_1044F244, v11, 0, 0);
  v46 = sub_100DDA40(v43);
  (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1044F244 + 48))(dword_1044F244, v11, v43, v46);
  v42 = 0;
  if ( *(int *)(v44 + 12) > 0 )
  {
    v47 = 0;
    do
    {
      v12 = v47 + *(_DWORD *)(v44 + 16);
      v13 = *(_DWORD *)(v12 + 40);
      if ( v13 != 5 )
      {
        if ( v13 == 3 )
        {
          v14 = *(float *)(v12 + 32);
          v15 = *(float *)(v12 + 28) * 56755.84;
          v16 = a5[1];
          v17 = a5[2] + 30.0;
          v38[0] = *a5 - *(float *)(v12 + 24) * 56755.84;
          v38[1] = v16 - v15;
          v38[2] = v17 - 56755.84 * v14;
          sub_1000FCE0((int)&savedregs, v12, a5, v38, 16513, 0, 0, (int)v31);
          if ( (v32 < 1.0 || v33 || v34) && (v35 & 6) != 0 )
          {
            sub_10034930(v46);
            return 0;
          }
        }
        else
        {
          v19 = *(float *)v12 - *a5;
          v36[0] = v19;
          v20 = *(float *)(v12 + 4) - a5[1];
          v36[1] = v20;
          v21 = *(float *)(v12 + 8) - a5[2];
          v36[2] = v21;
          v22 = *(float *)(v12 + 60) * *(float *)(v12 + 60);
          if ( v22 <= 0.0 || v22 > v19 * v19 + v20 * v20 + v21 * v21 )
          {
            if ( (*(unsigned __int8 (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1044F244 + 52))(
                   dword_1044F244,
                   v12,
                   v46,
                   v43) )
            {
              v23 = sub_101BCDC0(v36, v12);
              v24 = *(float *)(v12 + 12) * v23;
              v39 = v24;
              v25 = *(float *)(v12 + 16) * v23;
              v40 = v25;
              v26 = v25;
              v27 = v23 * *(float *)(v12 + 20);
              v41 = v27;
              if ( v27 * v27 + v24 * v24 + v26 * v26 > a7[2] * a7[2] + *a7 * *a7 + a7[1] * a7[1] )
              {
                v37[0] = *a5;
                v37[1] = a5[1];
                v37[2] = a5[2] + 30.0;
                sub_1000FCE0((int)&savedregs, v12, v37, (float *)v12, 16513, 0, 0, (int)v30);
                if ( !sub_100256B0((int)v30) )
                {
                  *a6 = *(float *)v12;
                  a6[1] = *(float *)(v12 + 4);
                  a6[2] = *(float *)(v12 + 8);
                  *a7 = v39;
                  a7[1] = v40;
                  a7[2] = v41;
                }
              }
            }
          }
        }
      }
      v47 += 88;
      ++v42;
    }
    while ( v42 < *(_DWORD *)(v44 + 12) );
  }
  sub_10034930(v46);
  return !sub_100E2000(a7, 0.0099999998);
}
