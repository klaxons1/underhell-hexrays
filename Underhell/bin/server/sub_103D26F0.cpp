// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_103D26F0(int a1@<ecx>, int a2@<ebp>, int a3, int a4, int a5)
{
  void *v5; // esp
  float v6; // edx
  float v8; // eax
  int v9; // ecx
  void (__thiscall *v10)(int, float *); // edx
  bool v11; // zf
  int v12; // edx
  int v13; // edi
  float *v14; // eax
  double v15; // st7
  int v16; // ecx
  int v17; // edi
  float *v18; // eax
  double v19; // st7
  int v20; // ecx
  float *v21; // eax
  double v22; // st7
  _DWORD v23[1024]; // [esp+1Ch] [ebp-10BCh] BYREF
  float v24[21]; // [esp+101Ch] [ebp-BCh] BYREF
  float v25[3]; // [esp+1070h] [ebp-68h] BYREF
  _DWORD v26[2]; // [esp+107Ch] [ebp-5Ch] BYREF
  float v27[3]; // [esp+1084h] [ebp-54h] BYREF
  int v28; // [esp+1090h] [ebp-48h]
  float v29; // [esp+1094h] [ebp-44h]
  float v30; // [esp+1098h] [ebp-40h]
  float v31; // [esp+109Ch] [ebp-3Ch]
  float v32; // [esp+10A0h] [ebp-38h] BYREF
  float v33; // [esp+10A4h] [ebp-34h]
  float v34; // [esp+10A8h] [ebp-30h]
  float v35; // [esp+10ACh] [ebp-2Ch]
  float v36; // [esp+10B0h] [ebp-28h]
  float v37; // [esp+10B4h] [ebp-24h]
  int v38[2]; // [esp+10B8h] [ebp-20h] BYREF
  int v39; // [esp+10C0h] [ebp-18h]
  float v40; // [esp+10C4h] [ebp-14h]
  float v41; // [esp+10C8h] [ebp-10h]
  int v42; // [esp+10CCh] [ebp-Ch]
  void *v43; // [esp+10D0h] [ebp-8h]
  void *retaddr; // [esp+10D8h] [ebp+0h]

  v42 = a2;
  v43 = retaddr;
  v5 = alloca(4280);
  v6 = *(float *)(a5 + 12 * a4 + 60);
  v8 = *(float *)(a5 + 12 * a4 + 64);
  v29 = *(float *)(a5 + 12 * a4 + 56);
  v30 = v6;
  v31 = v8;
  off_10689714();
  v9 = *(_DWORD *)(a5 + 28);
  v10 = *(void (__thiscall **)(int, float *))(*(_DWORD *)v9 + 4);
  v28 = 0;
  v10(v9, &v32);
  v11 = *(_BYTE *)(a1 + 1141) == 0;
  v40 = 16384.0;
  if ( v11 || !*(_BYTE *)(a1 + 1142) && !*(_DWORD *)(dword_106ECD24 + 48) )
  {
    v25[0] = -256.0;
    v25[1] = -256.0;
    v25[2] = -256.0;
    v27[0] = v29 * 2048.0 + v32;
    v27[1] = v30 * 2048.0 + v33;
    v27[2] = 2048.0 * v31 + v34;
    sub_1001F200(v24, &v32, v27, v25, (float *)v38);
    sub_1025F990(v26, (int)v23, 1024, 8320);
    v17 = 0;
    v41 = COERCE_FLOAT(sub_1025F9F0((int)v24, (int)v26));
    if ( SLODWORD(v41) <= 0 )
      return;
    do
    {
      if ( sub_103D2590((_DWORD *)a1, (_DWORD *)v23[v17]) )
      {
        v18 = (float *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v23[v17] + 576))(v23[v17]);
        v35 = *v18 - v32;
        v36 = v18[1] - v33;
        v37 = v18[2] - v34;
        v19 = off_10689714();
        if ( v30 * v36 + v29 * v35 + v31 * v37 > 0.96600002 && v40 > v19 )
        {
          v20 = v23[v17];
          v40 = v19;
          v28 = v20;
        }
      }
      ++v17;
    }
    while ( v17 < SLODWORD(v41) );
    goto LABEL_19;
  }
  v12 = *(_DWORD *)(a1 + 252) >> 11;
  v41 = *(float *)(dword_106ECC94 + 44);
  if ( (v12 & 1) != 0 )
    sub_100DAE60(a1);
  sub_1025F990(v26, (int)v23, 1024, 8320);
  v13 = 0;
  v41 = COERCE_FLOAT(sub_1025FA20(a1 + 580, v41, (int)v26));
  if ( SLODWORD(v41) > 0 )
  {
    do
    {
      if ( sub_103D2590((_DWORD *)a1, (_DWORD *)v23[v13]) )
      {
        v14 = (float *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v23[v13] + 576))(v23[v13]);
        v35 = *v14 - v32;
        v36 = v14[1] - v33;
        v37 = v14[2] - v34;
        v15 = off_10689714();
        if ( v40 > v15 && v30 * v36 + v29 * v35 + v31 * v37 > 0.0 )
        {
          v16 = v23[v13];
          v40 = v15;
          v28 = v16;
        }
      }
      ++v13;
    }
    while ( v13 < SLODWORD(v41) );
LABEL_19:
    if ( v28 )
    {
      v21 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v28 + 576))(v28);
      *(float *)v38 = *v21 - v32;
      *(float *)&v38[1] = v21[1] - v33;
      *(float *)&v39 = v21[2] - v34;
      off_10689714();
      v22 = *(float *)(a1 + 1148);
      v40 = COERCE_FLOAT(v38);
      *(float *)&v39 = v22 * *(float *)(a5 + 4 * a4);
      sub_101BA870(v39, v38);
    }
  }
}
