char __thiscall sub_102A4500(int this, int *a2, float *a3, float *a4)
{
  _DWORD *v6; // edi
  int v7; // eax
  int v8; // ecx
  float v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  float *v17; // eax
  float *v18; // eax
  bool v19; // al
  _DWORD *v20; // edi
  float *v21; // ebx
  float *v22; // eax
  double v23; // st7
  double v24; // st7
  int v25; // ebx
  char *v26; // eax
  int v27; // eax
  int v28; // edi
  float *v29; // eax
  double v30; // st4
  double v31; // st6
  double v32; // st4
  double v33; // st5
  double v34; // st6
  double v35; // st7
  char v36; // al
  _BYTE v37[12]; // [esp+30h] [ebp-90h] BYREF
  float v38[3]; // [esp+3Ch] [ebp-84h] BYREF
  float v39[5]; // [esp+48h] [ebp-78h] BYREF
  float v40[3]; // [esp+5Ch] [ebp-64h] BYREF
  int v41[3]; // [esp+68h] [ebp-58h] BYREF
  float v42; // [esp+74h] [ebp-4Ch]
  float v43; // [esp+78h] [ebp-48h]
  int v44; // [esp+7Ch] [ebp-44h]
  float v45; // [esp+80h] [ebp-40h]
  float v46; // [esp+84h] [ebp-3Ch]
  float v47; // [esp+88h] [ebp-38h]
  float v48; // [esp+8Ch] [ebp-34h]
  float v49; // [esp+90h] [ebp-30h]
  float v50; // [esp+94h] [ebp-2Ch]
  int v51; // [esp+98h] [ebp-28h]
  float v52; // [esp+9Ch] [ebp-24h]
  int v53; // [esp+A0h] [ebp-20h] BYREF
  float v54; // [esp+A4h] [ebp-1Ch]
  float v55; // [esp+A8h] [ebp-18h]
  float v56; // [esp+ACh] [ebp-14h] BYREF
  float v57; // [esp+B0h] [ebp-10h]
  float v58; // [esp+B4h] [ebp-Ch]
  _DWORD *v59; // [esp+B8h] [ebp-8h]
  char v60; // [esp+BFh] [ebp-1h]

  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 152) < 0.5 || sub_102A2540((_DWORD *)this) > 150.0 )
    return 0;
  if ( *(int *)(dword_106B31C8 + 20) > 1 )
    return 0;
  v6 = (_DWORD *)sub_10261B20();
  v44 = (int)v6;
  if ( !v6 )
    return 0;
  v7 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 576))(*(_DWORD *)(this + 4));
  v8 = *(int *)v7;
  v9 = *(float *)(v7 + 4);
  v55 = *(float *)(v7 + 8);
  v10 = *(_DWORD *)(this + 4);
  v53 = v8;
  v54 = v9;
  v43 = sub_10111020((float *)(v10 + 320));
  if ( sub_102A22E0(v6, (float *)&v53, v43) || !sub_1029F4E0((_DWORD *)this, 0) )
    return 0;
  v11 = sub_1026A890((unsigned int *)(this + 68));
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 340))(v11);
  v59 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v12 + 136))(v12, *(_DWORD *)(this + 4), 0);
  if ( !v59 )
    return 1;
  v13 = sub_1026A890((unsigned int *)(this + 68));
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 340))(v13);
  if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD, _BYTE *, _DWORD))(*(_DWORD *)v14 + 120))(
         v14,
         *(_DWORD *)(this + 4),
         v37,
         0) )
  {
    v15 = sub_1026A890((unsigned int *)(this + 68));
    (*(void (__thiscall **)(int, _DWORD, float *, _DWORD))(*(_DWORD *)v15 + 528))(v15, 0, v38, 0);
    sub_1011B290(v39);
    v16 = sub_1026A890((unsigned int *)(this + 68));
    v17 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v16 + 576))(v16);
    sub_1011B2A0(v39, v38, v17);
    v18 = (float *)sub_10019640(*(_DWORD **)(this + 4));
    v19 = sub_1011B2E0(v39, v18);
    v20 = *(_DWORD **)(this + 4);
    v60 = v19;
    v21 = (float *)sub_10019640(v20);
    v22 = (float *)(*(int (__thiscall **)(_DWORD *))(*v20 + 576))(v20);
    v23 = *v22 - *v21;
    v51 = -1;
    v45 = v23;
    v46 = v22[1] - v21[1];
    v24 = v22[2] - v21[2];
    v25 = 0;
    v47 = v24;
    v52 = 3.4028235e38;
    if ( (int)v59[3] <= 0 )
      return 0;
    do
    {
      v26 = *(char **)(*v59 + 8 * v25);
      if ( !v26 )
        v26 = (char *)String;
      v27 = sub_100BDF40(*(_DWORD *)(this + 4), v26);
      v28 = v27;
      if ( v27 != -1 )
      {
        if ( sub_1029F780((_DWORD *)this, v27, &v56, v40) )
        {
          *(float *)v41 = v56 + v45;
          *(float *)&v41[1] = v57 + v46;
          *(float *)&v41[2] = v58 + v47;
          if ( !sub_102A22E0((_DWORD *)v44, (float *)v41, v43) )
          {
            v29 = (float *)sub_10019640(*(_DWORD **)(this + 4));
            v30 = v57 - v29[1];
            v31 = v30 * v30;
            v32 = v56 - *v29;
            v33 = v31;
            v34 = v58 - v29[2];
            v35 = v32 * v32 + v33 + v34 * v34;
            v42 = v35;
            if ( v35 <= 90000.0 )
            {
              v36 = sub_1011B2E0(v39, &v56);
              if ( v36 == v60 && v42 < (double)v52 )
              {
                v52 = v42;
                v51 = v28;
                v48 = v56;
                v49 = v57;
                v50 = v58;
                v53 = SLODWORD(v40[0]);
                v54 = v40[1];
                v55 = v40[2];
              }
            }
          }
        }
      }
      ++v25;
    }
    while ( v25 < v59[3] );
    if ( v51 == -1 )
      return 0;
    if ( a2 )
      *a2 = v51;
    if ( a3 )
    {
      *a3 = v48;
      a3[1] = v49;
      a3[2] = v50;
    }
    if ( a4 )
    {
      *a4 = *(float *)&v53;
      a4[1] = v54;
      a4[2] = v55;
    }
  }
  return 1;
}
