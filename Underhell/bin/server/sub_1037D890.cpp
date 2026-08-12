void __usercall sub_1037D890(int a1@<ecx>, int a2@<esi>)
{
  _DWORD *v3; // esi
  const char *v4; // eax
  int v5; // eax
  int (__thiscall *v6)(_DWORD *, int *); // edx
  float *v7; // eax
  float *v8; // eax
  int (__thiscall *v9)(_DWORD *, int *); // edx
  float *v10; // eax
  int (__thiscall *v11)(_DWORD *, int *); // edx
  float *v12; // eax
  bool v13; // zf
  float *v14; // ebx
  float *v15; // eax
  float *v16; // eax
  float *v17; // ebx
  float *v18; // eax
  _DWORD *v19; // esi
  _DWORD *v20; // eax
  double v21; // st7
  double v22; // st7
  int v23; // eax
  int v24; // eax
  _DWORD *v25; // eax
  int v26; // edx
  _DWORD *v27; // ecx
  int (__thiscall *v28)(_DWORD *); // eax
  double v29; // st7
  int *v30; // eax
  int v31; // edx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  _DWORD *v35; // eax
  int v36; // edx
  _DWORD *v37; // ecx
  int (__thiscall *v38)(_DWORD *); // eax
  double v39; // st7
  int *v40; // eax
  int v41; // edx
  int v42; // eax
  int v43; // esi
  float v44; // [esp+2Ch] [ebp-40h]
  int v45; // [esp+38h] [ebp-34h] BYREF
  float v46; // [esp+3Ch] [ebp-30h]
  float v47; // [esp+40h] [ebp-2Ch]
  int v48; // [esp+44h] [ebp-28h] BYREF
  double v49; // [esp+48h] [ebp-24h] BYREF
  float v50; // [esp+50h] [ebp-1Ch] BYREF
  float v51; // [esp+54h] [ebp-18h]
  int v52; // [esp+58h] [ebp-14h] BYREF
  float v53; // [esp+5Ch] [ebp-10h] BYREF
  float v54; // [esp+60h] [ebp-Ch]
  float v55; // [esp+64h] [ebp-8h]
  float v56; // [esp+68h] [ebp-4h] BYREF
  int savedregs; // [esp+6Ch] [ebp+0h] BYREF

  sub_103761E0(a1, (int)&savedregs, a1, a2);
  sub_103760C0(a1);
  sub_10093FD0((int *)a1);
  sub_10023E00((char *)a1, 81);
  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(a1 + 4240) <= -0.001
    || !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1)
    || !sub_10023D10((_DWORD *)a1, 10) )
  {
    goto LABEL_36;
  }
  v3 = (_DWORD *)sub_10372210((void *)a1);
  if ( v3 )
  {
    v4 = (const char *)dword_106E8508;
    if ( !dword_106E8508 )
      v4 = String;
    v5 = sub_101679A0((int)v4);
    if ( sub_10167A30(v5) <= 0 )
    {
      v6 = *(int (__thiscall **)(_DWORD *, int *))(*v3 + 536);
      v55 = *(float *)(dword_106E8F94 + 44);
      v7 = (float *)v6(v3, &v45);
      *(float *)&v49 = v55 * *v7;
      *((float *)&v49 + 1) = v55 * v7[1];
      v8 = (float *)sub_10019640(v3);
      v50 = *(float *)&v49 + *v8;
      v9 = *(int (__thiscall **)(_DWORD *, int *))(*v3 + 536);
      v51 = v8[1] + *((float *)&v49 + 1);
      v10 = (float *)v9(v3, &v45);
      if ( v10[1] * v10[1] + *v10 * *v10 + v10[2] * v10[2] <= 40000.0 )
      {
        if ( *(_DWORD *)(dword_106E906C + 48) )
        {
          v34 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 504))(a1, &v45);
          sub_1011C120(v34, 100.0, 0, 255, 0, 1, 0.1);
        }
        goto LABEL_30;
      }
      v11 = *(int (__thiscall **)(_DWORD *, int *))(*v3 + 536);
      v56 = 0.0;
      v12 = (float *)v11(v3, &v45);
      *(float *)&v49 = *v12;
      v13 = *(_DWORD *)(dword_106E906C + 48) == 0;
      *((float *)&v49 + 1) = v12[1];
      if ( !v13 )
      {
        v14 = (float *)(*(int (__thiscall **)(_DWORD *, int *))(*v3 + 536))(v3, &v45);
        v15 = (float *)sub_10019640(v3);
        *(float *)&v52 = *v15 + *v14;
        v53 = v14[1] + v15[1];
        v54 = v14[2] + v15[2];
        v16 = (float *)sub_10019640(v3);
        sub_1011BC50(v16, (float *)&v52, 255, 255, 255, 1, 0.1);
      }
      sub_100196B0((float *)&v49);
      v17 = (float *)sub_10019640(v3);
      v18 = (float *)sub_10019640((_DWORD *)a1);
      v53 = *v18 - *v17;
      v54 = v18[1] - v17[1];
      sub_100196B0(&v53);
      if ( v54 * *((float *)&v49 + 1) + v53 * *(float *)&v49 <= *(float *)(dword_106E9024 + 44)
        || (v49 = *(float *)(dword_106E8FDC + 44) * 0.5,
            v19 = sub_10019640(v3),
            v20 = sub_10019640((_DWORD *)a1),
            v21 = sub_10424860(v20, v19, &v50, &v56),
            v49 * v49 <= v21) )
      {
        v22 = v56;
      }
      else
      {
        v22 = v56;
        if ( v56 > 0.0 && v22 < 1.0 )
        {
          if ( fabs(v55 - *(float *)(dword_106E8F94 + 44)) < 0.05
            || (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 3) )
          {
            sub_10023CB0((char *)a1, 81);
          }
          else if ( *(_DWORD *)(dword_106E906C + 48) )
          {
            v23 = sub_1001F3C0((_DWORD *)a1);
            Msg("Hunter %d failing dodge (ignore)\n", v23);
          }
          if ( *(_DWORD *)(dword_106E906C + 48) )
          {
            v24 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 504))(a1, &v45);
            sub_1011C120(v24, 100.0, 255, 255, 255, 1, 0.1);
            if ( *(float *)(dword_106B31C8 + 12) != flt_106E9678 )
            {
              flt_106E9678 = *(float *)(dword_106B31C8 + 12);
              v25 = (_DWORD *)sub_10261B20();
              v26 = *v25;
              v55 = v50;
              v27 = v25;
              v28 = *(int (__thiscall **)(_DWORD *))(v26 + 576);
              v54 = v51;
              v29 = *(float *)(v28(v27) + 8) - 24.0;
              *(float *)&v48 = v55;
              *(float *)&v49 = v54;
              *((float *)&v49 + 1) = v29;
              v30 = (int *)sub_10261B20();
              v31 = *v30;
              v54 = *(float *)(dword_106E8FDC + 44);
              v32 = (*(int (__thiscall **)(int *))(v31 + 576))(v30);
              v45 = *(int *)v32;
              v46 = *(float *)(v32 + 4);
              v47 = *(float *)(v32 + 8) - 24.0;
              sub_1011C3A0((float *)&v45, (float *)&v48, v54, 255, 0, 0, 64, 1, 0.1);
            }
          }
