int __usercall sub_100178A0@<eax>(
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
        __int16 a15,
        float *a16,
        float a17,
        float a18)
{
  int result; // eax
  int v19; // edi
  int v20; // ecx
  int v21; // eax
  double v22; // st7
  double v23; // st6
  double v24; // st6
  double v25; // st5
  long double v26; // st6
  long double v27; // st5
  long double v28; // rtt
  double v29; // st5
  long double v30; // st7
  double v31; // st5
  int v32; // ebx
  double v33; // st7
  int v34; // esi
  float v35; // esi
  double v36; // st7
  double v37; // st5
  double v38; // st4
  double v39; // st4
  double v40; // st6
  double v41; // st4
  double v42; // st3
  double v43; // st2
  double v44; // rt2
  double v45; // st2
  double v46; // st6
  float *v47; // eax
  double v48; // st7
  float *v49; // eax
  double v50; // st7
  double v51; // st6
  double v52; // rt0
  double v53; // st5
  double v54; // st6
  int v55; // esi
  float v56; // [esp+Ch] [ebp-2B0h]
  float v57; // [esp+14h] [ebp-2A8h]
  void **v58; // [esp+1Ch] [ebp-2A0h] BYREF
  char v59[208]; // [esp+28h] [ebp-294h] BYREF
  int v60; // [esp+F8h] [ebp-1C4h]
  int v61; // [esp+1C0h] [ebp-FCh]
  int v62; // [esp+248h] [ebp-74h]
  float v63; // [esp+24Ch] [ebp-70h]
  int v64; // [esp+250h] [ebp-6Ch]
  float *v65; // [esp+254h] [ebp-68h]
  float v66[3]; // [esp+258h] [ebp-64h] BYREF
  float v67; // [esp+264h] [ebp-58h]
  int v68; // [esp+268h] [ebp-54h]
  float *v69; // [esp+26Ch] [ebp-50h]
  int v70; // [esp+270h] [ebp-4Ch]
  int v71; // [esp+274h] [ebp-48h]
  float v72; // [esp+278h] [ebp-44h]
  float v73; // [esp+27Ch] [ebp-40h] BYREF
  float v74; // [esp+280h] [ebp-3Ch]
  float v75; // [esp+284h] [ebp-38h]
  float v76; // [esp+288h] [ebp-34h]
  float v77; // [esp+28Ch] [ebp-30h]
  float v78; // [esp+290h] [ebp-2Ch]
  float v79; // [esp+294h] [ebp-28h]
  float v80; // [esp+298h] [ebp-24h]
  float v81; // [esp+29Ch] [ebp-20h]
  float v82; // [esp+2A0h] [ebp-1Ch] BYREF
  float v83; // [esp+2A4h] [ebp-18h]
  float v84; // [esp+2A8h] [ebp-14h]
  float v85; // [esp+2ACh] [ebp-10h]
  float v86; // [esp+2B0h] [ebp-Ch] BYREF
  float v87; // [esp+2B4h] [ebp-8h]
  float v88; // [esp+2B8h] [ebp-4h]
  float v89; // [esp+2D0h] [ebp+14h]
  float v90; // [esp+2E8h] [ebp+2Ch]

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
                &unk_10403218);
        if ( v21 )
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v21 + 12))(v21, LODWORD(a18));
      }
      v57 = a8[1] * a8[1] + *a8 * *a8 + a8[2] * a8[2];
      v22 = off_103EDFE0(v57);
      v23 = a10;
      if ( a9 > (double)a10 )
        v23 = a9;
      v24 = v23 * 0.5 * 1.414;
      if ( 1.0 / (double)(a14 - 1) * v22 >= v24 )
      {
        v26 = 1.0;
      }
      else
      {
        v25 = v22 / v24;
        v26 = 1.0;
        v19 = (int)v25 + 1;
        a14 = v19;
        if ( v19 < 2 )
        {
          v19 = 2;
          a14 = 2;
        }
      }
      if ( v19 > a2 )
      {
        v19 = a2;
        a14 = a2;
      }
      v27 = v26 / (double)(v19 - 1);
      v84 = v27;
      v28 = v27;
      v29 = v22;
      v30 = v28;
      v31 = v29 * 0.01;
      v83 = v31;
      if ( (a15 & 0x200) == 0 )
        v30 = v30 * v31;
      v72 = v30;
      v85 = fmod(a12 * a13, v26);
      v71 = a15 & 0x10;
      if ( (a15 & 0x10) != 0 )
      {
        if ( v19 < 16 )
        {
          v19 = 16;
          v84 = 0.06666667;
          a14 = 16;
        }
        v90 = a11 * 100.0;
        v83 = (double)a14 * 0.1;
      }
      else
      {
        v90 = v83 * a11;
      }
      v32 = 0;
      v70 = (int)((double)(a2 - 1) * v84 * 65536.0);
      v89 = 1.0;
      v64 = a15 & 0x40;
      if ( (a15 & 0x40) != 0 )
        v89 = 0.0;
      v56 = a8[2] * a8[2] + *a8 * *a8 + a8[1] * a8[1];
      v33 = a17 / off_103EDFE0(v56);
      if ( v33 <= 1.0 )
      {
        if ( v33 < 0.000001 )
          v33 = 0.000001;
      }
      else
      {
        v33 = 1.0;
      }
      v87 = v33;
      sub_10016EC0(a8, v66);
      v34 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C970 + 380))(dword_1047C970);
      v68 = v34;
      if ( v34 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v34 + 8))(v34);
      v58 = &CBeamSegDraw::`vftable';
      sub_10016C20((int)v59);
      v62 = 0;
      sub_10233F90(v34, v19, 0, 0, 0);
      v35 = 0.0;
      v88 = 0.0;
      if ( v19 > 0 )
      {
        do
        {
          v36 = 2.0;
          v81 = 1.0;
          v37 = (double)SLODWORD(v88) * v84;
          v63 = v37;
          if ( v64 )
          {
            if ( (a15 & 0x80u) == 0 )
            {
              v39 = v37 / v87;
              v89 = v39;
            }
            else
            {
              v38 = v37 / v87;
              if ( v37 >= 0.5 )
                v39 = (1.0 - v38) * 2.0;
              else
                v39 = v38 * 2.0;
              v89 = v39;
            }
          }
          else if ( (a15 & 0x80u) == 0 )
          {
            v39 = v89;
          }
          else
          {
            v39 = 1.0 - v37 / v87;
            v89 = v39;
          }
          if ( v39 >= 0.0 )
          {
            if ( v39 <= 1.0 )
            {
              v40 = 0.0;
            }
            else
            {
              v39 = 1.0;
              v40 = 0.0;
              v89 = 1.0;
            }
          }
          else
          {
            v40 = 0.0;
            v39 = 0.0;
            v89 = 0.0;
          }
          v76 = *a16 * v39;
          v77 = a16[1] * v39;
          v78 = v39 * a16[2];
          v41 = *a8 * v37 + *a7;
          v73 = v41;
          v42 = a8[1] * v37 + a7[1];
          v74 = v42;
          v43 = a8[2] * v37 + a7[2];
          v75 = v43;
          if ( v90 == v40 )
          {
            v51 = v37;
          }
          else
          {
            v44 = v43;
            v45 = v90 * *(float *)(a3 + 4 * (v32 >> 16));
            v46 = v44;
            v88 = v45;
            if ( v71 )
            {
              v65 = &v86;
              v69 = &v82;
              v67 = v37 * 3.141592653589793 * v83 + a12;
              v86 = cos(v67);
              v82 = sin(v67);
              v47 = (float *)sub_10142300();
              v48 = v82 * v88;
              v73 = *v47 * v48 + v73;
              v74 = v47[1] * v48 + v74;
              v75 = v48 * v47[2] + v75;
              v49 = (float *)sub_101422F0();
              v50 = v86 * v88;
              v73 = v50 * *v49 + v73;
              v74 = v49[1] * v50 + v74;
              v75 = v50 * v49[2] + v75;
              v36 = 2.0;
              v51 = v63;
            }
            else
            {
              v73 = v41 + v66[0] * v45;
              v74 = v42 + v66[1] * v45;
              v52 = v37;
              v53 = v46 + v45 * v66[2];
              v51 = v52;
              v75 = v53;
            }
          }
          if ( a9 == a10 )
            v54 = a9;
          else
            v54 = v51 * (a10 - a9) + a9;
          v80 = v36 * v54;
          v79 = v85;
          sub_10234090(&v73);
          v32 += v70;
          ++LODWORD(v35);
          v88 = v35;
          v85 = v85 + v72;
        }
        while ( SLODWORD(v35) < v19 );
      }
      result = sub_10233EF0(&v58);
      if ( v61 )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v61 + 8))(v61);
        if ( (_BYTE)result )
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v61 + 16))(v61);
      }
      if ( v60 )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v60 + 8))(v60);
        if ( (_BYTE)result )
          result = (*(int (__thiscall **)(int))(*(_DWORD *)v60 + 16))(v60);
      }
      v55 = v68;
      if ( v68 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v68 + 12))(v68);
        return (*(int (__thiscall **)(int))(*(_DWORD *)v55 + 4))(v55);
      }
    }
  }
  return result;
}
