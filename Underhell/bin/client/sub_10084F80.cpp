int __thiscall sub_10084F80(_DWORD *this, int a2, unsigned __int16 a3, float *a4, float *a5, float *a6, float *a7)
{
  int (__thiscall *v8)(int); // edx
  float *v9; // eax
  float v10; // ecx
  float v11; // edx
  float v12; // eax
  bool v13; // c0
  bool v14; // c3
  float *v15; // esi
  double v16; // st4
  double v17; // st3
  double v18; // st2
  double v19; // st4
  double v20; // rt1
  double v21; // st2
  double v22; // st5
  double v23; // st4
  double v24; // st2
  double v25; // rtt
  double v26; // st1
  double v27; // st3
  double v28; // st4
  double v29; // st5
  double v30; // st7
  double v31; // st1
  double v32; // rtt
  double v33; // st2
  double v34; // st7
  double v35; // st6
  double v36; // st6
  double v37; // st7
  int v38; // eax
  int v39; // ebx
  int i; // edi
  double v41; // st7
  double v42; // st6
  double v43; // st5
  double v44; // rtt
  double v45; // st5
  _DWORD *v46; // esi
  int result; // eax
  float v48; // [esp+10h] [ebp-38h]
  float v49; // [esp+10h] [ebp-38h]
  float v50; // [esp+20h] [ebp-28h]
  float v51; // [esp+24h] [ebp-24h]
  float v52; // [esp+28h] [ebp-20h]
  float v53; // [esp+2Ch] [ebp-1Ch] BYREF
  float v54; // [esp+30h] [ebp-18h]
  float v55; // [esp+34h] [ebp-14h]
  float v56; // [esp+38h] [ebp-10h]
  float v57; // [esp+3Ch] [ebp-Ch]
  float v58; // [esp+40h] [ebp-8h]
  _DWORD *v59; // [esp+44h] [ebp-4h]

  v8 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 4);
  v59 = this;
  v9 = (float *)v8(a2);
  v10 = *v9;
  v11 = v9[1];
  v12 = v9[2];
  v56 = v10;
  v13 = *a7 > 0.0;
  v14 = 0.0 == *a7;
  v58 = v12;
  v57 = v11;
  v15 = a4 + 2;
  if ( v13 || v14 )
  {
    v23 = *a5;
    v17 = *a4 * v23 + v56;
    v24 = v23 * *v15;
    v19 = a4[1] * v23 + v57;
    v25 = v24 + v58;
    v50 = -1.0;
    v21 = 1.0;
    v22 = v25;
  }
  else
  {
    v16 = *a6;
    v17 = *a4 * v16 + v56;
    v18 = v16 * *v15;
    v19 = a4[1] * v16 + v57;
    v20 = v18 + v58;
    v21 = 1.0;
    v22 = v20;
    v50 = 1.0;
  }
  if ( a7[1] >= 0.0 )
  {
    v31 = a5[1];
    v27 = v17 + a4[3] * v31;
    v28 = v19 + a4[4] * v31;
    v29 = v22 + v31 * a4[5];
    v51 = -1.0;
    v30 = 0.0;
  }
  else
  {
    v26 = a6[1];
    v27 = v17 + a4[3] * v26;
    v28 = v19 + a4[4] * v26;
    v29 = v22 + v26 * a4[5];
    v30 = 0.0;
    v51 = v21;
  }
  v32 = v21;
  v33 = v30;
  v34 = v32;
  if ( v33 <= a7[2] )
  {
    v37 = a5[2];
    v56 = v27 + a4[6] * v37;
    v57 = v28 + a4[7] * v37;
    v36 = v37 * a4[8] + v29;
    v34 = -1.0;
  }
  else
  {
    v35 = a6[2];
    v56 = v27 + a4[6] * v35;
    v57 = v28 + a4[7] * v35;
    v36 = v35 * a4[8] + v29;
  }
  v58 = v36;
  v38 = this[9];
  v39 = 168 * a3;
  v52 = v34;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1041318C + 48))(
    dword_1041318C,
    *(unsigned __int16 *)(v39 + v38 + 4));
  for ( i = 0; i < 3; ++i )
  {
    v41 = *(&v50 + i);
    v42 = *(v15 - 2) * v41;
    v53 = v42;
    v43 = *(v15 - 1) * v41;
    v54 = v43;
    v44 = v43;
    v45 = v41 * *v15;
    v55 = v45;
    v48 = v42 * v56 + v44 * v57 + v45 * v58;
    (*(void (__stdcall **)(_DWORD, float *, _DWORD))(*(_DWORD *)dword_1041318C + 52))(
      *(unsigned __int16 *)(v39 + v59[9] + 4),
      &v53,
      LODWORD(v48));
    v15 += 3;
  }
  v46 = v59;
  result = sub_1007A770(off_103DCD78, *(_DWORD *)(v39 + v59[9]));
  if ( result )
  {
    if ( *(_BYTE *)(result + 1160) )
    {
      v53 = -*(float *)(result + 1144);
      v54 = -*(float *)(result + 1148);
      v55 = -*(float *)(result + 1152);
      v49 = -*(float *)(result + 1156) - 0.5;
      return (*(int (__stdcall **)(_DWORD, float *, _DWORD))(*(_DWORD *)dword_1041318C + 52))(
               *(unsigned __int16 *)(v39 + v46[9] + 4),
               &v53,
               LODWORD(v49));
    }
  }
  return result;
}
