double __usercall sub_1005A5F0@<st0>(int a1@<ebp>, float *a2, char a3)
{
  float *v3; // eax
  double v4; // st4
  double v5; // st5
  _DWORD *v6; // eax
  float v7; // ecx
  float v8; // edx
  float *v9; // eax
  double v10; // st6
  double v11; // st7
  float *v12; // eax
  float v14; // [esp+10h] [ebp-F0h]
  float v15[22]; // [esp+24h] [ebp-DCh] BYREF
  _BYTE v16[12]; // [esp+7Ch] [ebp-84h] BYREF
  float v17[20]; // [esp+88h] [ebp-78h] BYREF
  void **v18; // [esp+D8h] [ebp-28h] BYREF
  float v19; // [esp+E4h] [ebp-1Ch] BYREF
  float v20; // [esp+E8h] [ebp-18h]
  float v21; // [esp+ECh] [ebp-14h]
  float v22; // [esp+F0h] [ebp-10h]
  int v23; // [esp+F4h] [ebp-Ch]
  void *v24; // [esp+F8h] [ebp-8h]
  void *retaddr; // [esp+100h] [ebp+0h]

  v23 = a1;
  v24 = retaddr;
  v3 = (float *)sub_101422C0();
  v4 = a2[1] - v3[1];
  v5 = a2[2] - v3[2];
  v14 = v5 * v5 + v4 * v4 + (*a2 - *v3) * (*a2 - *v3);
  v22 = off_103EDFE0(v14);
  v6 = (_DWORD *)sub_100422D0();
  if ( v6 )
    v22 = sub_100138E0(v6) * v22;
  if ( !a3 )
    return v22;
  v7 = a2[1];
  v8 = a2[2];
  v19 = *a2;
  v20 = v7;
  v21 = v8;
  if ( v22 > 4.0 )
  {
    v9 = (float *)sub_101422E0();
    v10 = 4.0 * v9[2];
    v11 = v9[1] * 4.0;
    v19 = v19 - *v9 * 4.0;
    v20 = v20 - v11;
    v21 = v21 - v10;
  }
  sub_1012D400(0, 0);
  v18 = &CTraceFilterGlow::`vftable';
  v12 = (float *)sub_101422C0();
  sub_1000E430(v15, v12, &v19);
  (*(void (__thiscall **)(int, float *, int, void ***, _BYTE *))(*(_DWORD *)dword_104131A0 + 16))(
    dword_104131A0,
    v15,
    100679809,
    &v18,
    v16);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0((int)v16, (int)v17, 255, 0, 0, 1, -1.0);
  if ( 1.0 == v17[8] )
    return v22;
  else
    return -1.0;
}
