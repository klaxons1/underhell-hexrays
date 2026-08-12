void __thiscall sub_10092750(int this)
{
  char v2; // bl
  char v3; // dl
  double v4; // st4
  double v5; // st3
  double v6; // st4
  double v7; // st3
  double v8; // st2
  double v9; // st1
  double v10; // st3
  int v11; // ecx
  double v12; // st2
  double v13; // st2
  double v14; // st1
  double v15; // st1
  double v16; // st1
  double v17; // rt0
  double v18; // st5
  double v19; // rt1
  double v20; // st2
  double v21; // st4
  double v22; // st7
  double v23; // st6
  double v24; // rt0
  double v25; // st3
  double v26; // st7
  double v27; // rt1
  double v28; // st2
  double v29; // st7
  double v30; // st5
  double v31; // rt0
  double v32; // st3
  bool v33; // c3
  double v34; // st6
  int v35; // eax
  int v36; // ecx
  double v37; // st4
  double v38; // st5
  double v39; // st4
  double v40; // st3
  double v41; // st5
  double v42; // st7
  char v43; // [esp+Dh] [ebp-3h]
  char v44; // [esp+Fh] [ebp-1h]

  v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 89);
  v44 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 91);
  v43 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 88);
  v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 90);
  v4 = 0.0;
  if ( v2 )
  {
    if ( *(float *)(this + 472) > 0.0 )
      *(float *)(this + 472) = 0.0;
    v5 = *(float *)(this + 472) - 0.050000001;
    if ( v5 <= -3.0 )
      v5 = -3.0;
    *(float *)(this + 472) = v5;
  }
  else if ( v44 )
  {
    if ( *(float *)(this + 472) < 0.0 )
      *(float *)(this + 472) = 0.0;
    v6 = *(float *)(this + 472) + 0.050000001;
    if ( v6 >= 3.0 )
      v6 = 3.0;
    *(float *)(this + 472) = v6;
    v4 = 0.0;
  }
  v7 = 0.1;
  v8 = 0.0;
  v9 = -100.0;
  if ( v4 != *(float *)(this + 472) )
  {
    if ( *(_BYTE *)(this + 468) )
    {
      v10 = 0.0;
      v11 = *(_DWORD *)(*(_DWORD *)(this + 440) + 280);
      v12 = *(float *)(this + 472) + *(float *)(v11 + 32);
      if ( v12 <= 100.0 )
      {
        if ( v12 < -100.0 )
          v12 = -100.0;
        *(float *)(v11 + 32) = v12;
        v13 = 0.1;
      }
      else
      {
        *(float *)(v11 + 32) = 100.0;
        v13 = 0.1;
      }
    }
    else
    {
      *(float *)(*(_DWORD *)(*(_DWORD *)(this + 440) + 280) + 20) = (double)(unsigned __int16)(int)((*(float *)(*(_DWORD *)(*(_DWORD *)(this + 440) + 280) + 20) + *(float *)(this + 472))
                                                                                                  * 182.04445)
                                                                  * 0.0054931641;
      v13 = 0.1;
      v10 = 0.0;
    }
    if ( v2 || v44 )
      goto LABEL_29;
    v14 = *(float *)(this + 472);
    if ( v14 <= 0.0 )
    {
      v15 = v14 + v13;
      if ( v15 > v10 )
LABEL_27:
        v15 = v10;
    }
    else
    {
      v15 = v14 - v13;
      if ( v15 < v10 )
        goto LABEL_27;
    }
    *(float *)(this + 472) = v15;
LABEL_29:
    v4 = 0.0;
    v16 = v10;
    v7 = v13;
    v17 = v16;
    v9 = -100.0;
    v8 = v17;
  }
  if ( v43 )
  {
    v18 = v9;
    v19 = v8;
    v20 = v4;
    v21 = v19;
    if ( v20 < *(float *)(this + 476) )
      *(float *)(this + 476) = v20;
    v22 = *(float *)(this + 476) - 0.050000001;
    v23 = v20;
    if ( v22 <= -3.0 )
      v22 = -3.0;
    v24 = v7;
    v25 = v22;
    v26 = v24;
    *(float *)(this + 476) = v25;
  }
  else
  {
    if ( v3 )
    {
      v27 = v8;
      v28 = v4;
      v21 = v27;
      if ( v28 > *(float *)(this + 476) )
        *(float *)(this + 476) = v28;
      v29 = *(float *)(this + 476) + 0.050000001;
      v30 = v28;
      if ( v29 >= 3.0 )
        v29 = 3.0;
      v31 = v7;
      v32 = v29;
      v26 = v31;
      *(float *)(this + 476) = v32;
    }
    else
    {
      v30 = v4;
      v21 = v8;
      v26 = v7;
    }
    v23 = v30;
    v18 = v9;
  }
  v33 = *(float *)(this + 476) == v23;
  v34 = v21;
  if ( v33 )
    return;
  v35 = *(_DWORD *)(this + 440);
  v36 = *(_DWORD *)(v35 + 280);
  if ( *(_BYTE *)(this + 468) )
  {
    v37 = *(float *)(v36 + 36) + *(float *)(this + 476);
    if ( v37 <= 300.0 )
    {
      if ( v37 < v18 )
      {
        *(float *)(v36 + 36) = v18;
        goto LABEL_54;
      }
    }
    else
    {
      v37 = 300.0;
    }
    *(float *)(v36 + 36) = v37;
  }
  else
  {
    v38 = *(float *)(v35 + 272) * 0.75;
    v39 = *(float *)(v35 + 272) * 1.5;
    v40 = *(float *)(v36 + 28) + *(float *)(this + 476);
    if ( v40 > v39 || (v39 = v40, v40 >= v38) )
      v38 = v39;
    *(float *)(v36 + 28) = v38;
  }
LABEL_54:
  if ( !v43 && !v3 )
  {
    v41 = *(float *)(this + 476);
    if ( v41 <= 0.0 )
    {
      v42 = v26 + v41;
      if ( v34 >= v42 )
        goto LABEL_58;
    }
    else
    {
      v42 = v41 - v26;
      if ( v34 <= v42 )
      {
LABEL_58:
        *(float *)(this + 476) = v42;
        return;
      }
    }
    *(float *)(this + 476) = v34;
  }
}
