// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_101E8AB0@<al>(unsigned int *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, int a5)
{
  char result; // al
  void (__thiscall *v7)(int); // edx
  int v8; // edx
  int v9; // eax
  int (__thiscall *v10)(int); // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  _DWORD v16[3]; // [esp+14h] [ebp-E4h] BYREF
  _DWORD v17[19]; // [esp+20h] [ebp-D8h] BYREF
  float v18[22]; // [esp+6Ch] [ebp-8Ch] BYREF
  float v19; // [esp+C4h] [ebp-34h] BYREF
  float v20; // [esp+C8h] [ebp-30h]
  float v21; // [esp+CCh] [ebp-2Ch]
  float v22; // [esp+D0h] [ebp-28h] BYREF
  float v23; // [esp+D4h] [ebp-24h]
  float v24; // [esp+D8h] [ebp-20h]
  float v25; // [esp+DCh] [ebp-1Ch] BYREF
  float v26; // [esp+E0h] [ebp-18h]
  float v27; // [esp+E4h] [ebp-14h]
  unsigned int v28; // [esp+E8h] [ebp-10h]
  int v29; // [esp+ECh] [ebp-Ch]
  void *v30; // [esp+F0h] [ebp-8h]
  void *retaddr; // [esp+F8h] [ebp+0h]

  v29 = a2;
  v30 = retaddr;
  result = (*(int (__thiscall **)(unsigned int *, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, float, float, float, float, float, float, float, float, float))(*a1 + 1356))(
             a1,
             a5,
             a3,
             a4,
             v16[0],
             v16[1],
             v16[2],
             v17[0],
             v17[1],
             v17[2],
             v17[3],
             v17[4],
             v17[5],
             v17[6],
             v17[7],
             v17[8],
             v17[9],
             v17[10],
             v17[11],
             v17[12],
             v17[13],
             v17[14],
             v17[15],
             v17[16],
             v17[17],
             v17[18],
             LODWORD(v18[0]),
             LODWORD(v18[1]),
             LODWORD(v18[2]),
             LODWORD(v18[3]),
             LODWORD(v18[4]),
             LODWORD(v18[5]),
             LODWORD(v18[6]),
             LODWORD(v18[7]),
             LODWORD(v18[8]),
             LODWORD(v18[9]),
             LODWORD(v18[10]),
             LODWORD(v18[11]),
             LODWORD(v18[12]),
             LODWORD(v18[13]),
             LODWORD(v18[14]),
             LODWORD(v18[15]),
             LODWORD(v18[16]),
             LODWORD(v18[17]),
             LODWORD(v18[18]),
             LODWORD(v18[19]),
             LODWORD(v18[20]),
             LODWORD(v18[21]),
             COERCE_FLOAT(LODWORD(v19)),
             COERCE_FLOAT(LODWORD(v20)),
             COERCE_FLOAT(LODWORD(v21)),
             COERCE_FLOAT(LODWORD(v22)),
             COERCE_FLOAT(LODWORD(v23)),
             COERCE_FLOAT(LODWORD(v24)),
             COERCE_FLOAT(LODWORD(v25)),
             COERCE_FLOAT(LODWORD(v26)),
             COERCE_FLOAT(LODWORD(v27)));
  if ( result )
  {
    sub_100F69B0(a1 + 876, a5);
    sub_100F8040((int)a1, (int)a1, 0, 0.0, 0);
    if ( a1[870] == 6 )
    {
      v7 = *(void (__thiscall **)(int))(*(_DWORD *)a5 + 504);
      v27 = COERCE_FLOAT(&v25);
      v7(a5);
      v8 = *(_DWORD *)a5;
      v26 = COERCE_FLOAT(&v22);
      v9 = (*(int (__thiscall **)(int))(v8 + 508))(a5);
      sub_10422220(v9, LODWORD(v26));
      off_10689714();
      v10 = *(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120);
      v19 = v25 - v22 * 64.0;
      v20 = v26 - v23 * 64.0;
      v21 = v27 - 64.0 * v24;
      v11 = v10(dword_106B3CDC);
      v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC, v11 + 48);
      sub_1001F200(v18, &v25, &v19, (float *)(v12 + 36), (float *)LODWORD(v27));
      sub_10158540((int)v18, 33636363, a5, 8, (int)v16);
      v13 = *(_DWORD *)a5;
      v28 = *a1;
      v14 = (*(int (__thiscall **)(int))(v13 + 508))(a5);
      (*(void (__thiscall **)(unsigned int *, _DWORD *, int))(v28 + 1364))(a1, v17, v14);
    }
    return 1;
  }
  return result;
}
