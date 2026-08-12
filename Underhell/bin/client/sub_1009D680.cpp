// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_1009D680@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<esi>, float *a4, float *a5, int a6)
{
  int v7; // eax
  _DWORD *v8; // eax
  float *v9; // eax
  double v10; // st7
  double v11; // st6
  double v12; // st5
  double v13; // st7
  double v14; // st4
  double v15; // rt1
  float *v16; // eax
  double v17; // st7
  double v18; // st7
  char v19; // al
  float v22[20]; // [esp+28h] [ebp-CCh] BYREF
  _BYTE v23[12]; // [esp+78h] [ebp-7Ch] BYREF
  float v24[19]; // [esp+84h] [ebp-70h] BYREF
  float v25[3]; // [esp+D0h] [ebp-24h] BYREF
  void **v26; // [esp+DCh] [ebp-18h] BYREF
  int v27; // [esp+E0h] [ebp-14h]
  float v28; // [esp+E4h] [ebp-10h]
  int v29; // [esp+E8h] [ebp-Ch]
  void *v30; // [esp+ECh] [ebp-8h]
  void *retaddr; // [esp+F4h] [ebp+0h]

  v29 = a2;
  v30 = retaddr;
  v7 = *(_DWORD *)(a1 + 16);
  if ( !v7 || *(_DWORD *)(v7 + 36) != *(_DWORD *)(a1 + 8) )
  {
    v8 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413164 + 16))(
                     dword_10413164,
                     *(_DWORD *)(a1 + 8));
    *(_DWORD *)(a1 + 16) = v8;
    *v8 = 0;
    *(float *)(*(_DWORD *)(a1 + 16) + 16) = 80.0;
  }
  v9 = *(float **)(a1 + 16);
  v9[11] = *a5;
  v9[12] = a5[1];
  v9[13] = a5[2];
  v10 = (double)a6;
  v26 = &CTraceFilterSkipPlayerAndViewModel::`vftable';
  v28 = v10;
  v11 = *a5 * v10;
  v12 = v10;
  v13 = a5[1] * v10;
  v14 = a4[1];
  v15 = v12 * a5[2] + a4[2];
  v25[0] = v11 + *a4;
  v25[1] = v13 + v14;
  v25[2] = v15;
  sub_1000E430(v22, a4, v25);
  (*(void (__thiscall **)(int, float *, int, void ***, _BYTE *, int))(*(_DWORD *)dword_104131A0 + 16))(
    dword_104131A0,
    v22,
    -1,
    &v26,
    v23,
    a3);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0((int)v23, (int)v24, 255, 0, 0, 1, -1.0);
  v16 = *(float **)(a1 + 16);
  v16[1] = v24[0];
  v16[2] = v24[1];
  v16[3] = v24[2];
  v17 = v28 * v24[8];
  if ( v17 >= 500.0 )
    v18 = 500.0 / v17;
  else
    v18 = 1.0;
  *(float *)(*(_DWORD *)(a1 + 16) + 16) = 80.0;
  v27 = (int)(v18 * v18 * 255.0);
  v19 = v27;
  *(_BYTE *)(*(_DWORD *)(a1 + 16) + 22) = v27;
  *(_BYTE *)(*(_DWORD *)(a1 + 16) + 21) = v19;
  *(_BYTE *)(*(_DWORD *)(a1 + 16) + 20) = v19;
  *(_BYTE *)(*(_DWORD *)(a1 + 16) + 23) = 0;
  *(float *)(*(_DWORD *)(a1 + 16) + 24) = *((float *)off_103DC81C + 3) + 0.2;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413168 + 8))(dword_10413168, *(_DWORD *)(a1 + 16));
  return sub_1009D300(a1);
}
