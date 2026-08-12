int __thiscall sub_10224BF0(int this, int a2, float *a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // ebp
  int result; // eax
  double v11; // st6
  double v12; // st5
  double v13; // st7
  int v14; // ecx
  int v15; // eax
  int v16; // ebp
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  float *v20; // edi
  int v21; // ebp
  int v22; // ebp
  float *v23; // esi
  double v24; // st5
  double v25; // st4
  double v26; // st6
  double v27; // st5
  double v28; // st7
  double v29; // st7
  int v30; // eax
  int v31; // eax
  float *v32; // ecx
  int v33; // eax
  int v34; // edi
  int v35; // edx
  int v36; // eax
  double v37; // st6
  double v38; // st5
  float *v39; // edi
  double v40; // st6
  int v41; // ebx
  double v42; // st6
  double v43; // st5
  double v44; // st5
  double v45; // rt0
  double v46; // st6
  double v47; // st7
  double v48; // st5
  double v49; // rtt
  double v50; // st6
  double v51; // st7
  double v52; // st5
  double v53; // rt0
  double v54; // st5
  double v55; // rt2
  double v56; // st5
  int v57; // [esp-8h] [ebp-330h]
  float v58; // [esp+4h] [ebp-324h]
  int v59; // [esp+18h] [ebp-310h]
  int v60; // [esp+1Ch] [ebp-30Ch]
  int v61; // [esp+20h] [ebp-308h]
  char v63; // [esp+28h] [ebp-300h]
  float *v64; // [esp+2Ch] [ebp-2FCh]
  float v65; // [esp+34h] [ebp-2F4h]
  float v66; // [esp+3Ch] [ebp-2ECh]
  float v67; // [esp+40h] [ebp-2E8h]
  float v68; // [esp+44h] [ebp-2E4h]
  float v69; // [esp+48h] [ebp-2E0h]
  float v70; // [esp+4Ch] [ebp-2DCh]
  float v71; // [esp+50h] [ebp-2D8h]
  char v72; // [esp+54h] [ebp-2D4h]
  float v73; // [esp+58h] [ebp-2D0h]
  int v74[12]; // [esp+5Ch] [ebp-2CCh] BYREF
  int v75; // [esp+8Ch] [ebp-29Ch] BYREF
  int v76; // [esp+90h] [ebp-298h]
  float v77[4]; // [esp+94h] [ebp-294h]
  float v78[12]; // [esp+A4h] [ebp-284h]
  int v79; // [esp+D4h] [ebp-254h] BYREF
  int v80; // [esp+D8h] [ebp-250h]
  int v81; // [esp+F4h] [ebp-234h]
  void **v82; // [esp+F8h] [ebp-230h] BYREF
  _BYTE v83[208]; // [esp+104h] [ebp-224h] BYREF
  int v84; // [esp+1D4h] [ebp-154h]
  int v85; // [esp+29Ch] [ebp-8Ch]
  int v86; // [esp+324h] [ebp-4h]

  v9 = sub_101F7960(*(_DWORD *)(a2 + 64));
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 204))(v9);
  if ( !(_BYTE)result )
  {
    if ( !a7 )
      *a3 = 0.0;
    v65 = *(float *)(a2 + 36) * *(float *)(this + 56);
    sub_10222C20(&v79, (_DWORD *)a2);
    v82 = &CBeamSegDraw::`vftable';
    sub_10016C20((int)v83);
    v57 = *(_DWORD *)(this + 44) * (a8 - 1) + 1;
    v86 = 0;
    sub_10233F90(a4, v57, v9, a5, a6);
    sub_10222C80(&v79, a7, (float *)&v75);
    v78[0] = (*a3 + v65) * *(float *)(this + 52);
    sub_10234090(&v75);
    v74[3] = v75;
    v11 = *(float *)&v76;
    v74[4] = v76;
    v74[5] = SLODWORD(v77[0]);
    if ( a7 )
    {
      v14 = ((_BYTE)a7 - 1) & 3;
      v15 = v79 * ((a7 - 1) / 4);
      v16 = v14 + 4 * v15 + 8;
      v17 = v14 + 4 * v15;
      v13 = *(float *)(v80 + 4 * v16);
      v11 = *(float *)(v80 + 4 * v17 + 16);
      v12 = *(float *)(v80 + 4 * v17);
    }
    else
    {
      v12 = *(float *)&v75;
      v13 = v77[0];
    }
    *(float *)v74 = v12;
    *(float *)&v74[1] = v11;
    v60 = 1;
    *(float *)&v74[2] = v13;
    v70 = 1.0 / (double)*(int *)(this + 44);
    if ( a8 > 1 )
    {
      v59 = a7 + 1;
      v63 = -2 - a7;
      v72 = 1 - a7;
      do
      {
        v18 = v60 & 1;
        v19 = 9 * v18;
        v20 = (float *)(&v75 + 9 * v18);
        v21 = 1 - v18;
        v64 = v20;
        sub_10222C80(&v79, v59, v20);
        v22 = 9 * v21;
        v23 = (float *)((char *)&v75 + v22 * 4);
        v24 = v20[2] - v77[v22];
        v25 = v20[1] - *(float *)((char *)&v75 + v22 * 4 + 4);
        v26 = v25 * v25 + v24 * v24;
        v27 = *v20 - *(float *)((char *)&v75 + v22 * 4);
        v58 = v27 * v27 + v26;
        v28 = off_103EDFE0(v58) + *a3;
        *a3 = v28;
        v29 = (v28 + v65) * *(float *)(this + 52);
        v30 = *(_DWORD *)(this + 44);
        v61 = v30;
        v78[v19] = v29;
        if ( v30 > 1 )
        {
          v31 = v81;
          v74[3 * (((_BYTE)v59 + v72) & 3)] = *(int *)v20;
          v32 = (float *)&v74[3 * (((_BYTE)v59 + v72) & 3)];
          v32[1] = v20[1];
          v32[2] = v20[2];
          if ( v59 == *(_DWORD *)(v31 + 40) - 1 )
          {
            v39 = (float *)&v74[3 * (((_BYTE)v59 + v63) & 3)];
            *v39 = *v32;
            v39[1] = v32[1];
            v37 = v32[2];
          }
          else
          {
            v33 = v79 * ((v59 + 1) / 4);
            v34 = ((_BYTE)v59 + 1) & 3;
            v35 = v34 + 4 * v33 + 8;
            v36 = v34 + 4 * v33;
            v37 = *(float *)(v80 + 4 * v35);
            v38 = *(float *)(v80 + 4 * v36 + 16);
            v39 = (float *)&v74[3 * (((_BYTE)v59 + v63) & 3)];
            v32 = (float *)&v74[3 * (((_BYTE)v59 + v72) & 3)];
            *v39 = *(float *)(v80 + 4 * v36);
            v39[1] = v38;
          }
          v39[2] = v37;
          v67 = (v77[v19 + 1] - v77[v22 + 1]) * v70;
          v68 = (v77[v19 + 2] - v77[v22 + 2]) * v70;
          v69 = (v77[v19 + 3] - v77[v22 + 3]) * v70;
          v71 = (v78[v19 + 2] - v78[v22 + 2]) * v70;
          v73 = (v29 - v78[v22]) * v70;
          v40 = v78[v19 + 1];
          v41 = 1;
          v66 = v70 * (v40 - v78[v22 + 1]);
          if ( v61 > 1 )
          {
            while ( 1 )
            {
              v23[3] = v67 + v23[3];
              v23[4] = v23[4] + v68;
              v23[5] = v23[5] + v69;
              if ( v23[3] <= 1.0 )
              {
                v44 = v23[3] >= 0.0 ? v23[3] : 0.0;
                v45 = v44;
                v43 = 0.0;
                v42 = v45;
              }
              else
              {
                v42 = 1.0;
                v43 = 0.0;
              }
              v23[3] = v42;
              v46 = 1.0;
              v47 = v43;
              if ( v23[4] <= 1.0 )
              {
                if ( v43 <= v23[4] )
                  v43 = v23[4];
                v46 = 1.0;
              }
              else
              {
                v43 = 1.0;
              }
              v23[4] = v43;
              if ( v46 >= v23[5] )
              {
                v49 = v46;
                v50 = v47;
                v51 = v49;
                if ( v50 <= v23[5] )
                  v52 = v23[5];
                else
                  v52 = v50;
                v53 = v52;
                v54 = v51;
                v47 = v50;
                v55 = v54;
                v48 = v53;
                v46 = v55;
              }
              else
              {
                v48 = v46;
              }
              v23[5] = v48;
              v56 = v23[8] + v71;
              v23[8] = v56;
              if ( v56 > v46 || (v46 = v56, v56 >= v47) )
                v47 = v46;
              v23[8] = v47;
              v23[6] = v23[6] + v73;
              v23[7] = v23[7] + v66;
              sub_101EF230(
                (float *)&v74[3 * ((-1 - (_BYTE)a7 + (_BYTE)v59) & 3)],
                (float *)&v74[3 * (v60 & 3)],
                v32,
                v39,
                a3[v41 + 1],
                v23);
              sub_10234090(v23);
              if ( ++v41 >= *(_DWORD *)(this + 44) )
                break;
              v32 = (float *)&v74[3 * (((_BYTE)v59 + v72) & 3)];
            }
          }
          v20 = v64;
        }
        sub_10234090(v20);
        ++v59;
        ++v60;
      }
      while ( v60 < a8 );
    }
    result = sub_10233EF0(&v82);
    if ( v85 )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v85 + 8))(v85);
      if ( (_BYTE)result )
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v85 + 16))(v85);
    }
    if ( v84 )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v84 + 8))(v84);
      if ( (_BYTE)result )
        return (*(int (__thiscall **)(int))(*(_DWORD *)v84 + 16))(v84);
    }
  }
  return result;
}
