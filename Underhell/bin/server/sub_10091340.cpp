void __thiscall sub_10091340(int *this, int a2, float *a3, float a4, float a5, float a6, int a7)
{
  double v7; // st7
  float v9; // eax
  int v11; // eax
  int v12; // ecx
  double v13; // st5
  double v14; // rt1
  double v15; // st5
  double v16; // st6
  double v17; // st7
  double v18; // st4
  double v19; // st3
  char v20; // bl
  double v21; // st2
  double v22; // st3
  bool v23; // c0
  bool v24; // c3
  double v25; // st7
  double v26; // st3
  bool v27; // c0
  int v28; // ecx
  int v29; // edx
  int *v30; // edi
  double v31; // st7
  int v32; // ecx
  double v33; // st7
  int v34; // esi
  float v35; // [esp+0h] [ebp-30h]
  float v36; // [esp+0h] [ebp-30h]
  float v37; // [esp+4h] [ebp-2Ch]
  int v38; // [esp+14h] [ebp-1Ch] BYREF
  float v39; // [esp+18h] [ebp-18h]
  float v40[2]; // [esp+1Ch] [ebp-14h] BYREF
  int v41; // [esp+24h] [ebp-Ch]
  int v42; // [esp+28h] [ebp-8h]
  float v43; // [esp+2Ch] [ebp-4h]
  int v44; // [esp+38h] [ebp+8h]
  int v45; // [esp+3Ch] [ebp+Ch]
  float v46; // [esp+40h] [ebp+10h]
  float v47; // [esp+40h] [ebp+10h]
  bool v48; // [esp+4Bh] [ebp+1Bh]

  v7 = 0.0;
  v39 = 0.0;
  v40[0] = 0.0;
  v9 = *a3;
  v40[1] = 0.0;
  v38 = 7;
  v41 = -1;
  v42 = 0;
  switch ( LODWORD(v9) )
  {
    case 0xFFFFFFFC:
      v45 = 1;
      break;
    case 0xFFFFFFFD:
      v45 = 3;
      break;
    case 0xFFFFFFFE:
      v45 = 4;
      break;
    case 0xFFFFFFFF:
      v45 = 2;
      break;
    default:
      v45 = 5;
      break;
  }
  v11 = *(_DWORD *)(a2 + 52);
  if ( v11 )
  {
    v12 = *((_DWORD *)a3 + 7);
    if ( v11 == v12 )
    {
      v39 = 0.0;
      v38 = v45;
      if ( v12 )
        v41 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 8))(v12);
      else
        v41 = -1;
      v42 = 0;
      sub_100908B0(v40, a5, a6);
      sub_100911A0(this + 19, this[22], (int)&v38);
      return;
    }
  }
  v13 = 1.0 - (a4 - a3[9]) / a4;
  if ( v13 <= 0.9 )
  {
    v16 = v13;
    if ( v13 >= 0.1 )
    {
      v37 = (v13 - 0.1) * 1.25 * ((v13 - 0.1) * 1.25);
      v17 = sub_10090930(this, *((_DWORD *)a3 + 7), v37);
      *(float *)&v44 = v17;
      v46 = v13;
      v16 = v46;
      v15 = v17;
      v7 = 0.0;
    }
    else
    {
      v15 = 0.0;
      *(float *)&v44 = 0.0;
    }
  }
  else
  {
    v14 = v13;
    v15 = 1.0;
    v16 = v14;
    *(float *)&v44 = 1.0;
  }
  if ( v15 >= 0.001 )
  {
    if ( v16 >= 0.5 )
      v18 = a6;
    else
      v18 = (v16 + v16) * a6;
    v19 = a3[1] - *(float *)(*this + 716);
    v48 = 0;
    v20 = 0;
    v21 = a3[2] - *(float *)(*this + 720);
    if ( *(_DWORD *)a3 == -3 )
    {
      v22 = v19 * (*(float *)(*((_DWORD *)a3 + 7) + 720) - *(float *)(*this + 720))
          - v21 * (*(float *)(*((_DWORD *)a3 + 7) + 716) - *(float *)(*this + 716));
      v48 = v22 < v7;
      v23 = v22 < v7;
      v24 = v22 == v7;
      v25 = v18;
      if ( !v23 && !v24 )
      {
        v20 = 1;
LABEL_32:
        v28 = *((_DWORD *)a3 + 7);
        v38 = v45;
        v47 = v25 * 0.33333334;
        v43 = v16 * v15;
        v39 = v15;
        if ( v28 )
          v41 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v28 + 8))(v28);
        else
          v41 = -1;
        v42 = 0;
        sub_100908B0(v40, a5, v47);
        v29 = this[22];
        v30 = this + 19;
        sub_100911A0(v30, v29, (int)&v38);
        if ( v20 )
          v31 = v43;
        else
          v31 = *(float *)&v44;
        v32 = *((_DWORD *)a3 + 7);
        v39 = v31;
        v38 = v45;
        if ( v32 )
          v41 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v32 + 8))(v32);
        else
          v41 = -1;
        v42 = 0;
        v35 = a5 - v47;
        sub_100908B0(v40, v35, v47);
        sub_100911A0(v30, v30[3], (int)&v38);
        if ( v48 )
          v33 = v43;
        else
          v33 = *(float *)&v44;
        v34 = *((_DWORD *)a3 + 7);
        v39 = v33;
        v38 = v45;
        if ( v34 )
          v41 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v34 + 8))(v34);
        else
          v41 = -1;
        v42 = 0;
        v36 = v47 + a5;
        sub_100908B0(v40, v36, v47);
        sub_100911A0(v30, v30[3], (int)&v38);
        return;
      }
    }
    else
    {
      if ( a3[4] == flt_106F1CA8 && a3[5] == flt_106F1CAC && a3[6] == flt_106F1CB0 )
      {
        v25 = v18;
        goto LABEL_32;
      }
      v26 = v19 * a3[5] - v21 * a3[4];
      v48 = v26 > v7;
      v27 = v26 < v7;
      v25 = v18;
      if ( v27 )
      {
        v20 = 1;
        goto LABEL_32;
      }
    }
    v20 = 0;
    goto LABEL_32;
  }
}
