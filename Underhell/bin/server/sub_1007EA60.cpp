// bad sp value at call has been detected, the output may be wrong!
bool __userpurge sub_1007EA60@<al>(
        int a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        float *a5,
        int a6,
        char a7,
        char a8)
{
  float v9; // eax
  float v10; // ecx
  float *v11; // eax
  int v12; // ecx
  float *v13; // eax
  int v15; // [esp+10h] [ebp-F0h]
  float v17[20]; // [esp+24h] [ebp-DCh] BYREF
  _BYTE v18[12]; // [esp+74h] [ebp-8Ch] BYREF
  _BYTE v19[80]; // [esp+80h] [ebp-80h] BYREF
  int v20; // [esp+D0h] [ebp-30h] BYREF
  float v21[2]; // [esp+E4h] [ebp-1Ch] BYREF
  float v22; // [esp+ECh] [ebp-14h]
  float *v23; // [esp+F0h] [ebp-10h]
  int v24; // [esp+F4h] [ebp-Ch]
  void *v25; // [esp+F8h] [ebp-8h]
  void *retaddr; // [esp+100h] [ebp+0h]

  v24 = a2;
  v25 = retaddr;
  sub_100B8E60(*(_DWORD *)(a1 + 4), a7, *(_DWORD *)(a1 + 4), 0, a8);
  v9 = *a5;
  v10 = a5[1];
  v22 = a5[2];
  v21[0] = v9;
  v15 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 1676);
  v22 = v22 + 0.01;
  v21[1] = v10;
  v11 = (float *)sub_10073730(v15);
  v12 = *(_DWORD *)(a1 + 4);
  v23 = v11;
  v13 = (float *)sub_10073710(*(_DWORD *)(v12 + 1676));
  sub_1001F200(v17, a5, v21, v13, v23);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v17,
    a6,
    &v20,
    v18,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v18, (int)v19, 255, 255, 0, 1, -1.0);
  return v19[43] == 0;
}
