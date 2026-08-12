int __thiscall sub_10015D90(_DWORD *this, float *a2, float *a3)
{
  float *v4; // eax
  float v5; // ecx
  float v6; // edx
  float v7; // eax
  float *v8; // eax
  float v9; // ecx
  float v10; // edx
  int v11; // eax
  float *v12; // edi
  float *v13; // esi
  double v14; // st6
  int v15; // ecx
  double v16; // st5
  double v17; // st7
  unsigned int v18; // eax
  _DWORD *v19; // ecx
  unsigned int v20; // eax
  float *v21; // eax
  int v22; // eax
  double v23; // st7
  float v24; // ecx
  float v25; // edx
  int result; // eax
  double v27; // st6
  double v28; // st5
  _DWORD *v29; // ecx
  float *v30; // eax
  float *v31; // eax
  float *v32; // eax
  float *v33; // eax
  double v34; // st7
  double v35; // st6
  double v36; // st5
  double v37; // rtt
  double v38; // st5
  double v39; // rt1
  double v40; // st4
  double v41; // rt2
  double v42; // st4
  double v43; // st7
  double v44; // st3
  double v45; // rtt
  double v46; // st3
  double v47; // st6
  double v48; // st2
  double v49; // rt0
  double v50; // st3
  double v51; // st6
  double v52; // rt1
  double v53; // st4
  double v54; // st7
  double v55; // st4
  double v56; // rt2
  double v57; // st4
  double v58; // st7
  double v59; // st3
  double v60; // rtt
  double v61; // st3
  double v62; // st6
  double v63; // rt0
  double v64; // st3
  double v65; // rt1
  double v66; // st4
  double v67; // rt2
  double v68; // st3
  double v69; // rtt
  double v70; // st7
  double v71; // st6
  double v72; // st7
  double v73; // st6
  double v74; // st7
  double v75; // st6
  float v76[3]; // [esp+Ch] [ebp-6Ch] BYREF
  float v77[3]; // [esp+18h] [ebp-60h] BYREF
  float v78[3]; // [esp+24h] [ebp-54h] BYREF
  float v79[3]; // [esp+30h] [ebp-48h] BYREF
  float v80[3]; // [esp+3Ch] [ebp-3Ch] BYREF
  float v81[3]; // [esp+48h] [ebp-30h] BYREF
  float v82; // [esp+54h] [ebp-24h]
  float v83; // [esp+58h] [ebp-20h]
  float v84; // [esp+5Ch] [ebp-1Ch]
  float v85; // [esp+60h] [ebp-18h]
  float v86; // [esp+64h] [ebp-14h]
  float v87; // [esp+68h] [ebp-10h]
  float v88; // [esp+6Ch] [ebp-Ch]
  float v89; // [esp+70h] [ebp-8h]
  float v90; // [esp+74h] [ebp-4h]
  int v91; // [esp+80h] [ebp+8h]

  v4 = (float *)sub_100159D0(this);
  v5 = *v4;
  v6 = v4[1];
  v7 = v4[2];
  v82 = v5;
  v83 = v6;
  v84 = v7;
  v8 = (float *)sub_10015AE0(this);
  v9 = *v8;
  v10 = v8[1];
  v87 = v8[2];
  v11 = this[305] - 1;
  v85 = v9;
  v86 = v10;
  switch ( v11 )
  {
    case 0:
    case 1:
    case 3:
    case 4:
      v12 = a2;
      v13 = a3;
      v14 = 0.0;
      v88 = 0.0;
      v15 = 0;
      v16 = 0.0;
      v91 = 0;
      v89 = 0.0;
      v17 = 0.0;
      v90 = 0.0;
      *v12 = 99999.0;
      v12[1] = 99999.0;
      v12[2] = 99999.0;
      *a3 = -99999.0;
      a3[1] = -99999.0;
      a3[2] = -99999.0;
      if ( (int)this[302] <= 0 )
        goto LABEL_10;
      break;
    default:
      v70 = v85;
      v12 = a2;
      v71 = v82;
      v13 = a3;
      if ( v82 >= (double)v85 )
      {
        v71 = v85;
        v70 = v82;
      }
      *a2 = v71;
      *a3 = v70;
      v72 = v86;
      v73 = v83;
      if ( v83 >= (double)v86 )
      {
        v73 = v86;
        v72 = v83;
      }
      a2[1] = v73;
      a3[1] = v72;
      v74 = v87;
      v75 = v84;
      if ( v84 >= (double)v87 )
      {
        v75 = v87;
        v74 = v84;
      }
      a2[2] = v75;
      a3[2] = v74;
LABEL_10:
      v22 = (*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
      v23 = *v12;
      v24 = *(float *)v22;
      v25 = *(float *)(v22 + 4);
      result = *(int *)(v22 + 8);
      v82 = v24;
      v83 = v25;
      v84 = *(float *)&result;
      *v12 = v23 - v24;
      v27 = v83;
      v12[1] = v12[1] - v83;
      v28 = v84;
      v12[2] = v12[2] - v84;
      *v13 = *v13 - v24;
      v13[1] = v13[1] - v27;
      v13[2] = v13[2] - v28;
      return result;
  }
  while ( 1 )
  {
    v18 = this[v15 + 307];
    if ( v18 != -1 )
    {
      v19 = (_DWORD *)((char *)off_103DCD74 + 16 * (this[v15 + 307] & 0xFFF) + 4);
      v20 = v18 >> 12;
      if ( v19[1] == v20 && *v19 )
      {
        if ( (_DWORD *)*v19 == this )
        {
          v21 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
          *a3 = *v21;
          a3[1] = v21[1];
          a3[2] = v21[2];
          *v12 = *a3;
          v12[1] = a3[1];
          v12[2] = a3[2];
        }
        else
        {
          if ( v19[1] == v20 )
            v29 = (_DWORD *)*v19;
          else
            v29 = 0;
          (*(void (__thiscall **)(_DWORD *, float *, float *))(v29[1] + 84))(v29 + 1, v81, v80);
          v30 = sub_100157F0(v12, v79, v81);
          *v12 = *v30;
          v12[1] = v30[1];
          v12[2] = v30[2];
          v31 = sub_100157F0(v12, v78, v80);
          *v12 = *v31;
          v12[1] = v31[1];
          v12[2] = v31[2];
          v32 = sub_10015850(a3, v77, v81);
          *a3 = *v32;
          a3[1] = v32[1];
          a3[2] = v32[2];
          v33 = sub_10015850(a3, v76, v80);
          *a3 = *v33;
          a3[1] = v33[1];
          a3[2] = v33[2];
        }
        v15 = v91;
        v14 = v88;
        v16 = v90;
        v17 = v89;
        goto LABEL_9;
      }
      v15 = v91;
    }
    if ( !v15 )
      break;
    if ( v15 == 1 )
    {
      v34 = v85;
      v88 = v85;
      v35 = v86;
      v89 = v86;
      v36 = v87;
      goto LABEL_20;
    }
LABEL_21:
    if ( v16 <= v12[2] )
      v40 = v16;
    else
      v40 = v12[2];
    v41 = v40;
    v42 = v17;
    v43 = v41;
    if ( v42 <= v12[1] )
      v44 = v42;
    else
      v44 = v12[1];
    v45 = v44;
    v46 = v14;
    v47 = v45;
    if ( v46 <= *v12 )
      v48 = v46;
    else
      v48 = *v12;
    *v12 = v48;
    v49 = v46;
    v50 = v47;
    v51 = v49;
    v12[1] = v50;
    v52 = v42;
    v53 = v43;
    v54 = v52;
    v12[2] = v53;
    if ( v16 >= a3[2] )
      v55 = v16;
    else
      v55 = a3[2];
    v56 = v55;
    v57 = v54;
    v58 = v56;
    if ( v57 >= a3[1] )
      v59 = v57;
    else
      v59 = a3[1];
    v60 = v59;
    v61 = v51;
    v62 = v60;
    if ( v61 >= *a3 )
    {
      *a3 = v61;
      v67 = v61;
      v68 = v62;
      v14 = v67;
      a3[1] = v68;
      v69 = v57;
      v66 = v58;
      v17 = v69;
    }
    else
    {
      *a3 = *a3;
      v63 = v61;
      v64 = v62;
      v14 = v63;
      a3[1] = v64;
      v65 = v57;
      v66 = v58;
      v17 = v65;
    }
    a3[2] = v66;
LABEL_9:
    v91 = ++v15;
    if ( v15 >= this[302] )
      goto LABEL_10;
  }
  v34 = v82;
  v88 = v82;
  v35 = v83;
  v89 = v83;
  v36 = v84;
LABEL_20:
  v90 = v36;
  v37 = v36;
  v38 = v34;
  v17 = v35;
  v39 = v38;
  v16 = v37;
  v14 = v39;
  goto LABEL_21;
}
