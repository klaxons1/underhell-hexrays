void __thiscall sub_100A0E60(int this)
{
  double (__stdcall *v2)(_DWORD, _DWORD, _BYTE *, _DWORD, const char *, int); // edx
  double v3; // st7
  void (__thiscall *v4)(int, _DWORD, int); // edx
  int v5; // eax
  double v6; // st7
  int v7; // edx
  double (__stdcall *v8)(_DWORD, _DWORD); // eax
  double v9; // st7
  void (__thiscall *v10)(int, _DWORD, int); // eax
  int v11; // eax
  double v12; // st7
  float v13; // [esp+40h] [ebp-C0h]
  float v14; // [esp+4Ch] [ebp-B4h]
  _BYTE v15[12]; // [esp+6Ch] [ebp-94h] BYREF
  _BYTE v16[12]; // [esp+78h] [ebp-88h] BYREF
  _BYTE v17[12]; // [esp+84h] [ebp-7Ch] BYREF
  int v18; // [esp+90h] [ebp-70h] BYREF
  float v19; // [esp+94h] [ebp-6Ch]
  float v20; // [esp+98h] [ebp-68h]
  int v21; // [esp+9Ch] [ebp-64h]
  float v22; // [esp+A0h] [ebp-60h]
  float v23; // [esp+A4h] [ebp-5Ch]
  float v24; // [esp+A8h] [ebp-58h]
  float v25; // [esp+ACh] [ebp-54h]
  float v26; // [esp+B0h] [ebp-50h]
  float v27; // [esp+B4h] [ebp-4Ch]
  float v28; // [esp+B8h] [ebp-48h]
  float v29; // [esp+BCh] [ebp-44h]
  float v30; // [esp+C0h] [ebp-40h]
  float v31; // [esp+C4h] [ebp-3Ch]
  float v32; // [esp+C8h] [ebp-38h]
  float v33; // [esp+CCh] [ebp-34h]
  float v34; // [esp+D0h] [ebp-30h]
  int v35; // [esp+D8h] [ebp-28h]
  int v36; // [esp+DCh] [ebp-24h]
  float v37; // [esp+E0h] [ebp-20h] BYREF
  float v38; // [esp+E4h] [ebp-1Ch]
  int v39; // [esp+E8h] [ebp-18h] BYREF
  float v40; // [esp+ECh] [ebp-14h]
  float v41; // [esp+F0h] [ebp-10h]
  int v42; // [esp+F4h] [ebp-Ch] BYREF
  float v43; // [esp+F8h] [ebp-8h]
  float v44; // [esp+FCh] [ebp-4h]

  if ( (*(_BYTE *)(this + 32) & 0x40) == 0 )
  {
    v42 = *(int *)(this + 52);
    v43 = *(float *)(this + 56);
    v44 = *(float *)(this + 60) + 8.0;
    sub_100A65B0(v42, LODWORD(v43), LODWORD(v44), v17, &v37);
    v38 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            0.80000001,
            1.0);
    *(float *)&v39 = 0.0;
    v40 = 0.0;
    v41 = 1.0;
    v42 = *(int *)(this + 52);
    v43 = *(float *)(this + 56);
    v44 = *(float *)(this + 60) + 2.0;
    v14 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(dword_10413198);
    v36 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198);
    v13 = (float)v36;
    sub_1008DCF0(
      (float *)&v42,
      (float *)&v39,
      64.0,
      256.0,
      0.85000002,
      v37,
      0.0,
      0.25,
      v13,
      0.0,
      (float *)0x168,
      v14,
      COERCE_INT(-4.0),
      COERCE_INT(4.0));
    *(float *)&v39 = 0.0;
    v40 = 0.0;
    v41 = 1.0;
    sub_101EDAE0(&v39, v16, v15);
    v42 = *(int *)(this + 52);
    v2 = *(double (__stdcall **)(_DWORD, _DWORD, _BYTE *, _DWORD, const char *, int))(*(_DWORD *)dword_10413198 + 4);
    v43 = *(float *)(this + 56);
    v44 = *(float *)(this + 60);
    v3 = v2(50.0, 75.0, v17, 2.0, "effects/splashwake1", 3);
    v4 = *(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8);
    *(float *)&v39 = *(float *)&v42 + 0.0 * v3;
    v40 = 0.0 * v3 + v43;
    v41 = v3 + v44;
    v4(dword_10413198, 0, 1);
    v38 = v38 * 0.5;
    v34 = v38;
    v30 = v37;
    v31 = 0.0;
    v32 = 25.0;
    v33 = 100.0;
    v5 = (*(int (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
           dword_1047C96C,
           "effects/splash3",
           0,
           0,
           0);
    v18 = v42;
    v35 = v5;
    v19 = v43;
    v20 = v44;
    v24 = flt_10459240;
    v25 = *(float *)&qword_10459244;
    v26 = *((float *)&qword_10459244 + 1);
    v21 = v39;
    v22 = v40;
    v23 = v41;
    v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
           dword_10413198,
           650.0,
           750.0);
    v27 = 0.0;
    v28 = 0.0;
    v29 = v6;
    sub_1008DB80((int)&v18);
    v7 = *(_DWORD *)dword_10413198;
    v42 = *(int *)(this + 52);
    v8 = *(double (__stdcall **)(_DWORD, _DWORD))(v7 + 4);
    v43 = *(float *)(this + 56);
    v44 = *(float *)(this + 60);
    v9 = v8(32.0, 64.0);
    v10 = *(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10413198 + 8);
    *(float *)&v39 = *(float *)&v42 + 0.0 * v9;
    v40 = 0.0 * v9 + v43;
    v41 = v9 + v44;
    v10(dword_10413198, 0, 1);
    v34 = v38;
    v30 = v37;
    v31 = 0.0;
    v32 = 50.0;
    v33 = 100.0;
    v11 = (*(int (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
            dword_1047C96C,
            "effects/splash3",
            0,
            0,
            0);
    v18 = v42;
    v35 = v11;
    v19 = v43;
    v20 = v44;
    v24 = flt_10459240;
    v25 = *(float *)&qword_10459244;
    v26 = *((float *)&qword_10459244 + 1);
    v21 = v39;
    v22 = v40;
    v23 = v41;
    v12 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
            dword_10413198,
            64.0,
            128.0);
    v27 = 0.0 * v12;
    v28 = v27;
    v29 = v12;
    sub_1008DB80((int)&v18);
  }
}
