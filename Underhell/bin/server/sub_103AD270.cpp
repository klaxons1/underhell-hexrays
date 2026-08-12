// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_103AD270@<al>(
        int a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        float *a5,
        float *a6,
        char a7)
{
  float v7; // edx
  float v9; // eax
  double v10; // st6
  double v11; // st7
  int v13; // edi
  int v14; // eax
  float v16[22]; // [esp+24h] [ebp-DCh] BYREF
  _BYTE v17[12]; // [esp+7Ch] [ebp-84h] BYREF
  float v18[16]; // [esp+88h] [ebp-78h] BYREF
  int v19; // [esp+C8h] [ebp-38h]
  float v20; // [esp+D8h] [ebp-28h] BYREF
  float v21; // [esp+DCh] [ebp-24h]
  float v22; // [esp+E0h] [ebp-20h]
  float v23; // [esp+E4h] [ebp-1Ch] BYREF
  float v24; // [esp+E8h] [ebp-18h]
  float v25; // [esp+ECh] [ebp-14h]
  int v26; // [esp+F0h] [ebp-10h]
  int v27; // [esp+F4h] [ebp-Ch]
  void *v28; // [esp+F8h] [ebp-8h]
  void *retaddr; // [esp+100h] [ebp+0h]

  v27 = a2;
  v28 = retaddr;
  v7 = a5[1];
  v9 = a5[2];
  v23 = *a5;
  v24 = v7;
  v25 = v9;
  sub_100BD6D0((void *)a1, 1, (int)&v20, 0, 0, 0);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v10 = v21 - *(float *)(a1 + 584) + v24;
  v11 = v22 - *(float *)(a1 + 588) + v25;
  v20 = v20 - *(float *)(a1 + 580) + v23;
  v21 = v10;
  v22 = v11;
  sub_1001F180(v16, &v20, a6);
  sub_10265570(&v23, a1, 0);
  (*(void (__thiscall **)(int, float *, int, float *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v16,
    1174421507,
    &v23,
    v17,
    a3,
    a4);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v17, (int)v18, 255, 0, 0, 1, 5.0);
  if ( 1.0 == v18[8] )
    return 1;
  v26 = v19;
  v13 = v19 ? (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 288))(v19) : 0;
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
  if ( v26 == v14 )
    return 1;
  if ( !v13 )
  {
    if ( a7 )
    {
      sub_10023CB0((char *)a1, 45);
      sub_100207F0((_DWORD *)a1, v26);
    }
    return 0;
  }
  if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 1080))(a1, v13) == 1 )
    return 1;
  if ( a7 )
  {
    sub_10023CB0((char *)a1, 42);
    return 0;
  }
  return 0;
}
