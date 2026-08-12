void __userpurge sub_103B1AB0(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int *a4, float a5)
{
  unsigned int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  float *v11; // eax
  double v12; // st7
  double v13; // st6
  unsigned int v14; // eax
  BOOL v15; // eax
  unsigned int v16; // eax
  int *v17; // ebx
  int **v18; // ecx
  _DWORD *v19; // eax
  double v20; // st7
  double v21; // st7
  bool v22; // cl
  int v23; // eax
  double v24; // st7
  int v25; // edx
  float *v26; // eax
  double v27; // st7
  double v28; // st4
  double v29; // st5
  double v30; // st4
  double v31; // rt2
  double v32; // st4
  double v33; // st7
  double v34; // st4
  int v35; // eax
  int (__thiscall *v36)(int); // edx
  int v37; // eax
  _DWORD *v38; // eax
  float v39; // [esp+3Ch] [ebp-54h]
  float v40; // [esp+44h] [ebp-4Ch]
  float v41; // [esp+44h] [ebp-4Ch]
  float v42; // [esp+48h] [ebp-48h]
  float v43; // [esp+48h] [ebp-48h]
  float v44; // [esp+48h] [ebp-48h]
  float v45; // [esp+48h] [ebp-48h]
  float v46; // [esp+48h] [ebp-48h]
  _BYTE v49[12]; // [esp+58h] [ebp-38h] BYREF
  int v50[3]; // [esp+64h] [ebp-2Ch] BYREF
  float v51; // [esp+70h] [ebp-20h]
  float v52; // [esp+74h] [ebp-1Ch]
  float v53; // [esp+78h] [ebp-18h]
  float v54; // [esp+7Ch] [ebp-14h] BYREF
  float v55; // [esp+80h] [ebp-10h]
  float v56; // [esp+84h] [ebp-Ch]
  double v57; // [esp+88h] [ebp-8h]
  int v58; // [esp+98h] [ebp+8h]
  int v59; // [esp+9Ch] [ebp+Ch]
  float v60; // [esp+9Ch] [ebp+Ch]
  float v61; // [esp+9Ch] [ebp+Ch]

  if ( *(_BYTE *)(a1 + 4) && (dword_1069042C & 1) == 0 )
  {
    if ( sub_103B1330(a1, (int)a4) )
    {
      v7 = *(_DWORD *)(a1 + 28);
      if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 28) & 0xFFF) + 2] != v7 >> 12 )
        v8 = 0;
      else
        v8 = off_1061BE18[4 * (*(_DWORD *)(a1 + 28) & 0xFFF) + 1];
      v9 = (*(int (__thiscall **)(int *))(*a4 + 24))(a4);
      v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 368))(v9);
      sub_103B1780(a1, (int)a4, v10, 0);
      if ( *(_DWORD *)(a1 + 8) == 1 )
      {
        if ( v8 )
        {
          v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 576))(v8);
          *(float *)(a1 + 64) = *v11;
          *(float *)(a1 + 68) = v11[1];
          *(float *)(a1 + 72) = v11[2];
        }
        v12 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                0.0,
                0.5)
            + 1.5;
        v13 = *(float *)(dword_106B31C8 + 12);
        *(_BYTE *)(a1 + 56) = 0;
        *(float *)(a1 + 16) = v13 + v12;
        *(float *)(a1 + 60) = v12;
      }
      (*(void (__thiscall **)(int *))(*a4 + 12))(a4);
    }
    v14 = *(_DWORD *)(a1 + 28);
    if ( (v14 == -1
       || off_1061BE18[4 * (*(_DWORD *)(a1 + 28) & 0xFFF) + 2] != v14 >> 12
       || !off_1061BE18[4 * (*(_DWORD *)(a1 + 28) & 0xFFF) + 1])
      && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(a1 + 20) )
    {
      v15 = *(_DWORD *)(a1 + 24) == 0;
      *(_DWORD *)(a1 + 24) = v15;
      if ( v15 )
      {
        sub_103AE860((float *)(a1 + 32), -90.0, 90.0, 360.0, 720.0);
        *(float *)(a1 + 48) = -*(float *)(a1 + 48);
      }
      else
      {
        sub_103AE860((float *)(a1 + 44), -45.0, 45.0, 270.0, 360.0);
        *(float *)(a1 + 36) = -*(float *)(a1 + 36);
      }
      *(float *)(a1 + 20) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                              dword_106B31E4,
                              0.30000001,
                              2.0)
                          + *(float *)(dword_106B31C8 + 12);
    }
    v16 = *(_DWORD *)(a1 + 28);
    if ( v16 == -1
      || (v18 = (int **)&off_1061BE18[4 * (*(_DWORD *)(a1 + 28) & 0xFFF) + 1],
          off_1061BE18[4 * (*(_DWORD *)(a1 + 28) & 0xFFF) + 2] != v16 >> 12) )
    {
      v17 = 0;
    }
    else
    {
      v17 = *v18;
      if ( *v18 )
      {
        v19 = (_DWORD *)(*(int (__thiscall **)(int *))(*a4 + 24))(a4);
        sub_100BCCF0(v19);
        sub_103AF960((float *)a1, (int)a4, v17, 0);
      }
    }
    v42 = *(float *)(a1 + 40) * a5;
    v20 = *(float *)(a1 + 36);
    sub_10424B10(*(float *)(a1 + 36), *(float *)(a1 + 32), v42);
    *(float *)(a1 + 32) = v20;
    v43 = *(float *)(a1 + 52) * a5;
    v21 = *(float *)(a1 + 48);
    sub_10424B10(*(float *)(a1 + 48), *(float *)(a1 + 44), v43);
    *(float *)(a1 + 44) = v21;
    (*(void (__thiscall **)(int *, int, int))(*a4 + 4))(a4, a1 + 32, a1 + 44);
    if ( *(_DWORD *)(a1 + 8) == 1 )
    {
      if ( *(float *)(a1 + 16) < (double)*(float *)(dword_106B31C8 + 12) || !v17 )
      {
        if ( *(_BYTE *)(a1 + 76) )
        {
          *(_DWORD *)(a1 + 28) = -1;
          *(_DWORD *)(a1 + 92) = 0;
          *(_BYTE *)(a1 + 76) = 0;
        }
        v44 = ((double (__thiscall *)(int *))*(_DWORD *)(*a4 + 40))(a4);
        sub_103B1710(a1, (int)a4, (int)v17, v44);
      }
    }
    else if ( sub_103B18B0(a1, (int)v17, a1, (int)a4, (int)v17) )
    {
      v59 = *(_DWORD *)dword_106B31E4;
      v45 = ((double (__thiscall *)(int *))*(_DWORD *)(*a4 + 44))(a4);
      v60 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(v59 + 4))(dword_106B31E4, 0.0, LODWORD(v45));
      v46 = ((double (__thiscall *)(int *))*(_DWORD *)(*a4 + 36))(a4) + v60;
      sub_103B13F0(a1, (int)a4, (int)v17, v46);
    }
    if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(a1 + 12) )
    {
      v22 = *(float *)(a1 + 32) >= 89.0;
      if ( *(float *)(a1 + 32) <= -89.0 )
        v22 = 1;
      if ( *(float *)(a1 + 44) >= 44.0 )
        v22 = 1;
      if ( *(float *)(a1 + 44) <= -44.0 || !v22 )
      {
        if ( v17 )
        {
          v23 = (*(int (__thiscall **)(int *))(*a4 + 24))(a4);
          if ( v17 == (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v23 + 368))(v23) )
          {
            *(float *)&v58 = *(float *)(a1 + 16) - *(float *)(dword_106B31C8 + 12);
            v24 = (*(float *)&v58 - ((double (__thiscall *)(int *, int, int))*(_DWORD *)(*a4 + 32))(a4, a3, a2))
                / *(float *)(a1 + 60);
            v61 = v24;
            if ( v24 < 0.0 )
              v61 = 0.0;
            v25 = *a4;
            HIDWORD(v57) = *v17 + 520;
            v26 = (float *)(*(int (__thiscall **)(int *))(v25 + 24))(a4);
            sub_103AFA80(v26, (float *)v50);
            (*(void (__thiscall **)(int *, float *))HIDWORD(v57))(v17, &v54);
            v51 = *(float *)(a1 + 64) - v54;
            v52 = *(float *)(a1 + 68) - v55;
            v53 = *(float *)(a1 + 72) - v56;
            v27 = off_10689714();
            v28 = v51 * v27 * v61 + v54;
            v54 = v28;
            v29 = v28;
            v30 = v52 * v27 * v61 + v55;
            v55 = v30;
            v31 = v30;
            v32 = v27 * v53 * v61;
            v33 = v31;
            v34 = v32 + v56;
            v56 = v34;
            if ( 0.0 == v61 )
            {
              *(float *)(a1 + 64) = v29;
              *(float *)(a1 + 68) = v33;
              *(float *)(a1 + 72) = v34;
              ++*(_DWORD *)(a1 + 92);
            }
            if ( sub_103AFAE0((_DWORD *)a1) )
            {
              v40 = fabs(*(float *)(a1 + 36) - *(float *)(a1 + 32)) + fabs(*(float *)(a1 + 48) - *(float *)(a1 + 44));
              (*(void (__thiscall **)(int *, float *, _DWORD, float *))*a4)(a4, &v54, LODWORD(v40), &flt_106F1CA8);
              if ( v61 <= 0.5 && !*(_BYTE *)(a1 + 56) )
              {
                *(_BYTE *)(a1 + 56) = 1;
                if ( *(float *)&v58 >= 1.0 )
                  v57 = *(float *)&v58;
                else
                  v57 = 1.0;
                v35 = (*(int (__thiscall **)(int *, _BYTE *))(*v17 + 516))(v17, v49);
                v50[0] = *(int *)v35;
                v50[1] = *(int *)(v35 + 4);
                v36 = *(int (__thiscall **)(int))(*a4 + 24);
                *(float *)&v50[2] = *(float *)(v35 + 8) + 1.0;
                v37 = v36((int)a4);
                v39 = v57;
                sub_1023D4B0(16777224, (float *)v50, 120, v39, v37, 0, 0);
              }
            }
            goto LABEL_57;
          }
          v38 = sub_10019640(v17);
        }
        else
        {
          v38 = 0;
        }
        v41 = fabs(*(float *)(a1 + 36) - *(float *)(a1 + 32)) + fabs(*(float *)(a1 + 48) - *(float *)(a1 + 44));
        (*(void (__thiscall **)(int *, _DWORD *, _DWORD, float *))*a4)(a4, v38, LODWORD(v41), &flt_106F1CA8);
LABEL_57:
        *(float *)(a1 + 12) = 1.0 / ((double (__thiscall *)(int *))*(_DWORD *)(*a4 + 28))(a4)
                            + *(float *)(dword_106B31C8 + 12);
      }
    }
  }
}
