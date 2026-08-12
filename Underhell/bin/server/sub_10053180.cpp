char __stdcall sub_10053180(int a1, float *a2)
{
  _DWORD *v2; // edi
  float *v3; // edx
  float *v4; // ebx
  float *v5; // esi
  float *v6; // esi
  float *v7; // eax
  float *v8; // eax
  double v9; // st7
  double v10; // st6
  double v11; // st5
  char result; // al
  _BYTE v13[48]; // [esp+4h] [ebp-40h] BYREF
  float v14[3]; // [esp+34h] [ebp-10h] BYREF
  _DWORD *v15; // [esp+40h] [ebp-4h]
  float *v16; // [esp+4Ch] [ebp+8h]

  v2 = *(_DWORD **)a1;
  v15 = v2;
  if ( !v2 )
    return 0;
  v3 = *(float **)(a1 + 4);
  v16 = v3;
  if ( !v3 )
    return 0;
  if ( v2[1] == -1 || off_1061BE18[4 * (v2[1] & 0xFFF) + 2] != v2[1] >> 12 )
    v4 = 0;
  else
    v4 = (float *)off_1061BE18[4 * (v2[1] & 0xFFF) + 1];
  v5 = v3 + 3;
  if ( v3[3] == flt_106F1CA8 && v3[4] == flt_106F1CAC && v3[5] == flt_106F1CB0 )
  {
    v8 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v4 + 576))(v4);
    v9 = *v8 + *v5;
    v10 = v8[1] + v5[1];
    v11 = v8[2] + v5[2];
    v6 = a2;
    a2[1] = v9;
    a2[2] = v10;
    a2[3] = v11;
  }
  else
  {
    v14[1] = v4[183];
    v14[2] = 0.0;
    v14[0] = 0.0;
    sub_104227F0(v14, v13);
    v6 = a2;
    sub_10421C00(v16 + 3, v13, a2 + 1);
    v7 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v4 + 576))(v4);
    a2[1] = *v7 + a2[1];
    a2[2] = v7[1] + a2[2];
    a2[3] = v7[2] + a2[3];
    v2 = v15;
  }
  v6[6] = v16[8];
  v6[4] = v16[6];
  v6[5] = v16[7];
  *v6 = *(float *)(*v2 + 4);
  v6[7] = *(float *)(*v2 + 12);
  v6[8] = *(float *)(*v2 + 16);
  v6[9] = *(float *)(*v2 + 20);
  v6[10] = *(float *)(*v2 + 24);
  v6[11] = *(float *)(*v2 + 28);
  v6[12] = *(float *)(*v2 + 32);
  result = 1;
  v6[13] = *(float *)(*v2 + 36);
  return result;
}
