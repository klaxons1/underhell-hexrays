int __userpurge sub_10195340@<eax>(_BYTE *a1@<ecx>, int a2@<ebx>, int a3@<esi>, int a4)
{
  int v5; // edx
  int (__thiscall *v6)(_BYTE *, int, int); // eax
  float *v7; // eax
  int (__thiscall *v8)(_BYTE *); // eax
  float *v9; // eax
  double v10; // st7
  double v11; // st6
  double v12; // st5
  int (__thiscall *v13)(_BYTE *); // eax
  __int16 v14; // ax
  double v15; // st7
  int v16; // ebx
  float *v17; // eax
  int v18; // esi
  double (__cdecl *v19)(_DWORD, _DWORD); // eax
  double v20; // st7
  int v21; // edx
  float v23; // [esp+84h] [ebp-E8h]
  float v24; // [esp+84h] [ebp-E8h]
  int v25; // [esp+88h] [ebp-E4h]
  int v26; // [esp+88h] [ebp-E4h]
  float v27; // [esp+8Ch] [ebp-E0h]
  int v28; // [esp+8Ch] [ebp-E0h]
  int v29; // [esp+8Ch] [ebp-E0h]
  float v30; // [esp+90h] [ebp-DCh]
  float v31; // [esp+98h] [ebp-D4h]
  float v32; // [esp+98h] [ebp-D4h]
  float *v33; // [esp+A0h] [ebp-CCh]
  float v34; // [esp+A0h] [ebp-CCh]
  float v35[3]; // [esp+A4h] [ebp-C8h] BYREF
  int v36[3]; // [esp+B0h] [ebp-BCh] BYREF
  int v37; // [esp+BCh] [ebp-B0h] BYREF
  int v38; // [esp+C0h] [ebp-ACh]
  int v39; // [esp+C4h] [ebp-A8h]
  int v40; // [esp+C8h] [ebp-A4h]
  int v41; // [esp+CCh] [ebp-A0h]
  float v42; // [esp+D0h] [ebp-9Ch]
  float v43; // [esp+D4h] [ebp-98h]
  float v44; // [esp+D8h] [ebp-94h]
  float v45; // [esp+DCh] [ebp-90h]
  float v46; // [esp+E0h] [ebp-8Ch]
  float v47; // [esp+E4h] [ebp-88h]
  int v48; // [esp+E8h] [ebp-84h]
  const char *v49; // [esp+ECh] [ebp-80h]
  int v50; // [esp+F0h] [ebp-7Ch]
  int v51; // [esp+F4h] [ebp-78h]
  float v52; // [esp+F8h] [ebp-74h]
  float v53; // [esp+FCh] [ebp-70h]
  float v54; // [esp+100h] [ebp-6Ch]
  float v55; // [esp+104h] [ebp-68h]
  float v56; // [esp+108h] [ebp-64h]
  float v57; // [esp+10Ch] [ebp-60h]
  float v58; // [esp+110h] [ebp-5Ch]
  float v59; // [esp+114h] [ebp-58h]
  int v60; // [esp+118h] [ebp-54h]
  float v61; // [esp+11Ch] [ebp-50h]
  float v62; // [esp+120h] [ebp-4Ch]
  float v63; // [esp+124h] [ebp-48h]
  float v64; // [esp+128h] [ebp-44h]
  char v65; // [esp+12Ch] [ebp-40h]
  int v66; // [esp+130h] [ebp-3Ch]
  int v67; // [esp+134h] [ebp-38h]
  int v68; // [esp+14Ch] [ebp-20h] BYREF
  float v69; // [esp+150h] [ebp-1Ch]
  float v70; // [esp+154h] [ebp-18h]
  float v71; // [esp+158h] [ebp-14h]
  float v72; // [esp+15Ch] [ebp-10h] BYREF
  float v73; // [esp+160h] [ebp-Ch]
  float v74; // [esp+164h] [ebp-8h]
  int v75; // [esp+168h] [ebp-4h]

  if ( a1[3380] )
  {
    if ( *((float *)off_103DC81C + 3) >= (double)*((float *)a1 + 846) )
    {
      v71 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
              dword_10413198,
              4.0,
              6.0);
      if ( 0.0 != *((float *)off_103DC81C + 4) )
      {
        v5 = *((_DWORD *)a1 - 1);
        v66 = -1;
        v48 = -1;
        v50 = -1;
        v6 = *(int (__thiscall **)(_BYTE *, int, int))(v5 + 36);
        v37 = 0;
        v49 = 0;
        v51 = 0;
        v65 = 1;
        v67 = 0;
        v7 = (float *)v6(a1 - 4, a3, a2);
        v42 = *v7;
        v43 = v7[1];
        v44 = v7[2];
        *(float *)&v75 = v71 + v71;
        v31 = v71 * -6.0;
        sub_10042010((float *)&v68, v31, *(float *)&v75);
        v8 = *(int (__thiscall **)(_BYTE *))(*((_DWORD *)a1 - 1) + 36);
        *(float *)&v68 = *(float *)&v75 + *(float *)&v68;
        v69 = *(float *)&v75 + v69;
        v70 = *(float *)&v75 + v70;
        v9 = (float *)v8(a1 - 4);
        v10 = *v9 + *(float *)&v68;
        v11 = v9[1] + v69;
        v12 = v9[2];
        v13 = *(int (__thiscall **)(_BYTE *))(*((_DWORD *)a1 + 1) + 36);
        v45 = v10;
        v46 = v11;
        v47 = v12 + v70;
        v14 = v13(a1 + 4);
        v38 = sub_1007A6A0(off_103DCD78, v14 & 0xFFF);
        v40 = v38;
        v39 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 11);
        v41 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 11);
        if ( v39 == v41 )
          v41 = (v39
               + ((*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198, 0, 1) != 0
                ? 1
                : -1))
              % 11;
        v52 = 0.0;
        v37 = 9;
        v53 = 0.1;
        v49 = "sprites/lgtning.vmt";
        v54 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                2.0,
                4.0);
        v55 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                0.0,
                1.0);
        v56 = 0.0;
        v57 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                16.0,
                32.0);
        v15 = 255.0;
        v60 = 0;
        v58 = 255.0;
        v59 = 0.0;
        v61 = 1.0;
        if ( a1[3389] )
        {
          v62 = 255.0;
          v15 = 64.0;
        }
        else
        {
          if ( a1[3388] )
          {
            v62 = 240.0;
            v63 = 200.0;
            v15 = 80.0;
            goto LABEL_12;
          }
          v62 = 255.0;
        }
        v63 = v15;
