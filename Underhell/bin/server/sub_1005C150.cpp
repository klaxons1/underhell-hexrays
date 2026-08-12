// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_1005C150@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>)
{
  int v5; // esi
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  float v12[20]; // [esp+24h] [ebp-DCh] BYREF
  _BYTE v13[12]; // [esp+74h] [ebp-8Ch] BYREF
  int v14; // [esp+80h] [ebp-80h] BYREF
  int v15; // [esp+CCh] [ebp-34h] BYREF
  float v16[3]; // [esp+D8h] [ebp-28h] BYREF
  int v17; // [esp+E4h] [ebp-1Ch] BYREF
  int v18; // [esp+F0h] [ebp-10h]
  int v19; // [esp+F4h] [ebp-Ch]
  void *v20; // [esp+F8h] [ebp-8h]
  void *retaddr; // [esp+100h] [ebp+0h]

  v19 = a2;
  v20 = retaddr;
  v5 = *(_DWORD *)(a1 + 4);
  v6 = *(_DWORD *)(v5 + 252) >> 11;
  v18 = a1;
  if ( (v6 & 1) != 0 )
    sub_100DAE60(v5);
  v7 = *(_DWORD *)(a1 + 4);
  v8 = *(_DWORD *)(v7 + 252);
  v16[0] = *(float *)(v5 + 580);
  v16[1] = *(float *)(v5 + 584);
  v16[2] = *(float *)(v5 + 588) - 8192.0;
  if ( (v8 & 0x800) != 0 )
    sub_100DAE60(v7);
  sub_1001F180(v12, (float *)(v7 + 580), v16);
  sub_10265570(v5, 0);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v12,
    1174421507,
    &v15,
    v13,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v13, (int)&v14, 255, 0, 0, 1, 5.0);
  if ( (*(_DWORD *)(*(_DWORD *)(v18 + 4) + 252) & 0x800) != 0 )
    sub_100DAE60(*(_DWORD *)(v18 + 4));
  return sub_100DD660(&v17);
}
