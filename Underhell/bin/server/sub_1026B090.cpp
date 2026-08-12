// bad sp value at call has been detected, the output may be wrong!
void __userpurge sub_1026B090(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, int a5, int a6)
{
  int v7; // edx
  int v8; // eax
  char v9; // al
  float v11[22]; // [esp+2Ch] [ebp-DCh] BYREF
  _BYTE v12[12]; // [esp+84h] [ebp-84h] BYREF
  _WORD v13[40]; // [esp+90h] [ebp-78h] BYREF
  _DWORD v14[3]; // [esp+E0h] [ebp-28h] BYREF
  float v15[3]; // [esp+ECh] [ebp-1Ch] BYREF
  int v16; // [esp+F8h] [ebp-10h]
  int v17; // [esp+FCh] [ebp-Ch]
  void *v18; // [esp+100h] [ebp-8h]
  void *retaddr; // [esp+108h] [ebp+0h]

  v17 = a2;
  v18 = retaddr;
  (*(void (__thiscall **)(_DWORD, int, int, int, int))(**(_DWORD **)(a1 + 48) + 12))(
    *(_DWORD *)(a1 + 48),
    a5,
    a6,
    a3,
    a4);
  if ( (*(_DWORD *)(a5 + 252) & 0x800) != 0 )
    sub_100DAE60(a5);
  v7 = *(_DWORD *)(a5 + 252);
  v15[0] = *(float *)(a5 + 580);
  v15[1] = *(float *)(a5 + 584);
  v15[2] = *(float *)(a5 + 588) - 256.0;
  if ( (v7 & 0x800) != 0 )
    sub_100DAE60(a5);
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 32))(a1);
  sub_1001F180(v11, (float *)(a5 + 580), v15);
  sub_10265570(v14, v16, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v11,
    33636363,
    v14,
    v12);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v12, (int)v13, 255, 0, 0, 1, 5.0);
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B6E60 + 40))(dword_106B6E60);
  v9 = *(_BYTE *)((*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 20))(v8, v13[26]) + 72);
  LOBYTE(v16) = v9;
  if ( *(_BYTE *)(a1 + 140) == v9 )
  {
    *(_BYTE *)(a1 + 140) = v9;
  }
  else
  {
    sub_101319B0(a5, v16);
    *(_BYTE *)(a1 + 140) = v16;
  }
}
