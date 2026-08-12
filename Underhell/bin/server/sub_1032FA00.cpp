// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_1032FA00@<al>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, int a5)
{
  float v6; // edx
  float v7; // eax
  int v8; // eax
  float *v9; // eax
  float *v10; // eax
  float v13[22]; // [esp+24h] [ebp-10Ch] BYREF
  _BYTE v14[12]; // [esp+7Ch] [ebp-B4h] BYREF
  float v15[19]; // [esp+88h] [ebp-A8h] BYREF
  int v16[3]; // [esp+D4h] [ebp-5Ch] BYREF
  int v17[5]; // [esp+E0h] [ebp-50h] BYREF
  float v18[3]; // [esp+F4h] [ebp-3Ch] BYREF
  float v19[3]; // [esp+100h] [ebp-30h] BYREF
  float v20[3]; // [esp+10Ch] [ebp-24h] BYREF
  float v21; // [esp+118h] [ebp-18h] BYREF
  float v22; // [esp+11Ch] [ebp-14h]
  float v23; // [esp+120h] [ebp-10h]
  int v24; // [esp+124h] [ebp-Ch]
  void *v25; // [esp+128h] [ebp-8h]
  void *retaddr; // [esp+130h] [ebp+0h]

  v24 = a2;
  v25 = retaddr;
  if ( (*(_DWORD *)(a5 + 252) & 0x800) != 0 )
    sub_100DAE60(a5);
  v6 = *(float *)(a5 + 584);
  v7 = *(float *)(a5 + 588);
  v21 = *(float *)(a5 + 580);
  v22 = v6;
  v23 = v7;
  sub_10265E30(v16, 0);
  sub_10265E60(v16, a5);
  sub_10265E60(v16, (int)a1);
  if ( sub_1002FDF0(a1) )
  {
    v8 = sub_1002FDF0(a1);
    sub_10265E60(v16, v8);
  }
  v9 = (float *)sub_10073730(3);
  v18[0] = *v9 * 1.1;
  v18[1] = v9[1] * 1.1;
  v18[2] = 1.1 * v9[2];
  v10 = (float *)sub_10073710(3);
  v19[0] = *v10 * 1.1;
  v19[1] = v10[1] * 1.1;
  v19[2] = 1.1 * v10[2];
  v20[0] = v21;
  v20[1] = v22;
  v20[2] = v23 - 1.0;
  sub_1001F200(v13, &v21, v20, v19, v18);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v13,
    33701899,
    v16,
    v14,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v14, (int)v15, 255, 255, 0, 1, -1.0);
  if ( 1.0 == v15[8] )
  {
    sub_102375F0(v17);
    return 1;
  }
  else
  {
    sub_102375F0(v17);
    return 0;
  }
}
