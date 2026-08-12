int __usercall sub_1009FED0@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3@<esi>,
        float *a4,
        float *a5,
        int a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        unsigned __int8 a9)
{
  int result; // eax
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // al
  int v13; // esi
  float *v14; // eax
  double v15; // st6
  double v16; // st7
  int v17; // eax
  int v18; // esi
  double v19; // st7
  double v20; // st6
  double v21; // st5
  double v22; // st7
  double v23; // st7
  double v24; // st6
  double v25; // st5
  double v26; // st4
  double v27; // st7
  char v28; // al
  double v29; // st6
  double v30; // rt0
  int v31; // eax
  int v32; // esi
  double v33; // st7
  double v34; // st6
  double v35; // st5
  double v36; // st4
  double v37; // st7
  double v38; // st7
  double v39; // st7
  double v40; // st6
  double v41; // st5
  double v42; // st4
  double v43; // st7
  char v44; // al
  int v45; // eax
  int v46; // esi
  int v47; // eax
  int i; // ebx
  int v49; // eax
  int v50; // esi
  int v51; // eax
  int v52; // edx
  double v53; // st7
  double (__thiscall *v54)(int, _DWORD, _DWORD); // eax
  double v55; // st7
  double v56; // st6
  double v57; // st5
  double v58; // st7
  int v59; // [esp+BCh] [ebp-60h]
  int v60; // [esp+BCh] [ebp-60h]
  int v61; // [esp+C0h] [ebp-5Ch]
  int v62; // [esp+C0h] [ebp-5Ch]
  int v63; // [esp+C4h] [ebp-58h]
  int v64; // [esp+C8h] [ebp-54h]
  int v65[3]; // [esp+CCh] [ebp-50h] BYREF
  float v66; // [esp+D8h] [ebp-44h] BYREF
  float v67; // [esp+DCh] [ebp-40h]
  float v68; // [esp+E0h] [ebp-3Ch]
  float v69; // [esp+E4h] [ebp-38h] BYREF
  float v70; // [esp+E8h] [ebp-34h]
  float v71; // [esp+ECh] [ebp-30h]
  float v72; // [esp+F0h] [ebp-2Ch]
  float v73; // [esp+F4h] [ebp-28h]
  float v74; // [esp+F8h] [ebp-24h]
  float v75; // [esp+FCh] [ebp-20h] BYREF
  float v76; // [esp+100h] [ebp-1Ch]
  float v77; // [esp+104h] [ebp-18h]
  int v78; // [esp+108h] [ebp-14h]
  int v79; // [esp+10Ch] [ebp-10h]
  int v80; // [esp+110h] [ebp-Ch]
  int v81; // [esp+114h] [ebp-8h]
  float v82; // [esp+118h] [ebp-4h]

  result = sub_1012D5A0();
  if ( !(_BYTE)result )
  {
    v64 = a2;
    (*(void (__thiscall **)(int, float *, float *, int))(*(_DWORD *)dword_1041315C + 4))(dword_1041315C, &v66, a4, 1);
    if ( *((int *)off_103DC81C + 5) <= 1 )
    {
      v12 = a9;
      v11 = a8;
      v10 = a7;
    }
    else
    {
      v66 = 1.0;
      v10 = 96;
      v67 = 1.0;
      v11 = 0;
      v68 = 1.0;
      v12 = 10;
    }
    v63 = a3;
    v72 = (double)v10 * v66 * 0.0039215689;
    v79 = v12;
    v73 = (double)v11 * v67 * 0.0039215689;
    v74 = 0.0039215689 * ((double)v12 * v68);
    result = sub_100DDA40(264);
    v13 = result;
    v80 = result;
    if ( result )
    {
      sub_100F2BA0("bloodgore");
      *(_DWORD *)v13 = &CBloodSprayEmitter::`vftable';
      sub_100F2950(v13);
      sub_100F3060(a4);
      *(float *)(v13 + 260) = 200.0;
      v69 = *a4 + 16.0;
      v70 = a4[1] + 16.0;
      v71 = a4[2] + 16.0;
      *(float *)v65 = *a4 - 16.0;
      *(float *)&v65[1] = a4[1] - 16.0;
      *(float *)&v65[2] = a4[2] - 16.0;
      sub_100EC3F0(v65, &v69, 1);
      if ( !dword_1042E028 )
      {
        sub_100F0920("effects/blood_core");
        dword_1042E028 = sub_100F0950(v61);
      }
      v62 = a1;
      v14 = sub_10042010((float *)v65, -0.5, 0.5);
      v69 = *a5 * *v14;
      v70 = v14[1] * a5[1];
      v71 = v14[2] * a5[2];
      v15 = 2.0 * a5[2] + a4[2];
      v16 = a5[1] * 2.0 + a4[1];
      v75 = *a5 * 2.0 + *a4;
      v76 = v16;
      v77 = v15;
      v17 = sub_100F2B60(60, dword_1042E028, &v75);
      v18 = v17;
      if ( v17 )
      {
        *(float *)(v17 + 44) = 0.0;
        *(float *)(v17 + 40) = ((double (__thiscall *)(int, _DWORD, _DWORD, int, int, int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                 dword_10413198,
                                 0.25,
                                 0.5,
                                 a1,
                                 v63,
                                 a2);
        v19 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                16.0,
                32.0);
        v20 = v69 * v19;
        v21 = v70 * v19;
        v22 = v19 * v71;
        *(float *)(v18 + 24) = v20;
        *(float *)(v18 + 28) = v21;
        *(float *)(v18 + 32) = v22;
        *(float *)(v18 + 32) = *(float *)(v18 + 32)
                             - ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                 dword_10413198,
                                 8.0,
                                 16.0);
        v23 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                0.75,
                2.0);
        v24 = v72 * v23;
        v25 = 1.0;
        if ( v24 <= 1.0 )
          v25 = v24;
        v79 = (int)(v25 * 255.0);
        *(_BYTE *)(v18 + 48) = v79;
        v26 = v73 * v23;
        if ( v26 > 1.0 )
          v26 = 1.0;
        v79 = (int)(v26 * 255.0);
        *(_BYTE *)(v18 + 49) = v79;
        v27 = v23 * v74;
        if ( v27 > 1.0 )
          v27 = 1.0;
        v64 = 4;
        v79 = (int)(v27 * 255.0);
        *(_BYTE *)(v18 + 50) = v79;
        v28 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 2);
        *(_BYTE *)(v18 + 53) = v28;
        *(_BYTE *)(v18 + 54) = 8 * v28;
        *(_WORD *)(v18 + 51) = 255;
        v79 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 360);
        *(float *)(v18 + 36) = (float)v79;
        *(float *)(v18 + 56) = 0.0;
      }
      if ( !dword_1042E02C )
      {
        sub_100F0920("effects/blood_gore");
        dword_1042E02C = sub_100F0950(v59);
      }
      v81 = 1;
      v79 = 4;
      do
      {
        v29 = 2.0 * a5[2] + a4[2];
        v30 = a5[1] * 2.0 + a4[1];
        v75 = *a5 * 2.0 + *a4;
        v76 = v30;
        v77 = v29;
        v31 = sub_100F2B60(60, dword_1042E02C, &v75);
        v32 = v31;
        if ( v31 )
        {
          *(float *)(v31 + 44) = 0.0;
          *(float *)(v31 + 40) = ((double (__thiscall *)(int, _DWORD, _DWORD, int, int, int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                   dword_10413198,
                                   0.5,
                                   0.75,
                                   v62,
                                   v63,
                                   v64);
          v33 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  16.0,
                  32.0);
          v34 = v69 * v33;
          v35 = v70 * v33;
          v36 = (double)v81;
          v82 = v36;
          v37 = v33 * v71 * v36;
          *(float *)(v32 + 24) = v34 * v36;
          *(float *)(v32 + 28) = v35 * v36;
          *(float *)(v32 + 32) = v37;
          v38 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  32.0,
                  64.0);
          *(float *)(v32 + 32) = *(float *)(v32 + 32) - v38 * v82;
          v39 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                  dword_10413198,
                  0.75,
                  2.0);
          v40 = v72 * v39;
          v41 = 1.0;
          if ( v40 <= 1.0 )
            v41 = v40;
          v78 = (int)(v41 * 255.0);
          *(_BYTE *)(v32 + 48) = v78;
          v42 = v73 * v39;
          if ( v42 > 1.0 )
            v42 = 1.0;
          v78 = (int)(v42 * 255.0);
          *(_BYTE *)(v32 + 49) = v78;
          v43 = v39 * v74;
          if ( v43 > 1.0 )
            v43 = 1.0;
          v64 = 4;
          v78 = (int)(v43 * 255.0);
          *(_BYTE *)(v32 + 50) = v78;
          v44 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 2);
          *(_BYTE *)(v32 + 53) = v44;
          *(_BYTE *)(v32 + 54) = 4 * v44;
          *(_WORD *)(v32 + 51) = 255;
          v63 = 360;
          v62 = 0;
          v78 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198);
          *(float *)(v32 + 36) = (float)v78;
          *(float *)(v32 + 56) = 0.0;
        }
        ++v81;
        --v79;
      }
      while ( v79 );
      if ( sub_100DDA40(384) )
      {
        v45 = sub_1017A770("blooddrops");
        v46 = v45;
        v79 = v45;
        if ( v45 )
        {
          sub_100F2950(v45);
          sub_100F3060(a4);
          v47 = *(_DWORD *)v46;
          *(float *)(v46 + 364) = 400.0;
          (*(void (__thiscall **)(int, float *, float *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v47 + 72))(
            v46,
            a4,
            a5,
            1.0,
            10.0,
            100.0,
            400.0,
            0.2,
            0,
            0);
          if ( !dword_1042E030 )
          {
            sub_100F0920("effects/blood_drop");
            dword_1042E030 = sub_100F0950(v60);
          }
          for ( i = 0; i < 8; ++i )
          {
            v75 = *a4;
            v76 = a4[1];
            v77 = a4[2];
            v49 = sub_100F2B60(56, dword_1042E030, &v75);
            v50 = v49;
            if ( !v49 )
              break;
            *(float *)(v49 + 44) = 0.0;
            v78 = sub_10115FB0();
            v69 = (double)v78 * 0.000030518509 + (double)v78 * 0.000030518509 - 1.0;
            v78 = sub_10115FB0();
            v70 = (double)v78 * 0.000030518509 + (double)v78 * 0.000030518509 - 1.0;
            v51 = sub_10115FB0();
            v52 = *(_DWORD *)dword_10413198;
            v78 = v51;
            v53 = (double)v51;
            v54 = *(double (__thiscall **)(int, _DWORD, _DWORD))(v52 + 4);
            v71 = v53 * 0.000030518509 + v53 * 0.000030518509 - 1.0;
            v55 = v54(dword_10413198, 64.0, 128.0);
            v56 = v69 * v55;
            v57 = v70 * v55;
            v58 = v55 * v71;
            *(float *)(v50 + 24) = v56;
            *(float *)(v50 + 28) = v57;
            *(float *)(v50 + 32) = v58;
            *(float *)(v50 + 52) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                     dword_10413198,
                                     0.5,
                                     2.0);
            *(float *)(v50 + 48) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                     dword_10413198,
                                     0.050000001,
                                     0.15000001);
            *(float *)(v50 + 40) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                                     dword_10413198,
                                     0.25,
                                     0.5);
            sub_1009ECE0((_BYTE *)(v50 + 36), v72, v73, v74, 1.0);
          }
          sub_100F2FF0(v79);
        }
      }
      return sub_100F2FF0(v80);
    }
  }
  return result;
}
