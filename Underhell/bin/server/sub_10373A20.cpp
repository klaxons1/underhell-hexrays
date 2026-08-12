// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_10373A20@<al>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, float *a5)
{
  char *v6; // eax
  float v7; // ecx
  float v8; // edx
  float *v9; // eax
  float v10; // ecx
  float v11; // edx
  float v12; // eax
  int v14; // [esp+Ch] [ebp-F4h]
  float v16[20]; // [esp+24h] [ebp-DCh] BYREF
  _BYTE v17[12]; // [esp+74h] [ebp-8Ch] BYREF
  int v18; // [esp+80h] [ebp-80h] BYREF
  char v19; // [esp+ABh] [ebp-55h]
  float v20[3]; // [esp+CCh] [ebp-34h] BYREF
  float v21; // [esp+D8h] [ebp-28h] BYREF
  float v22; // [esp+DCh] [ebp-24h]
  int v23; // [esp+E0h] [ebp-20h]
  float v24[2]; // [esp+E4h] [ebp-1Ch] BYREF
  float v25; // [esp+ECh] [ebp-14h]
  char v26; // [esp+F3h] [ebp-Dh]
  _DWORD v27[3]; // [esp+F4h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+100h] [ebp+0h]

  v27[0] = a2;
  v27[1] = retaddr;
  v6 = sub_10073710(*(_DWORD *)(a1 + 1676));
  v7 = *(float *)v6;
  v8 = *((float *)v6 + 1);
  v23 = *((_DWORD *)v6 + 2);
  v14 = *(_DWORD *)(a1 + 1676);
  v21 = v7;
  v22 = v8;
  v9 = (float *)sub_10073730(v14);
  v10 = *v9;
  v11 = v9[1];
  v12 = v9[2];
  v21 = v21 - 16.0;
  v25 = v12;
  v22 = v22 - 16.0;
  v24[0] = v10 + 16.0;
  v26 = 0;
  v24[1] = v11 + 16.0;
  v25 = v12 - (double)*(int *)(dword_106E918C + 48);
  sub_1001F200(v16, a5, a5, &v21, v24);
  sub_10265570(v20, a1, 0);
  (*(void (__thiscall **)(int, float *, int, float *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v16,
    33701899,
    v20,
    v17,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v17, (int)&v18, 255, 255, 0, 1, -1.0);
  if ( v19 && (v20[0] = *a5, sub_100231A0((int)v27, a1, v20, a5, &v21, v24, 33701899, a1, 0, (int)v17), v19) )
    return v26;
  else
    return 1;
}
