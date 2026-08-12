// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_10042C50@<eax>(int a1@<ebp>, int a2@<edi>, int a3@<esi>, int a4, float *a5, int a6, char a7, int a8)
{
  float v8; // ecx
  float v9; // edx
  int v10; // eax
  float *v11; // edi
  float *v12; // eax
  unsigned int v13; // eax
  int result; // eax
  float v15[20]; // [esp+2Ch] [ebp-DCh] BYREF
  _BYTE v16[12]; // [esp+7Ch] [ebp-8Ch] BYREF
  int v17; // [esp+88h] [ebp-80h] BYREF
  int v18; // [esp+D8h] [ebp-30h] BYREF
  float v19[3]; // [esp+E4h] [ebp-24h] BYREF
  float v20; // [esp+F0h] [ebp-18h] BYREF
  float v21; // [esp+F4h] [ebp-14h]
  float v22; // [esp+F8h] [ebp-10h]
  int v23; // [esp+FCh] [ebp-Ch]
  void *v24; // [esp+100h] [ebp-8h]
  void *retaddr; // [esp+108h] [ebp+0h]

  v23 = a1;
  v24 = retaddr;
  v8 = *a5;
  v9 = a5[1];
  v22 = a5[2];
  v20 = v8;
  v21 = v9;
  (*(void (__thiscall **)(int, int, float *, int, int))(*(_DWORD *)a8 + 2040))(a8, a4, &v20, a2, a3);
  v19[0] = v20;
  v10 = *(_DWORD *)(a8 + 1676);
  v19[2] = v22 + 1.0;
  v19[1] = v21;
  v11 = (float *)sub_10073730(v10);
  v12 = (float *)sub_10073710(*(_DWORD *)(a8 + 1676));
  sub_1001F200(v15, &v20, v19, v12, v11);
  sub_10265570(a8, 0);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v15,
    33701899,
    &v18,
    v16);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v16, (int)&v17, 255, 255, 0, 1, -1.0);
  *(float *)(a8 + 2852) = v20;
  *(float *)(a8 + 2856) = v21;
  *(float *)(a8 + 2860) = v22;
  v13 = *(_DWORD *)(a8 + 2688);
  if ( v13 != -1
    && off_1061BE18[4 * (*(_DWORD *)(a8 + 2688) & 0xFFF) + 2] == v13 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(a8 + 2688) & 0xFFF) + 1] )
  {
    sub_1002FE40(a8);
  }
  if ( a7 )
  {
    sub_100457E0(72);
    result = dword_106B31C8;
  }
  else
  {
    result = sub_100457E0(71);
  }
  *(float *)(a8 + 2560) = *(float *)(dword_106B31C8 + 12);
  return result;
}
