// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_103EB7C0(int a1@<ecx>, int a2@<ebp>, float *a3)
{
  int v4; // eax
  int v5; // edi
  float v6; // edx
  float v7; // eax
  double v8; // st7
  double (__thiscall *v9)(int, _DWORD, _DWORD); // eax
  double v10; // st7
  double v11; // st7
  unsigned int v12; // eax
  double v13; // st6
  double v14; // st7
  double v15; // st6
  double v16; // st5
  int v17; // ecx
  double v18; // st2
  _BYTE v19[12]; // [esp+3Ch] [ebp-E4h] BYREF
  int v20; // [esp+48h] [ebp-D8h] BYREF
  _DWORD v21[3]; // [esp+98h] [ebp-88h] BYREF
  float v22[16]; // [esp+A4h] [ebp-7Ch] BYREF
  char v23; // [esp+E4h] [ebp-3Ch]
  bool v24; // [esp+E5h] [ebp-3Bh]
  float v25; // [esp+100h] [ebp-20h]
  float v26; // [esp+104h] [ebp-1Ch]
  float v27; // [esp+108h] [ebp-18h]
  float v28; // [esp+10Ch] [ebp-14h]
  float v29; // [esp+110h] [ebp-10h]
  int v30; // [esp+114h] [ebp-Ch]
  void *v31; // [esp+118h] [ebp-8h]
  void *retaddr; // [esp+120h] [ebp+0h]

  v30 = a2;
  v31 = retaddr;
  v4 = RandomInt(1, 2);
  if ( v4 > 0 )
  {
    v5 = v4;
    do
    {
      v6 = a3[1];
      v7 = a3[2];
      v26 = *a3;
      v27 = v6;
      v28 = v7;
      do
      {
        v29 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                -0.5,
                0.5);
        v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
               dword_106B31E4,
               -0.5,
               0.5);
        v9 = *(double (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
        v25 = v8 + v29;
        v29 = v9(dword_106B31E4, -0.5, 0.5);
        v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                -0.5,
                0.5);
        v11 = v10 + v29;
      }
      while ( v11 * v11 + v25 * v25 > 1.0 );
      v12 = *(_DWORD *)(a1 + 1940);
      v13 = v11 * 90.0;
      v14 = v25 * 90.0 + v26;
      v15 = v13 + v27;
      v16 = v28 + 128.0;
      if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 1940) & 0xFFF) + 2] != v12 >> 12 )
        v17 = 0;
      else
        v17 = off_1061BE18[4 * (*(_DWORD *)(a1 + 1940) & 0xFFF) + 1];
      v22[4] = v14 - v14;
      v22[5] = v15 - v15;
      v18 = v16 - 512.0 - v16;
      v22[6] = v18;
      v24 = 0.0 != v18 * v18 + (v14 - v14) * (v14 - v14) + (v15 - v15) * (v15 - v15);
      v22[14] = 0.0;
      v22[13] = 0.0;
      v22[12] = 0.0;
      v22[10] = 0.0;
      v23 = 1;
      v22[9] = 0.0;
      v22[8] = 0.0;
      v22[0] = v14;
      v22[1] = v15;
      v22[2] = v16;
      sub_10265570(v21, v17, 0);
      (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
        dword_106B31F4,
        v22,
        1174421507,
        v21,
        v19);
      if ( *(_DWORD *)(dword_106CE63C + 48) )
        sub_101A0AD0((int)v19, (int)&v20, 255, 0, 0, 1, 5.0);
      sub_10264E40((int)v19, (int)"BirdPoop");
      --v5;
    }
    while ( v5 );
  }
  *(_BYTE *)(a1 + 1944) = 1;
}
