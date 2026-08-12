// bad sp value at call has been detected, the output may be wrong!
float *__userpurge sub_10352F00@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<esi>, float *a4)
{
  unsigned int v5; // ecx
  int *v6; // eax
  unsigned int v7; // ecx
  _DWORD *v8; // eax
  int v9; // edx
  _DWORD *v10; // ecx
  int (__thiscall *v11)(_DWORD *); // eax
  double v12; // st7
  float *result; // eax
  float v14; // edx
  int v15; // ecx
  float v17[23]; // [esp+24h] [ebp-FCh] BYREF
  float v18; // [esp+80h] [ebp-A0h] BYREF
  _BYTE v19[12]; // [esp+8Ch] [ebp-94h] BYREF
  float v20; // [esp+98h] [ebp-88h] BYREF
  float v21; // [esp+9Ch] [ebp-84h]
  int v22; // [esp+A0h] [ebp-80h]
  _DWORD v23[3]; // [esp+E8h] [ebp-38h] BYREF
  float v24[3]; // [esp+F4h] [ebp-2Ch] BYREF
  float v25[3]; // [esp+100h] [ebp-20h] BYREF
  float v26; // [esp+10Ch] [ebp-14h]
  float v27; // [esp+110h] [ebp-10h]
  int v28; // [esp+114h] [ebp-Ch]
  void *v29; // [esp+118h] [ebp-8h]
  void *retaddr; // [esp+120h] [ebp+0h]

  v28 = a2;
  v29 = retaddr;
  sub_100BF1B0(a1, "BellyGun", (int)v25, &v18, 0, 0);
  v24[0] = v25[0];
  v24[1] = v25[1];
  v24[2] = v25[2] - 56755.84;
  sub_1001F180(v17, v25, v24);
  sub_10265570(v23, (int)a1, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v17,
    1174421507,
    v23,
    v19,
    a3);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v19, (int)&v20, 255, 0, 0, 1, 5.0);
  v5 = a1[1023];
  if ( v5 != -1
    && (v6 = &off_1061BE18[4 * (a1[1023] & 0xFFF) + 1], v7 = v5 >> 12, off_1061BE18[4 * (a1[1023] & 0xFFF) + 2] == v7)
    && *v6 )
  {
    if ( off_1061BE18[4 * (a1[1023] & 0xFFF) + 2] == v7 )
      v8 = (_DWORD *)*v6;
    else
      v8 = 0;
    v9 = *v8;
    v26 = v20;
    v10 = v8;
    v11 = *(int (__thiscall **)(_DWORD *))(v9 + 576);
    v27 = v21;
    v12 = *(float *)(v11(v10) + 8);
    result = a4;
    *a4 = v26;
    a4[1] = v27;
    a4[2] = v12;
  }
  else
  {
    result = a4;
    v14 = v21;
    *a4 = v20;
    v15 = v22;
    a4[1] = v14;
    *((_DWORD *)a4 + 2) = v15;
  }
  return result;
}
