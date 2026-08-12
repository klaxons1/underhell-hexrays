// bad sp value at call has been detected, the output may be wrong!
bool __userpurge sub_10034610@<al>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, float *a5, float *a6)
{
  int v7; // eax
  float *v8; // eax
  float *v9; // edi
  double v10; // st4
  double v11; // st6
  double v12; // st4
  double v13; // st5
  double v14; // st6
  int v15; // eax
  int v16; // eax
  int v17; // edi
  void (__thiscall *v18)(int, float *, int); // eax
  float v21[20]; // [esp+24h] [ebp-DCh] BYREF
  _BYTE v22[12]; // [esp+74h] [ebp-8Ch] BYREF
  float v23[21]; // [esp+80h] [ebp-80h] BYREF
  int v24; // [esp+D4h] [ebp-2Ch] BYREF
  int v25; // [esp+E0h] [ebp-20h] BYREF
  int v26; // [esp+E4h] [ebp-1Ch]
  int *v27; // [esp+E8h] [ebp-18h]
  _BYTE *v28; // [esp+ECh] [ebp-14h]
  int v29; // [esp+F0h] [ebp-10h]
  _DWORD v30[3]; // [esp+F4h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+100h] [ebp+0h]

  v30[0] = a2;
  v30[1] = retaddr;
  sub_10265790(0, 0, a1);
  v29 = (*(int (__thiscall **)(_DWORD *, int, int))(*a1 + 368))(a1, a3, a4);
  if ( v29 )
  {
    v7 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1);
    v8 = (float *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v7 + 504))(v7, &v24);
    v9 = a5;
    v10 = a5[1] - v8[1];
    v11 = v10 * v10;
    v12 = *a5 - *v8;
    v13 = v11;
    v14 = a5[2] - v8[2];
    if ( v12 * v12 + v13 + v14 * v14 < 0.1 )
    {
      v15 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1);
      v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 288))(v15);
      v17 = v16;
      if ( v16 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v16 + 1088))(v16) )
        v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 1096))(v17);
      v9 = a5;
      if ( !v26 )
        v26 = v29;
    }
  }
  else
  {
    v9 = a5;
  }
  if ( *(_DWORD *)(dword_1069109C + 48) )
  {
    sub_1002A5F0((int)v30, (int)a1, v9, a6, 16449, (int)a1, 0, (int)v22);
  }
  else
  {
    sub_10265790(a1, 0, 0);
    sub_1001F180(v21, v9, a6);
    v18 = *(void (__thiscall **)(int, float *, int))(*(_DWORD *)dword_106B31F4 + 16);
    v28 = v22;
    v27 = &v25;
    v18(dword_106B31F4, v21, 33570881);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0((int)v22, (int)v23, 255, 0, 0, 1, -1.0);
  }
  if ( 1.0 == v23[8] )
    return 0;
  return !*(_DWORD *)(dword_10698344 + 48) || *(_DWORD *)(LODWORD(v23[16]) + 92) != a1[23];
}
