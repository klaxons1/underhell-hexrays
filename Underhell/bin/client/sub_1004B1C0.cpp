// bad sp value at call has been detected, the output may be wrong!
float *__userpurge sub_1004B1C0@<eax>(
        int a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        float a5,
        float *a6,
        float *a7,
        float a8)
{
  double v9; // st7
  double v10; // st6
  unsigned int v11; // eax
  unsigned int v12; // eax
  int v13; // eax
  float *result; // eax
  float *v15; // esi
  double v16; // st7
  _DWORD v18[13]; // [esp+38h] [ebp-D4h] BYREF
  int v19; // [esp+6Ch] [ebp-A0h]
  int v20; // [esp+70h] [ebp-9Ch]
  int v21; // [esp+74h] [ebp-98h]
  int v22; // [esp+78h] [ebp-94h]
  int v23; // [esp+7Ch] [ebp-90h]
  int v24; // [esp+80h] [ebp-8Ch]
  int v25; // [esp+84h] [ebp-88h]
  int v26; // [esp+88h] [ebp-84h]
  int v27; // [esp+8Ch] [ebp-80h]
  float v28[20]; // [esp+90h] [ebp-7Ch] BYREF
  float v29; // [esp+E0h] [ebp-2Ch] BYREF
  float v30; // [esp+E4h] [ebp-28h]
  float v31; // [esp+E8h] [ebp-24h]
  float v32; // [esp+ECh] [ebp-20h] BYREF
  float v33; // [esp+F0h] [ebp-1Ch]
  float v34; // [esp+F4h] [ebp-18h]
  int v35; // [esp+F8h] [ebp-14h]
  int v36; // [esp+FCh] [ebp-10h]
  int v37; // [esp+100h] [ebp-Ch]
  void *v38; // [esp+104h] [ebp-8h]
  void *retaddr; // [esp+10Ch] [ebp+0h]

  v37 = a2;
  v38 = retaddr;
  v29 = ((double (__thiscall *)(int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, int, int, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
          dword_10413198,
          0.0,
          1.0,
          a3,
          a4,
          v18[0],
          v18[1],
          v18[2],
          v18[3],
          v18[4],
          v18[5],
          v18[6],
          v18[7],
          v18[8],
          v18[9],
          v18[10],
          v18[11],
          v18[12],
          v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          LODWORD(v28[0]),
          LODWORD(v28[1]),
          LODWORD(v28[2]),
          LODWORD(v28[3]),
          LODWORD(v28[4]),
          LODWORD(v28[5]),
          LODWORD(v28[6]),
          LODWORD(v28[7]),
          LODWORD(v28[8]),
          LODWORD(v28[9]),
          LODWORD(v28[10]),
          LODWORD(v28[11]),
          LODWORD(v28[12]),
          LODWORD(v28[13]),
          LODWORD(v28[14]),
          LODWORD(v28[15]),
          LODWORD(v28[16]),
          LODWORD(v28[17]),
          LODWORD(v28[18]),
          LODWORD(v28[19]),
          LODWORD(v29),
          LODWORD(v30),
          LODWORD(v31),
          LODWORD(v32),
          LODWORD(v33),
          LODWORD(v34),
          v35)
      * (*a7 - *a6)
      + *a6;
  v30 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
          dword_10413198,
          0.0,
          1.0)
      * (a7[1] - a6[1])
      + a6[1];
  v9 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
         dword_10413198,
         0.0,
         1.0);
  v10 = a7[2] - a6[2];
  v35 = (int)&v32;
  v34 = a8;
  v33 = COERCE_FLOAT(&v29);
  v31 = v9 * v10 + a6[2];
  sub_101ED860(&v29, LODWORD(a8), &v32);
  v11 = *(_DWORD *)(a1 + 1448);
  if ( v11 == -1
    || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 1448) & 0xFFF) + 2) != v11 >> 12
    || !*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 1448) & 0xFFF) + 1)
    || ((sub_1000E430(v28, &v32, &v32), v12 = *(_DWORD *)(a1 + 1448), v12 == -1)
     || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 1448) & 0xFFF) + 2) != v12 >> 12
      ? (v13 = 0)
      : (v13 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 1448) & 0xFFF) + 1)),
        result = (float *)(*(int (__thiscall **)(int, float *, int, int, _DWORD *))(*(_DWORD *)dword_104131A0 + 8))(
                            dword_104131A0,
                            v28,
                            -1,
                            v13,
                            v18),
        HIBYTE(v19)) )
  {
    result = (float *)sub_100F06D0(60, *(_DWORD *)(a1 + 1452));
    v15 = result;
    if ( result )
    {
      v35 = 360;
      result[3] = v32;
      v34 = 0.0;
      result[4] = v33;
      result[5] = v34;
      v36 = sub_100EB330(LODWORD(v34), v35);
      v15[9] = (float)v36;
      sub_100EB300(-2.0, 2.0);
      v15[14] = -2.0;
      LODWORD(v33) = 64;
      LODWORD(v32) = 64;
      v15[11] = a5;
      v16 = *(float *)(a1 + 1436);
      *((_WORD *)v15 + 24) = -29632;
      v15[10] = v16;
      *((_BYTE *)v15 + 50) = -31;
      *((_BYTE *)v15 + 51) = sub_100EB330(LODWORD(v32), LODWORD(v33));
      *((_BYTE *)v15 + 52) = 0;
      v35 = (int)*(float *)(a1 + 1440);
      *((_BYTE *)v15 + 53) = v35;
      result = (float *)(HIWORD(v36) | 0xC00);
      v35 = (int)*(float *)(a1 + 1444);
      *((_BYTE *)v15 + 54) = v35;
      v15[6] = flt_10459240;
      v15[7] = flt_10459244;
      v15[8] = flt_10459248;
      v15[3] = v15[6] * a5 + v15[3];
      v15[4] = v15[7] * a5 + v15[4];
      v15[5] = a5 * v15[8] + v15[5];
    }
  }
  return result;
}
