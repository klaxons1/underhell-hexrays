// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_1002BF70@<al>(
        char *a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        float *a5,
        int a6,
        char a7)
{
  float *v8; // eax
  _DWORD *v10; // edi
  int (__thiscall *v11)(char *); // edx
  int v12; // eax
  int v13; // eax
  int v14; // edi
  _DWORD *v15; // eax
  int v16; // eax
  float v18[22]; // [esp+24h] [ebp-DCh] BYREF
  _BYTE v19[12]; // [esp+7Ch] [ebp-84h] BYREF
  float v20[16]; // [esp+88h] [ebp-78h] BYREF
  _DWORD *v21; // [esp+C8h] [ebp-38h]
  int v22; // [esp+D8h] [ebp-28h] BYREF
  float v23[2]; // [esp+E4h] [ebp-1Ch] BYREF
  float v24; // [esp+ECh] [ebp-14h]
  _DWORD *v25; // [esp+F0h] [ebp-10h]
  int v26; // [esp+F4h] [ebp-Ch]
  void *v27; // [esp+F8h] [ebp-8h]
  void *retaddr; // [esp+100h] [ebp+0h]

  v26 = a2;
  v27 = retaddr;
  v8 = (float *)(*(int (__thiscall **)(char *, int, int))(*(_DWORD *)a1 + 532))(a1, a3, a4);
  v23[0] = *v8 + *a5;
  v23[1] = v8[1] + a5[1];
  v24 = v8[2] + a5[2];
  sub_1001F180(v18, v23, (float *)LODWORD(v24));
  sub_10265570(a1, 0);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v18,
    1174421507,
    &v22,
    v19);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v19, (int)v20, 255, 0, 0, 1, 5.0);
  if ( 1.0 == v20[8] )
    return 1;
  v10 = v21;
  v11 = *(int (__thiscall **)(char *))(*(_DWORD *)a1 + 368);
  v25 = v21;
  if ( v11(a1) )
  {
    v12 = (*(int (__thiscall **)(char *))(*(_DWORD *)a1 + 368))(a1);
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 288))(v12);
    v14 = v13;
    if ( v13 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 1088))(v13) )
      {
        v15 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 1096))(v14);
        if ( v25 == v15 || (_DWORD *)sub_10019B00(v25) == v15 )
          return 1;
      }
    }
    v10 = v25;
  }
  if ( v10 == (_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)a1 + 368))(a1) )
    return 1;
  if ( !v10 || !(*(int (__thiscall **)(_DWORD *))(*v10 + 288))(v10) )
  {
    if ( a7 )
    {
      (*(void (__thiscall **)(char *))(*(_DWORD *)a1 + 2160))(a1);
      v16 = sub_1007DB30(45);
      if ( v16 != -1 && v16 != 999999999 )
        *(_DWORD *)&a1[4 * ((v16 - 1000000000) >> 5) + 2192] |= 1 << (v16 & 0x1F);
      sub_100207F0(a1, (int)v21);
    }
    return 0;
  }
  if ( (*(int (__thiscall **)(char *, _DWORD *))(*(_DWORD *)a1 + 1080))(a1, v10) == 1 )
    return 1;
  if ( a7 )
  {
    sub_10023CB0(a1, 42);
    return 0;
  }
  return 0;
}
