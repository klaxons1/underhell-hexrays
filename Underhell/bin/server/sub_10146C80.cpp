int __thiscall sub_10146C80(int this)
{
  int v2; // edi
  int v3; // esi
  int v4; // esi
  unsigned int v5; // eax
  int v6; // eax
  int result; // eax
  double v8; // st7
  double v9; // st6
  double v10; // st5
  float *v11; // edi
  float *v12; // esi
  int v13; // eax
  _BYTE v14[164]; // [esp+34h] [ebp-590h] BYREF
  char v15; // [esp+D8h] [ebp-4ECh] BYREF
  char v16; // [esp+1C8h] [ebp-3FCh] BYREF
  float v17[168]; // [esp+238h] [ebp-38Ch] BYREF
  _BYTE v18[48]; // [esp+4D8h] [ebp-ECh] BYREF
  int v19[3]; // [esp+508h] [ebp-BCh] BYREF
  int v20[3]; // [esp+514h] [ebp-B0h] BYREF
  int v21[3]; // [esp+520h] [ebp-A4h] BYREF
  int v22[3]; // [esp+52Ch] [ebp-98h] BYREF
  int v23[3]; // [esp+538h] [ebp-8Ch] BYREF
  int v24[3]; // [esp+544h] [ebp-80h] BYREF
  float v25[3]; // [esp+550h] [ebp-74h] BYREF
  float v26[3]; // [esp+55Ch] [ebp-68h] BYREF
  int v27[3]; // [esp+568h] [ebp-5Ch] BYREF
  int v28[3]; // [esp+574h] [ebp-50h] BYREF
  int v29[3]; // [esp+580h] [ebp-44h] BYREF
  int v30[3]; // [esp+58Ch] [ebp-38h] BYREF
  int v31[3]; // [esp+598h] [ebp-2Ch] BYREF
  int v32; // [esp+5A4h] [ebp-20h]
  int v33; // [esp+5A8h] [ebp-1Ch] BYREF
  float v34; // [esp+5ACh] [ebp-18h]
  float v35; // [esp+5B0h] [ebp-14h]
  int v36; // [esp+5B4h] [ebp-10h] BYREF
  float v37; // [esp+5B8h] [ebp-Ch]
  float v38; // [esp+5BCh] [ebp-8h]
  float v39; // [esp+5C0h] [ebp-4h]

  v2 = 0;
  if ( *(int *)(this + 96) > 0 )
  {
    v32 = this + 100;
    do
    {
      v3 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 36) + 28))(*(_DWORD *)(this + 36), v2);
      v39 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v3 + 168))(v3);
      (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v3 + 188))(v3, v30, v29);
      sub_1011CDD0((float *)v30, (int)v29, v39, 0, 255, 0, 0, 0, 0.0);
      v4 = v32;
      sub_1011CDD0((float *)v32, v32 + 48, v39, 255, 255, 0, 0, 0, 0.0);
      ++v2;
      v32 = v4 + 12;
    }
    while ( v2 < *(_DWORD *)(this + 96) );
  }
  v5 = *(_DWORD *)(this + 4);
  if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
  result = *(_DWORD *)(v6 + 424);
  v32 = result;
  if ( result )
  {
    qmemcpy(
      v17,
      (const void *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 36) + 12))(*(_DWORD *)(this + 36)),
      sizeof(v17));
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)v32 + 188))(v32, v29, v31);
    *(float *)&v33 = 5.0;
    v34 = 5.0;
    v35 = 5.0;
    *(float *)&v36 = -5.0;
    v37 = -5.0;
    v38 = -5.0;
    sub_1011B9E0((int)v29, (int)&v36, (int)&v33, (int)v31, 255, 0, 0, 0, 0.0);
    sub_10425040(v31, v29, v18);
    v25[0] = v17[12];
    v25[1] = v17[13];
    v25[2] = v17[14];
    v26[0] = v17[41];
    v26[1] = v17[42];
    v26[2] = v17[43];
    sub_10421B40(v25, v18, v19);
    sub_10421B40(v26, v18, v20);
    *(float *)&v33 = 3.0;
    v34 = 3.0;
    v35 = 3.0;
    *(float *)&v36 = -3.0;
    v37 = -3.0;
    v38 = -3.0;
    sub_1011B9E0((int)v19, (int)&v36, (int)&v33, (int)v31, 0, 255, 0, 0, 0.0);
    *(float *)&v33 = 3.0;
    v34 = 3.0;
    v35 = 3.0;
    *(float *)&v36 = -3.0;
    v37 = -3.0;
    v38 = -3.0;
    sub_1011B9E0((int)v20, (int)&v36, (int)&v33, (int)v31, 0, 255, 0, 0, 0.0);
    (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(this + 36) + 60))(*(_DWORD *)(this + 36), v14);
    v8 = 39.370079;
    v9 = 1.0;
    v39 = 0.0;
    v10 = -1.0;
    v11 = (float *)&v16;
    v12 = (float *)&v15;
    while ( 1 )
    {
      v38 = -(*(v12 - 1) * v8);
      v37 = *v12 * v8;
      *(float *)&v36 = *(v12 - 2) * v8;
      v35 = -(v12[2] * v8);
      v34 = v12[3] * v8;
      *(float *)&v33 = v12[1] * v8;
      *(float *)&v30[2] = -(*(v11 - 1) * v8);
      *(float *)&v30[1] = *v11 * v8;
      *(float *)v30 = v8 * *(v11 - 2);
      *(float *)v23 = v9;
      *(float *)&v23[1] = v9;
      *(float *)&v23[2] = v9;
      *(float *)v22 = v10;
      v22[1] = v22[0];
      v22[2] = v22[0];
      sub_1011B9E0((int)&v36, (int)v22, (int)v23, (int)v31, 0, 255, 0, 0, 0.0);
      sub_1011BC50((float *)&v36, (float *)&v33, 255, 255, 0, 1, 0.0);
      *(float *)v27 = 1.0;
      *(float *)&v27[1] = 1.0;
      *(float *)&v27[2] = 1.0;
      *(float *)v28 = -1.0;
      *(float *)&v28[1] = -1.0;
      *(float *)&v28[2] = -1.0;
      sub_1011B9E0((int)&v33, (int)v28, (int)v27, (int)v31, 255, 0, 0, 0, 0.0);
      *(float *)v24 = 0.5;
      *(float *)&v24[1] = 0.5;
      *(float *)&v24[2] = 0.5;
      *(float *)v21 = -0.5;
      *(float *)&v21[1] = -0.5;
      *(float *)&v21[2] = -0.5;
      sub_1011B9E0((int)v30, (int)v21, (int)v24, (int)v31, 0, 0, 255, 0, 0.0);
      v13 = (*(int (__thiscall **)(_DWORD, float))(**(_DWORD **)(this + 36) + 28))(
              *(_DWORD *)(this + 36),
              COERCE_FLOAT(LODWORD(v39)));
      sub_101B62B0(v13);
      result = LODWORD(v39) + 1;
      v12 += 6;
      v11 += 3;
      v39 = *(float *)&result;
      if ( result >= 4 )
        break;
      v9 = 1.0;
      v10 = -1.0;
      v8 = 39.370079;
    }
  }
  return result;
}
