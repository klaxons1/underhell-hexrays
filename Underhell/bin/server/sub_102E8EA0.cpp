float *__userpurge sub_102E8EA0@<eax>(int *a1@<ecx>, int a2@<ebp>, float a3, int *a4, float *a5, int a6)
{
  int v7; // edi
  int v8; // ecx
  double v9; // st7
  float *v10; // ecx
  double v11; // st4
  double v12; // st5
  double v13; // st7
  double v14; // st7
  int v15; // eax
  int v16; // eax
  double v17; // st7
  float *v18; // eax
  int v19; // ecx
  double v20; // st7
  float *result; // eax
  float v22[20]; // [esp+24h] [ebp-11Ch] BYREF
  _BYTE v23[12]; // [esp+74h] [ebp-CCh] BYREF
  int v24; // [esp+80h] [ebp-C0h] BYREF
  float v25; // [esp+A0h] [ebp-A0h]
  int v26; // [esp+C0h] [ebp-80h]
  float v27[3]; // [esp+D0h] [ebp-70h] BYREF
  float v28[3]; // [esp+DCh] [ebp-64h] BYREF
  _DWORD v29[3]; // [esp+E8h] [ebp-58h] BYREF
  float v30[3]; // [esp+F4h] [ebp-4Ch] BYREF
  float v31; // [esp+100h] [ebp-40h]
  float v32; // [esp+104h] [ebp-3Ch]
  int v33; // [esp+108h] [ebp-38h]
  float v34; // [esp+10Ch] [ebp-34h]
  int v35; // [esp+110h] [ebp-30h]
  float v36; // [esp+114h] [ebp-2Ch]
  float v37; // [esp+118h] [ebp-28h]
  float v38; // [esp+11Ch] [ebp-24h]
  float v39; // [esp+120h] [ebp-20h] BYREF
  float v40; // [esp+124h] [ebp-1Ch]
  float v41; // [esp+128h] [ebp-18h]
  int v42; // [esp+12Ch] [ebp-14h]
  int i; // [esp+130h] [ebp-10h]
  _DWORD v44[3]; // [esp+134h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+140h] [ebp+0h]

  v44[0] = a2;
  v44[1] = retaddr;
  v34 = 16384.0;
  v36 = 0.0;
  v35 = 0;
  v37 = 0.0;
  v38 = 0.0;
  v31 = a3 * a3;
  v33 = sub_1014EB60();
  for ( i = 0; i < v33; ++i )
  {
    v7 = sub_1014EC60(i);
    if ( !*(_BYTE *)(v7 + 856) && (!a6 || v7 != a6) )
    {
      sub_1014EC90(v7, v28);
      sub_1014ECE0(v7, v27);
      sub_10424670(a1[2] + 152, v27, v28, &v39, 0);
      v8 = a1[2];
      v9 = v39 - *(float *)(v8 + 152);
      v10 = (float *)(v8 + 152);
      v11 = v40 - v10[1];
      v12 = v41 - v10[2];
      v13 = v12 * v12 + v11 * v11 + v9 * v9;
      v32 = v13;
      if ( v13 <= v31 )
      {
        v42 = a1[1];
        sub_1001F180(v22, v10, &v39);
        sub_10265570(v29, v42, 0);
        (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
          dword_106B31F4,
          v22,
          33636363,
          v29,
          v23);
        if ( *(_DWORD *)(dword_106CE63C + 48) )
          sub_101A0AD0((int)v23, (int)&v24, 255, 0, 0, 1, 5.0);
        if ( 1.0 == v25 )
          goto LABEL_15;
        if ( !v26 )
          goto LABEL_15;
        if ( v26 == v7 )
          goto LABEL_15;
        v14 = *(float *)((*(int (__thiscall **)(int *))(*a1 + 36))(a1) + 8);
        v15 = *a1;
        *(float *)&v42 = v14;
        v16 = (*(int (__thiscall **)(int *))(v15 + 32))(a1);
        v17 = *(float *)&v42 - *(float *)(v16 + 8);
        v18 = (float *)a1[2];
        v19 = a1[1];
        v30[0] = v18[38];
        v30[1] = v18[39];
        v30[2] = v17 * 0.5 + v18[40];
        sub_1002A5F0((int)v44, (int)a1, v30, &v39, 33636363, v19, 0, (int)v23);
        if ( 1.0 == v25 || !v26 || v26 == v7 || (*(_BYTE *)(v26 + 356) & 8) != 0 )
        {
LABEL_15:
          if ( v32 < (double)v34 )
          {
            v34 = v32;
            v35 = v7;
            v36 = v39;
            v37 = v40;
            v38 = v41;
          }
        }
      }
    }
  }
  v20 = v36;
  *a4 = v35;
  result = a5;
  *a5 = v20;
  a5[1] = v37;
  a5[2] = v38;
  return result;
}
