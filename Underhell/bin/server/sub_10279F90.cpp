int __userpurge sub_10279F90@<eax>(int *a1@<ecx>, int a2@<ebx>, int a3@<esi>, _DWORD *a4, float *a5)
{
  int result; // eax
  float *v7; // eax
  int v8; // eax
  float *v9; // eax
  double v10; // st7
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  void (__thiscall *v15)(float *, _DWORD *); // edx
  int *v16; // esi
  int v17; // edi
  int *v18; // ecx
  char v19[12]; // [esp+28h] [ebp-88h] BYREF
  char v20[12]; // [esp+34h] [ebp-7Ch] BYREF
  _DWORD v21[20]; // [esp+40h] [ebp-70h] BYREF
  __int16 v22; // [esp+90h] [ebp-20h]
  char v23; // [esp+93h] [ebp-1Dh]
  __int16 v24; // [esp+94h] [ebp-1Ch]
  float v25; // [esp+98h] [ebp-18h]
  float v26; // [esp+9Ch] [ebp-14h]
  float v27; // [esp+A0h] [ebp-10h]
  float v28; // [esp+A4h] [ebp-Ch] BYREF
  float v29; // [esp+A8h] [ebp-8h]
  float v30; // [esp+ACh] [ebp-4h]

  if ( *a4 != 3014 )
    return sub_100CFE60(a1, (int)a4, (int)a5);
  v7 = (float *)(*(int (__thiscall **)(float *, char *, int))(*(_DWORD *)a5 + 968))(a5, v20, a3);
  v28 = *v7;
  v29 = v7[1];
  v30 = v7[2];
  v8 = sub_100D7680((int)a5);
  v9 = (float *)(*(int (__thiscall **)(int, char *, float *))(*(_DWORD *)v8 + 2104))(v8, v19, &v28);
  v25 = *v9;
  v26 = v9[1];
  v10 = v9[2];
  v11 = *((_DWORD *)a5 + 63) >> 11;
  v27 = v10;
  if ( (v11 & 1) != 0 )
    sub_100DAE60((int)a5);
  v12 = (*(int (__thiscall **)(float *, int))(*(_DWORD *)a5 + 368))(a5, a2);
  sub_1023D4B0(2097153, a5 + 145, 1500, 0.2, (int)a5, 4, v12);
  (*(void (__thiscall **)(int *, int, _DWORD))(*a1 + 1132))(a1, 3, 0.0);
  *(float *)&v21[17] = 1.0;
  v13 = a1[298];
  v14 = *(_DWORD *)a5;
  *(float *)&v21[1] = v28;
  v15 = *(void (__thiscall **)(float *, _DWORD *))(v14 + 432);
  *(float *)&v21[2] = v29;
  v21[11] = v13;
  *(float *)&v21[3] = v30;
  *(float *)&v21[4] = v25;
  v21[19] = 0;
  *(float *)&v21[5] = v26;
  memset(&v21[13], 0, 16);
  v24 = 0;
  *(float *)&v21[6] = v27;
  v23 = 0;
  v21[0] = 1;
  *(float *)&v21[7] = flt_106F1CA8;
  v21[12] = 2;
  *(float *)&v21[8] = flt_106F1CAC;
  v21[18] = 0;
  *(float *)&v21[9] = flt_106F1CB0;
  v22 = 1;
  *(float *)&v21[10] = 56755.84;
  v15(a5, v21);
  result = (*(int (__thiscall **)(float *))(*(_DWORD *)a5 + 1116))(a5);
  v16 = a1 + 300;
  v17 = a1[300] - 1;
  if ( *v16 != v17 )
  {
    result = (int)(v16 - 300);
    if ( *((_BYTE *)v16 - 1116) )
    {
      *(_BYTE *)(result + 88) |= 1u;
      *v16 = v17;
    }
    else
    {
      v18 = *(int **)(result + 24);
      if ( v18 )
        result = sub_100194B0(v18, 1200);
      *v16 = v17;
    }
  }
  return result;
}
