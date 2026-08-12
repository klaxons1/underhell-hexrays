int __userpurge sub_100E88D0@<eax>(
        int *a1@<ecx>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        int a5,
        int a6,
        float a7,
        float a8,
        float a9,
        float a10)
{
  double v11; // st6
  float v12; // eax
  int v13; // edi
  void (__thiscall *v14)(int *, int, float *, _DWORD, _DWORD, int, int); // edx
  float v15; // eax
  void (__thiscall *v16)(int *, int, float *, _DWORD, _DWORD); // edx
  float v17; // eax
  void (__thiscall *v18)(int *, int, float *, _DWORD, _DWORD); // edx
  float v19; // eax
  void (__thiscall *v20)(int *, int, float *, _DWORD, _DWORD); // edx
  float v21; // eax
  double v22; // st7
  float v23; // eax
  void (__thiscall *v24)(int *, int, float *, _DWORD, _DWORD); // edx
  float v25; // eax
  float v27; // [esp+40h] [ebp-34h]
  _BYTE v30[12]; // [esp+50h] [ebp-24h] BYREF
  float v31[3]; // [esp+5Ch] [ebp-18h] BYREF
  float v32; // [esp+68h] [ebp-Ch] BYREF
  float v33; // [esp+6Ch] [ebp-8h]
  float v34; // [esp+70h] [ebp-4h]
  float v35; // [esp+94h] [ebp+20h]

  *((float *)a1 + 26) = a9;
  *((float *)a1 + 27) = a10;
  a1[25] = 0;
  v11 = (a7 + a8) * 0.5;
  v35 = v11;
  if ( a5 )
  {
    sub_101EE190(a5, v30);
    sub_101EE040(v30, 0, v31, 0);
    v13 = a4;
    (*(void (__thiscall **)(int *, int, int, float, _DWORD, int, int))(*a1 + 8))(
      a1,
      a4,
      a5,
      COERCE_FLOAT(LODWORD(v35)),
      LODWORD(a9),
      a2,
      a3);
    v23 = *(float *)a1;
    v32 = v31[0];
    v24 = *(void (__thiscall **)(int *, int, float *, _DWORD, _DWORD))(LODWORD(v23) + 8);
    v33 = v31[1];
    v34 = v31[2];
    v24(a1, a4, &v32, LODWORD(v35), LODWORD(a9));
    v32 = v32 * -1.0;
    v33 = v33 * -1.0;
    v22 = -1.0 * v34;
  }
  else
  {
    v12 = *(float *)a1;
    v13 = a4;
    v32 = 1.0;
    v14 = *(void (__thiscall **)(int *, int, float *, _DWORD, _DWORD, int, int))(LODWORD(v12) + 8);
    v33 = 0.0;
    v34 = 0.0;
    v27 = v11;
    v14(a1, a4, &v32, LODWORD(v27), LODWORD(a9), a2, a3);
    v15 = *(float *)a1;
    v32 = -1.0;
    v16 = *(void (__thiscall **)(int *, int, float *, _DWORD, _DWORD))(LODWORD(v15) + 8);
    v33 = 0.0;
    v34 = 0.0;
    v16(a1, a4, &v32, LODWORD(v35), LODWORD(a9));
    v17 = *(float *)a1;
    v32 = 0.0;
    v18 = *(void (__thiscall **)(int *, int, float *, _DWORD, _DWORD))(LODWORD(v17) + 8);
    v33 = 1.0;
    v34 = 0.0;
    v18(a1, a4, &v32, LODWORD(v35), LODWORD(a9));
    v19 = *(float *)a1;
    v32 = 0.0;
    v20 = *(void (__thiscall **)(int *, int, float *, _DWORD, _DWORD))(LODWORD(v19) + 8);
    v33 = -1.0;
    v34 = 0.0;
    v20(a1, a4, &v32, LODWORD(v35), LODWORD(a9));
    v21 = *(float *)a1;
    v32 = 0.0;
    v33 = 0.0;
    v34 = 1.0;
    (*(void (__thiscall **)(int *, int, float *, float, _DWORD))(LODWORD(v21) + 8))(
      a1,
      a4,
      &v32,
      COERCE_FLOAT(LODWORD(v35)),
      LODWORD(a9));
    v32 = 0.0;
    v33 = 0.0;
    v22 = -1.0;
  }
  v25 = *(float *)a1;
  v34 = v22;
  return (*(int (__thiscall **)(int *, int, float *))(LODWORD(v25) + 8))(a1, v13, &v32);
}