LABEL_30:
          if ( *(_DWORD *)(dword_106E906C + 48) && *(float *)(dword_106B31C8 + 12) != flt_106E9678 )
          {
            flt_106E9678 = *(float *)(dword_106B31C8 + 12);
            v35 = (_DWORD *)sub_10261B20();
            v36 = *v35;
            v54 = v50;
            v37 = v35;
            v38 = *(int (__thiscall **)(_DWORD *))(v36 + 576);
            v55 = v51;
            v39 = *(float *)(v38(v37) + 8) - 24.0;
            *(float *)&v45 = v54;
            v46 = v55;
            v47 = v39;
            v40 = (int *)sub_10261B20();
            v41 = *v40;
            v54 = *(float *)(dword_106E8FDC + 44);
            v42 = (*(int (__thiscall **)(int *))(v41 + 576))(v40);
            v48 = *(int *)v42;
            *(float *)&v49 = *(float *)(v42 + 4);
            *((float *)&v49 + 1) = *(float *)(v42 + 8) - 24.0;
            sub_1011C3A0((float *)&v48, (float *)&v45, v54, 127, 127, 127, 64, 1, 0.1);
          }
          goto LABEL_33;
        }
      }
      if ( *(_DWORD *)(dword_106E906C + 48) )
      {
        v44 = 0.1;
        v33 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)a1 + 504))(a1, &v45);
        if ( v22 > 0.0 )
          sub_1011C120(v33, 100.0, 0, 255, 255, 1, v44);
        else
          sub_1011C120(v33, 100.0, 0, 0, 255, 1, v44);
      }
      goto LABEL_30;
    }
  }
LABEL_33:
  v43 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
  if ( (*(_DWORD *)(v43 + 252) & 0x800) != 0 )
    sub_100DAE60(v43);
  *(float *)(a1 + 4252) = *(float *)(v43 + 580);
  *(float *)(a1 + 4256) = *(float *)(v43 + 584);
  *(float *)(a1 + 4260) = *(float *)(v43 + 588);
LABEL_36:
  if ( sub_10023D10((_DWORD *)a1, 13) )
  {
    *(float *)(a1 + 4600) = -1.0;
  }
  else if ( -1.0 == *(float *)(a1 + 4600) )
  {
    *(float *)(a1 + 4600) = *(float *)(dword_106B31C8 + 12);
    sub_1037B830(a1);
    return;
  }
  sub_1037B830(a1);
}