LABEL_12:
        v64 = v15;
        v66 = 4;
        v65 = 1;
        v67 = 0;
        (*((void (__thiscall **)(void ***, int *))*off_103E773C[0] + 10))(off_103E773C[0], &v37);
        if ( a1[3388] )
        {
          v72 = 0.25;
          v73 = 0.050000001;
          v74 = 0.0;
        }
        else
        {
          v74 = 0.15000001;
          v73 = 0.15000001;
          v72 = 0.15000001;
        }
        *(float *)&v75 = COERCE_FLOAT(
                           (*(int (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1047C96C
                                                                                            + 280))(
                             dword_1047C96C,
                             "effects/rollerglow",
                             0,
                             0,
                             0));
        v16 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
        if ( v16 )
          (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 8))(v16);
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v16 + 36))(v16, v75);
        v30 = 6.5 * v71;
        v27 = v71 * 6.0;
        v32 = ((double (__thiscall *)(int, _DWORD, _DWORD, float *, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                LODWORD(v27),
                LODWORD(v30),
                &v72,
                1.0);
        v17 = (float *)(*(int (__thiscall **)(_BYTE *, _DWORD))(*((_DWORD *)a1 - 1) + 36))(a1 - 4, LODWORD(v32));
        v18 = v75;
        sub_10017340(v16, v75, v17, 0.0, v33, v35[0]);
        v19 = *(double (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)dword_10413198 + 4);
        if ( a1[3389] )
        {
          v35[0] = 1.0;
          v20 = 0.80000001;
        }
        else
        {
          if ( !a1[3388] )
          {
            v74 = v19(0.25, 0.5);
            v73 = v74;
            v72 = v74;
            goto LABEL_23;
          }
          v35[0] = 0.75;
          v20 = 0.25;
        }
        v34 = v20;
        v72 = v19(LODWORD(v34), LODWORD(v35[0]));
        v73 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                0.1,
                0.25);
        v74 = 0.0;
LABEL_23:
        (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)a1 + 148))(a1, v41);
        v21 = *(_DWORD *)dword_10413198;
        *(float *)&v75 = 1.5 * v71;
        v28 = v75;
        *(float *)&v25 = v71;
        v23 = ((double (__thiscall *)(int))*(_DWORD *)(v21 + 4))(dword_10413198);
        sub_10017340(v16, v18, (float *)v36, v23, (float *)v25, *(float *)&v28);
        (*(void (__thiscall **)(_BYTE *, int, int *, float *, float *, _DWORD))(*(_DWORD *)a1 + 148))(
          a1,
          v39,
          v36,
          v35,
          &v72,
          1.0);
        v29 = v75;
        *(float *)&v26 = v71;
        v24 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(dword_10413198);
        sub_10017340(v16, v18, (float *)v36, v24, (float *)v26, *(float *)&v29);
        (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v16 + 12))(v16, &v72, 1.0);
        (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 4))(v16);
      }
    }
  }
  return sub_10026910(a1, a4);
}
