// bad sp value at call has been detected, the output may be wrong!
bool __userpurge sub_10343AE0@<al>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, char *a5)
{
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int (__thiscall *v10)(char *); // edx
  float *v11; // eax
  float v14[20]; // [esp+24h] [ebp-DCh] BYREF
  _BYTE v15[12]; // [esp+74h] [ebp-8Ch] BYREF
  int v16; // [esp+80h] [ebp-80h] BYREF
  float v17; // [esp+A0h] [ebp-60h]
  int v18; // [esp+C0h] [ebp-40h]
  float v19[3]; // [esp+D0h] [ebp-30h] BYREF
  int v20; // [esp+DCh] [ebp-24h] BYREF
  int v21; // [esp+E0h] [ebp-20h]
  char *v22; // [esp+E4h] [ebp-1Ch]
  int v23; // [esp+E8h] [ebp-18h] BYREF
  int v24; // [esp+ECh] [ebp-14h]
  int v25; // [esp+F0h] [ebp-10h]
  _DWORD v26[3]; // [esp+F4h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+100h] [ebp+0h]

  v26[0] = a2;
  v26[1] = retaddr;
  sub_10343750((int)a1, (int)v19, a5);
  if ( (a1[63] & 0x800) != 0 )
    sub_100DAE60((int)a1);
  v6 = a1[146];
  v7 = a1[147];
  v23 = a1[145];
  v24 = v6;
  v25 = v7;
  sub_1001F180(v14, (float *)&v23, v19);
  sub_10265570(&v20, (int)a5, 0);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v14,
    1174421507,
    &v20,
    v15,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v15, (int)&v16, 255, 0, 0, 1, 5.0);
  if ( 1.0 == v17 )
    return 1;
  if ( (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)a5 + 320))(a5) )
  {
    if ( (a1[63] & 0x800) != 0 )
      sub_100DAE60((int)a1);
    v8 = a1[146];
    v9 = a1[147];
    v23 = 0;
    v22 = a5;
    v24 = v8;
    v10 = *(int (__thiscall **)(char *))(*(_DWORD *)a5 + 504);
    v25 = v9;
    v21 = 1174421507;
    v20 = (int)&v20;
    v11 = (float *)v10(a5);
    sub_1002A5F0((int)v26, (int)a1, (float *)&v23, v11, v21, (int)v22, v23, v24);
    if ( 1.0 == v17 )
      return 1;
  }
  return v18 && *(_BYTE *)(v18 + 225) == 2;
}
