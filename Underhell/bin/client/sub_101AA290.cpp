int __cdecl sub_101AA290(float *a1)
{
  float *v2; // esi
  double v3; // st7
  double (__thiscall *v4)(int, _DWORD, _DWORD, float *, _DWORD, const char *, int); // edx
  double v5; // st7
  void (__stdcall *v6)(_DWORD, int); // edx
  double v7; // st4
  double v8; // rt2
  int v9; // eax
  double v10; // st7
  double v11; // st4
  double v12; // st6
  int v13; // edx
  double (__stdcall *v14)(_DWORD, _DWORD); // eax
  double v15; // st7
  void (__stdcall *v16)(_DWORD, int); // eax
  double v17; // st4
  double v18; // rt0
  int v19; // eax
  double v20; // st7
  double v21; // st6
  double v22; // st5
  double v23; // st7
  float v25; // [esp+2Ch] [ebp-CCh]
  float v26; // [esp+40h] [ebp-B8h]
  float v27; // [esp+4Ch] [ebp-ACh]
  float v28; // [esp+5Ch] [ebp-9Ch]
  float v29; // [esp+64h] [ebp-94h]
  _BYTE v30[12]; // [esp+70h] [ebp-88h] BYREF
  _BYTE v31[12]; // [esp+7Ch] [ebp-7Ch] BYREF
  float v32; // [esp+88h] [ebp-70h] BYREF
  float v33; // [esp+8Ch] [ebp-6Ch]
  float v34; // [esp+90h] [ebp-68h]
  float v35; // [esp+94h] [ebp-64h]
  float v36; // [esp+98h] [ebp-60h]
  float v37; // [esp+9Ch] [ebp-5Ch]
  float v38; // [esp+A0h] [ebp-58h]
  float v39; // [esp+A4h] [ebp-54h]
  float v40; // [esp+A8h] [ebp-50h]
  float v41; // [esp+ACh] [ebp-4Ch]
  float v42; // [esp+B0h] [ebp-48h]
  float v43; // [esp+B4h] [ebp-44h]
  float v44; // [esp+B8h] [ebp-40h]
  float v45; // [esp+BCh] [ebp-3Ch]
  float v46; // [esp+C0h] [ebp-38h]
  float v47; // [esp+C4h] [ebp-34h]
  float v48; // [esp+C8h] [ebp-30h]
  int v49; // [esp+D0h] [ebp-28h]
  float v50; // [esp+D4h] [ebp-24h]
  float v51; // [esp+D8h] [ebp-20h]
  float v52; // [esp+DCh] [ebp-1Ch]
  float v53; // [esp+E0h] [ebp-18h] BYREF
  float v54; // [esp+E4h] [ebp-14h]
  float v55; // [esp+E8h] [ebp-10h]
  float v56; // [esp+ECh] [ebp-Ch]
  float v57; // [esp+F0h] [ebp-8h]
  float v58; // [esp+F4h] [ebp-4h]
  float v59; // [esp+100h] [ebp+8h]

  v51 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
          dword_10413198,
          0.40000001,
          0.75);
  v53 = 1.0;
  v54 = 1.0;
  v55 = 1.0;
  v28 = v51;
  v2 = a1 + 6;
  v27 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(dword_10413198);
  v26 = (float)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198);
  v25 = a1[16] * 4.0;
  sub_1008DCF0(
    a1,
    a1 + 6,
    a1[16],
    v25,
    0.85000002,
    1.0,
    0.0,
    0.25,
    v26,
    0.0,
    (float *)0x168,
    v27,
    COERCE_INT(-4.0),
    COERCE_INT(4.0));
  sub_101EDAE0(a1 + 6, v30, v31);
  v3 = a1[16] * 0.15000001;
  v59 = v3;
  v56 = *a1;
  v57 = a1[1];
  v58 = a1[2];
  v52 = 4.0 * v3;
  v4 = *(double (__thiscall **)(int, _DWORD, _DWORD, float *, _DWORD, const char *, int))(*(_DWORD *)dword_10413198 + 4);
  v50 = v3 + v3;
  v5 = v4(dword_10413198, LODWORD(v50), LODWORD(v52), &v53, LODWORD(v28), "effects/combinemuzzle1", 3);
  v6 = *(void (__stdcall **)(_DWORD, int))(*(_DWORD *)dword_10413198 + 8);
  v7 = v2[2];
  v8 = v2[1] * v5;
  v53 = *v2 * v5 + v56;
  v54 = v8 + v57;
  v55 = v5 * v7 + v58;
  v6(0, 1);
  v48 = v51;
  v44 = 1.0;
  v45 = 0.0;
  v46 = v52;
  v47 = v59 * 5.0;
  v9 = (*(int (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
         dword_1047C96C,
         "effects/ar2ground2",
         0,
         0,
         0);
  v32 = v56;
  v33 = v57;
  v49 = v9;
  v34 = v58;
  v38 = flt_10459240;
  v39 = *(float *)&qword_10459244;
  v40 = *((float *)&qword_10459244 + 1);
  v35 = v53;
  v36 = v54;
  v37 = v55;
  v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
          dword_10413198,
          200.0,
          350.0);
  v11 = v2[2];
  v12 = v2[1] * v10;
  v41 = *v2 * v10;
  v42 = v12;
  v43 = v10 * v11;
  sub_1008DB80((int)&v32);
  v13 = *(_DWORD *)dword_10413198;
  v56 = *a1;
  v14 = *(double (__stdcall **)(_DWORD, _DWORD))(v13 + 4);
  v57 = a1[1];
  v58 = a1[2];
  v29 = v59 * 0.25;
  v15 = v14(16.0, LODWORD(v29));
  v16 = *(void (__stdcall **)(_DWORD, int))(*(_DWORD *)dword_10413198 + 8);
  v17 = v2[2];
  v18 = v2[1] * v15;
  v53 = *v2 * v15 + v56;
  v54 = v18 + v57;
  v55 = v15 * v17 + v58;
  v16(0, 1);
  v48 = v51 - 0.1;
  v44 = 1.0;
  v45 = 0.0;
  v46 = v50;
  v47 = v52;
  v19 = (*(int (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
          dword_1047C96C,
          "effects/ar2ground2",
          0,
          0,
          0);
  v32 = v56;
  v49 = v19;
  v33 = v57;
  v34 = v58;
  v38 = flt_10459240;
  v39 = *(float *)&qword_10459244;
  v40 = *((float *)&qword_10459244 + 1);
  v35 = v53;
  v36 = v54;
  v37 = v55;
  v20 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
          dword_10413198,
          64.0,
          128.0);
  v21 = *v2 * v20;
  v22 = v2[1] * v20;
  v23 = v20 * v2[2];
  v41 = v21;
  v42 = v22;
  v43 = v23;
  return sub_1008DB80((int)&v32);
}
