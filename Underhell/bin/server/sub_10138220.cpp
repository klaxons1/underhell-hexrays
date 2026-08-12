int __usercall sub_10138220@<eax>(int a1@<ecx>, int a2@<ebp>)
{
  int v2; // esi
  char *v3; // eax
  int v4; // edi
  float *v5; // eax
  float v6; // ecx
  float v7; // edx
  float v8; // eax
  int v9; // eax
  _DWORD *v10; // eax
  unsigned int v13; // edi
  int *v14; // ecx
  int v15; // ecx
  double v16; // st7
  int v17; // edi
  int v18; // ecx
  void *v19; // esi
  int v20; // [esp+18h] [ebp-DCh]
  void *v21; // [esp+1Ch] [ebp-D8h]
  float v22[20]; // [esp+28h] [ebp-CCh] BYREF
  _BYTE v23[12]; // [esp+78h] [ebp-7Ch] BYREF
  float v24[19]; // [esp+84h] [ebp-70h] BYREF
  int v25; // [esp+D0h] [ebp-24h] BYREF
  float v26; // [esp+DCh] [ebp-18h] BYREF
  float v27; // [esp+E0h] [ebp-14h]
  float v28; // [esp+E4h] [ebp-10h]
  int v29; // [esp+E8h] [ebp-Ch]
  void *v30; // [esp+ECh] [ebp-8h]
  void *retaddr; // [esp+F4h] [ebp+0h]

  v13 = *(_DWORD *)(a1 + 192) & 0xFFFFFFDF;
  if ( *(_DWORD *)(a1 + 192) != v13 )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v14 = *(int **)(a1 + 24);
      if ( v14 )
        sub_100194B0(v14, 192);
    }
    *(_DWORD *)(a1 + 192) = v13;
  }
  if ( *(_DWORD *)(a1 + 24) )
    **(_DWORD **)(a1 + 24) |= 0x80u;
  sub_100D8500((_DWORD *)a1);
  v15 = *(_DWORD *)(a1 + 972);
  if ( v15 )
    sub_10242BA0(v15);
  v16 = *(float *)(dword_106B31C8 + 12);
  v28 = 0.0;
  *(float *)(a1 + 808) = v16;
  sub_100EC3F0((_DWORD *)a1, (int)&loc_10137F40, 0.0, SLODWORD(v28));
  v17 = v29;
  v18 = a1;
  v19 = v30;
  v29 = a2;
  v30 = retaddr;
  v21 = v19;
  v2 = v18;
  v3 = *(char **)(v18 + 968);
  v20 = v17;
  if ( !v3 )
    v3 = (char *)String;
  v4 = sub_100F9520(v3);
  v5 = (float *)sub_100F9A90((_DWORD *)v2);
  v6 = *v5;
  v7 = v5[1];
  v8 = v5[2];
  v26 = v6;
  v27 = v7;
  v28 = v8;
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
      sub_100DAE60(v4);
    v26 = *(float *)(v4 + 580);
    v27 = *(float *)(v4 + 584);
    v28 = *(float *)(v4 + 588);
  }
  if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
    sub_100DAE60(v2);
  sub_1001F180(v22, (float *)(v2 + 580), &v26);
  sub_10265570(0, 0);
  (*(void (__thiscall **)(int, float *, int, int *, _BYTE *, int, void *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v22,
    33570827,
    &v25,
    v23,
    v20,
    v21);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v23, (int)v24, 255, 0, 0, 1, 5.0);
  sub_100FAB60(v2, v24);
  v9 = *(_DWORD *)(v2 + 972);
  if ( v9 )
    sub_1025F370(v9, v24, 0);
  if ( *(float *)(v2 + 808) + 0.1 <= *(float *)(dword_106B31C8 + 12) )
  {
    sub_100F9D30((float *)v2, (int)v23);
    v10 = sub_100F9650((_DWORD *)v2);
    sub_100F9CD0((_DWORD *)v2, (int)v10, (int)v24);
  }
  return sub_100EC4A0((int *)v2, *(float *)(dword_106B31C8 + 12), 0);
}
