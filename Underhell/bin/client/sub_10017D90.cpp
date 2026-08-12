int __usercall sub_10017D90@<eax>(
        int a1@<esi>,
        int a2,
        int a3,
        int a4,
        float a5,
        int a6,
        float *a7,
        float *a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        int a14,
        int a15,
        float *a16,
        float a17,
        float a18)
{
  int result; // eax
  int v19; // ebx
  int v20; // ecx
  int v21; // eax
  double v22; // st7
  int v23; // eax
  int v24; // esi
  double v25; // st7
  int v26; // ebx
  double v27; // st6
  double v28; // st5
  double v29; // st4
  double v30; // st3
  double v31; // rt0
  double v32; // st4
  double v33; // st6
  double v34; // rt1
  double v35; // rt2
  double v36; // st6
  double v37; // st7
  double v38; // rtt
  double v39; // rt0
  double v40; // st7
  double v41; // st7
  double v42; // st7
  bool v43; // c0
  double v44; // st7
  float *v45; // eax
  float *v46; // eax
  double v47; // st6
  double v48; // st7
  double v49; // st7
  float v50; // [esp+3Ch] [ebp-2C8h]
  float v51; // [esp+40h] [ebp-2C4h]
  float v52; // [esp+40h] [ebp-2C4h]
  void **v53; // [esp+50h] [ebp-2B4h] BYREF
  _BYTE v54[208]; // [esp+5Ch] [ebp-2A8h] BYREF
  int v55; // [esp+12Ch] [ebp-1D8h]
  int v56; // [esp+1F4h] [ebp-110h]
  int v57; // [esp+27Ch] [ebp-88h]
  int v58[3]; // [esp+280h] [ebp-84h] BYREF
  int v59[3]; // [esp+28Ch] [ebp-78h] BYREF
  int v60[7]; // [esp+298h] [ebp-6Ch] BYREF
  float v61; // [esp+2B4h] [ebp-50h]
  float v62; // [esp+2B8h] [ebp-4Ch]
  int v63; // [esp+2BCh] [ebp-48h]
  float v64; // [esp+2C0h] [ebp-44h]
  float v65; // [esp+2C4h] [ebp-40h]
  float v66; // [esp+2C8h] [ebp-3Ch]
  float v67; // [esp+2CCh] [ebp-38h]
  float v68; // [esp+2D0h] [ebp-34h]
  int v69; // [esp+2D4h] [ebp-30h]
  int v70; // [esp+2D8h] [ebp-2Ch] BYREF
  int v71; // [esp+2DCh] [ebp-28h]
  int v72; // [esp+2E0h] [ebp-24h]
  float v73; // [esp+2E4h] [ebp-20h]
  float v74; // [esp+2E8h] [ebp-1Ch]
  int v75; // [esp+2ECh] [ebp-18h]
  int v76; // [esp+2F0h] [ebp-14h]
  float v77; // [esp+2F4h] [ebp-10h]
  float v78; // [esp+2F8h] [ebp-Ch]
  int v79; // [esp+2FCh] [ebp-8h]
  float v80; // [esp+300h] [ebp-4h]

  result = sub_10017240(a1, a4, (int)a5, a6);
  if ( result )
  {
    v19 = a14;
    if ( a14 >= 2 )
    {
      v20 = *(_DWORD *)(result + 16);
      if ( v20 )
      {
        v21 = (*(int (__thiscall **)(int, const char *, void *))(*(_DWORD *)v20 + 188))(
                v20,
                "$hdrcolorscale",
                &unk_1040321C);
        if ( v21 )
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v21 + 12))(v21, LODWORD(a18));
      }
      if ( a14 > a2 )
      {
        a14 = a2;
        v19 = a2;
      }
      LODWORD(v77) = v19 - 1;
      v73 = 1.0 / (double)(v19 - 1);
      v51 = a8[1] * a8[1] + *a8 * *a8 + a8[2] * a8[2];
      v64 = off_103EDFE0(v51) * 0.01 * v73;
      *(float *)&v75 = fmod(a12 * a13, 1.0);
      v80 = 1.0;
      v69 = a15 & 0x40;
      if ( (a15 & 0x40) != 0 )
        v80 = 0.0;
      v52 = a8[2] * a8[2] + *a8 * *a8 + a8[1] * a8[1];
      v22 = a17 / off_103EDFE0(v52);
      if ( v22 <= 1.0 )
      {
        if ( v22 < 0.000001 )
          v22 = 0.000001;
      }
      else
      {
        v22 = 1.0;
      }
      v78 = v22;
      sub_10016EC0(a8, (float *)v58);
      v23 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C970 + 380))(dword_1047C970);
      v24 = v23;
      v63 = v23;
      if ( v23 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 8))(v23);
      v53 = &CBeamSegDraw::`vftable';
      sub_10016C20((int)v54);
      v57 = 0;
      sub_10233F90(v24, v19, 0, 0, 0);
      v25 = 0.0;
      v26 = 0;
      v77 = 0.0;
      v74 = 0.0;
      v79 = 0;
      v76 = 0;
      if ( a14 > 0 )
      {
        v27 = 2.0;
        v28 = 1.0;
        while ( 1 )
        {
          v62 = v28;
          v29 = (double)v76 * v73;
          v65 = v29;
          if ( v69 )
          {
            if ( (a15 & 0x80u) == 0 )
            {
              v33 = v29;
              v32 = v29 / v78;
              v80 = v32;
            }
            else
            {
              v30 = v29 / v78;
              if ( v29 >= 0.5 )
              {
                v34 = v29;
                v32 = v27 * (v28 - v30);
                v33 = v34;
              }
              else
              {
                v31 = v29;
                v32 = v27 * v30;
                v33 = v31;
              }
              v80 = v32;
            }
          }
          else
          {
            v33 = v29;
            if ( (a15 & 0x80u) == 0 )
            {
              v32 = v80;
            }
            else
            {
              v32 = v28 - v29 / v78;
              v80 = v32;
            }
          }
          if ( v32 >= v25 )
          {
            if ( v28 >= v32 )
            {
              v39 = v33;
              v36 = v32;
              v37 = v39;
            }
            else
            {
              v38 = v33;
              v36 = v28;
              v37 = v38;
              v80 = v28;
            }
          }
          else
          {
            v35 = v33;
            v36 = v25;
            v37 = v35;
            v80 = v36;
          }
          *(float *)&v60[3] = *a16 * v36;
          *(float *)&v60[4] = a16[1] * v36;
          *(float *)&v60[5] = v36 * a16[2];
          v50 = v37;
          sub_10016FA0((float *)v60, v26, a2, a3, a7, (int)a8, (float *)v58, a14, a12, a11, v50, a15);
          if ( a9 == a10 )
            v40 = a9;
          else
            v40 = a9 + (a10 - a9) * v65;
          v41 = v40 + v40;
          v61 = v41;
          if ( v26 < v79 )
          {
            while ( 1 )
              v41 = v41 * 0.5;
          }
          v60[6] = v75;
          sub_10234090(v60);
          *(float *)&v75 = *(float *)&v75 + v64;
          if ( (double)a14 * 0.5 == (double)v76 )
          {
            v42 = v61 * 0.25;
            v77 = v42;
            v43 = v42 > 1.0;
            v44 = 1.0;
            if ( !v43 )
              goto LABEL_41;
            ++v79;
            v70 = v60[0];
            v71 = v60[1];
            v72 = v60[2];
            v45 = (float *)sub_10135700();
            v66 = *v45 * 32.0;
            v67 = v45[1] * 32.0;
            v68 = 32.0 * v45[2];
            v46 = (float *)sub_10135710();
            v47 = v46[1] * 32.0 + a7[1] + a8[1] + v67;
            v48 = 32.0 * v46[2] + a7[2] + a8[2] + v68;
            *(float *)v59 = *v46 * 32.0 + *a7 + *a8 + v66 - *(float *)&v70;
            *(float *)&v59[1] = v47 - *(float *)&v71;
            *(float *)&v59[2] = v48 - *(float *)&v72;
            v49 = a10;
            v74 = a10;
            if ( v26 < v79 )
            {
              while ( 1 )
                v49 = v49 * 0.5;
            }
          }
          v44 = 1.0;
LABEL_41:
          v76 = ++v26;
          if ( v26 >= a14 )
          {
            v24 = v63;
            break;
          }
          v27 = 2.0;
          v28 = v44;
          v25 = 0.0;
        }
      }
      result = sub_10233EF0(&v53);
      if ( v79 )
        result = sub_10017D90(
                   a2,
                   a3,
                   a4,
                   a5,
                   a6,
                   (int)&v70,
                   (int)v59,
                   v77,
                   v74,
                   a11,
                   a12,
                   a13,
                   a14,
                   a15,
                   (int)a16,
                   a17,
                   a18);
      if ( v56 )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v56 + 8))(v56);
        if ( (_BYTE)result )
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v56 + 16))(v56);
      }
      if ( v55 )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v55 + 8))(v55);
        if ( (_BYTE)result )
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v55 + 16))(v55);
      }
      if ( v24 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v24 + 12))(v24);
        return (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 4))(v24);
      }
    }
  }
  return result;
}
