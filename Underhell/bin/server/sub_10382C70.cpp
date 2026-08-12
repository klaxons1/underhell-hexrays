void __userpurge sub_10382C70(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4@<esi>, float a5, float *a6)
{
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // edi
  void (__thiscall *v11)(int, _DWORD); // eax
  int v12; // ebx
  float *v13; // edi
  float *v14; // eax
  long double v15; // st7
  double v16; // st7
  double v17; // st3
  double v18; // st2
  double v19; // st1
  double v20; // rt0
  double v21; // st1
  double v22; // rt1
  double v23; // st1
  double v24; // rtt
  double v25; // rt0
  double v26; // st1
  double v27; // st2
  double v28; // st3
  double v29; // st1
  double v30; // st7
  double v31; // st1
  double v32; // st7
  double v33; // st6
  double v34; // st5
  float v35; // eax
  float v36; // edx
  double v37; // st6
  double v38; // st7
  double v39; // st7
  double v40; // st4
  double v41; // rtt
  double v42; // st4
  double v43; // st5
  double v44; // st6
  double v45; // st7
  double v46; // st5
  float v47; // [esp+14h] [ebp-48h]
  float v48; // [esp+18h] [ebp-44h]
  _BYTE v50[12]; // [esp+20h] [ebp-3Ch] BYREF
  float v51[3]; // [esp+2Ch] [ebp-30h] BYREF
  float v52[3]; // [esp+38h] [ebp-24h] BYREF
  float v53; // [esp+44h] [ebp-18h] BYREF
  float v54; // [esp+48h] [ebp-14h]
  float v55; // [esp+4Ch] [ebp-10h]
  int v56; // [esp+50h] [ebp-Ch] BYREF
  float v57; // [esp+54h] [ebp-8h]
  float v58; // [esp+58h] [ebp-4h]
  int v59; // [esp+68h] [ebp+Ch]

  if ( a5 > 0.0 && *(float *)(a1 + 3804) <= (double)*(float *)(dword_106B31C8 + 12) && *(int *)(a1 + 220) > 0 )
  {
    v7 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)a1 + 368))(a1, a3, a2, a4);
    v8 = *(_DWORD *)a1;
    if ( v7 )
    {
      v9 = (*(int (__thiscall **)(int))(v8 + 368))(a1);
      v10 = *(_DWORD *)a1;
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)v9 + 504))(v9, &v53);
      v11 = *(void (__thiscall **)(int, _DWORD))(v10 + 2212);
    }
    else
    {
      v11 = *(void (__thiscall **)(int, _DWORD))(v8 + 2212);
    }
    v11(a1, LODWORD(a5));
    if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(a1 + 3812) )
    {
      v35 = *(float *)(a1 + 3624);
      v36 = *(float *)(a1 + 3632);
      v54 = *(float *)(a1 + 3628);
      v53 = v35;
      v55 = v36;
      off_10689714();
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      v37 = a6[1] - *(float *)(a1 + 584);
      v38 = a6[2] - *(float *)(a1 + 588);
      *(float *)&v56 = *a6 - *(float *)(a1 + 580);
      v57 = v37;
      v58 = v38;
      v32 = off_10689714();
      if ( v54 * v57 + v53 * *(float *)&v56 + v55 * v58 <= 0.25 )
        v33 = 200.0;
      else
        v33 = 300.0;
      v34 = (float)300.0;
    }
    else
    {
      *(float *)&v59 = 500.0;
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
      {
        v12 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
        v13 = (float *)sub_10019640((_DWORD *)a1);
        v14 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v12 + 504))(v12, v50);
        v53 = *v14 - *v13;
        v54 = v14[1] - v13[1];
        v15 = v14[2] - v13[2];
        v55 = v15;
        *(float *)&v59 = fabs(v15);
        off_10689714();
        v16 = a5;
        if ( a5 > 0.0 )
        {
          v17 = *(float *)(a1 + 3816);
          v18 = *(float *)(a1 + 3820);
          v19 = *(float *)(a1 + 3824);
          while ( 1 )
          {
            v25 = v19;
            v26 = v18;
            v27 = v17 + v53 * 4.0;
            v28 = v26 + v54 * 4.0;
            v29 = v16;
            v30 = v25 + 4.0 * v55;
            v31 = v29 - 0.1;
            if ( v31 <= 0.0 )
              break;
            v20 = v31;
            v21 = v30;
            v16 = v20;
            v22 = v21;
            v23 = v28;
            v17 = v27;
            v24 = v23;
            v19 = v22;
            v18 = v24;
          }
          *(float *)(a1 + 3816) = v27;
          *(float *)(a1 + 3820) = v28;
          *(float *)(a1 + 3824) = v30;
        }
        *(float *)(a1 + 3824) = v55;
        off_10689714();
      }
      v56 = *(int *)(a1 + 3816);
      v57 = *(float *)(a1 + 3820);
      v58 = *(float *)(a1 + 3824);
      v32 = 3.4028235e38;
      v33 = 400.0;
      v34 = *(float *)&v59 / a5;
      if ( v34 > 500.0 )
        v34 = 500.0;
    }
    v39 = v32 / a5;
    v40 = v33;
    if ( v33 > v39 )
      v40 = v39;
    v41 = v40;
    v42 = v34;
    v43 = v41;
    if ( v42 <= v39 )
      v39 = v42;
    v48 = v39 * *(float *)(a1 + 3796);
    v47 = v43 * *(float *)(a1 + 3796);
    sub_10328520((float *)a1, a5, (float *)&v56, v47, v48, 0.30000001);
    (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)a1 + 528))(a1, v52, v51);
    v44 = v57;
    v45 = *(float *)&v56;
    v46 = v58;
    *(float *)(a1 + 3752) = (v52[2] * v58 + v52[0] * *(float *)&v56 + v52[1] * v57) * 40.0;
    *(float *)(a1 + 3760) = (v45 * v51[0] + v44 * v51[1] + v46 * v51[2]) * 40.0;
    *(float *)(a1 + 3756) = 0.0;
  }
}
