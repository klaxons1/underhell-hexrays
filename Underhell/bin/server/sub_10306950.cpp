// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_10306950(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, float *a5)
{
  double v6; // st7
  double (__stdcall *v7)(_DWORD, _DWORD); // edx
  double v8; // st7
  double v9; // st6
  double v10; // st4
  double v11; // st5
  double v12; // st2
  void (__thiscall *v13)(int, float *, int, _DWORD *); // eax
  _BYTE v15[12]; // [esp+40h] [ebp-DCh] BYREF
  float v16[19]; // [esp+4Ch] [ebp-D0h] BYREF
  _DWORD v17[3]; // [esp+98h] [ebp-84h] BYREF
  float v18; // [esp+A4h] [ebp-78h]
  float v19[16]; // [esp+B0h] [ebp-6Ch] BYREF
  char v20; // [esp+F0h] [ebp-2Ch]
  bool v21; // [esp+F1h] [ebp-2Bh]
  int v22; // [esp+100h] [ebp-1Ch]
  float v23; // [esp+104h] [ebp-18h] BYREF
  float v24; // [esp+108h] [ebp-14h]
  float v25; // [esp+10Ch] [ebp-10h]
  int v26; // [esp+110h] [ebp-Ch]
  void *v27; // [esp+114h] [ebp-8h]
  void *retaddr; // [esp+11Ch] [ebp+0h]

  v26 = a2;
  v27 = retaddr;
  (*(void (__thiscall **)(int, _DWORD, _DWORD, float *, int, int))(*(_DWORD *)a1 + 528))(a1, 0, 0, &v23, a3, a4);
  v23 = -v23;
  v22 = 8;
  v24 = -v24;
  v25 = -v25;
  do
  {
    v6 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           -16.0,
           16.0,
           LODWORD(v25));
    v7 = *(double (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4);
    v18 = v6 + *a5;
    v8 = v7(-16.0, 16.0) + a5[1];
    v9 = a5[2] + 4.0;
    v10 = v24 * 60.0 + v8;
    v11 = 60.0 * v25 + v9;
    v12 = v23 * 60.0 + v18 - v18;
    v19[4] = v12;
    v19[5] = v10 - v8;
    v19[6] = v11 - v9;
    v21 = 0.0 != (v11 - v9) * (v11 - v9) + v12 * v12 + (v10 - v8) * (v10 - v8);
    v19[14] = 0.0;
    v19[13] = 0.0;
    v19[12] = 0.0;
    v20 = 1;
    v19[10] = 0.0;
    v19[9] = 0.0;
    v19[8] = 0.0;
    v19[0] = v18;
    v19[1] = v8;
    v19[2] = v9;
    sub_10265570(v17, a1, 0);
    v13 = *(void (__thiscall **)(int, float *, int, _DWORD *))(*(_DWORD *)dword_106B31F4 + 16);
    v25 = COERCE_FLOAT(v15);
    v13(dword_106B31F4, v19, 16395, v17);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0((int)v15, (int)v16, 255, 0, 0, 1, 5.0);
    if ( 1.0 != v16[8] )
      sub_10265C30((int)v15, 1);
    --v22;
  }
  while ( v22 );
}
