int __userpurge sub_1014AE10@<eax>(int a1@<ecx>, int a2@<ebx>, int a3, char a4, int a5)
{
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  double v10; // st7
  float *v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // edi
  int v16; // [esp+3Ch] [ebp-2Ch] BYREF
  int v17; // [esp+40h] [ebp-28h]
  int v18; // [esp+44h] [ebp-24h]
  int v19; // [esp+48h] [ebp-20h]
  int v20; // [esp+4Ch] [ebp-1Ch]
  int v21; // [esp+50h] [ebp-18h]
  int v22; // [esp+54h] [ebp-14h]
  int v23; // [esp+58h] [ebp-10h]
  _DWORD *v24; // [esp+5Ch] [ebp-Ch]
  int v25; // [esp+60h] [ebp-8h]
  int v26; // [esp+64h] [ebp-4h]

  v6 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10413168 + 116))(dword_10413168);
  v7 = *(_DWORD *)(a1 + 156);
  v25 = *v6;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v8 = *(_DWORD *)(v7 + 20);
  v24 = v6;
  *((_BYTE *)&v16 + (v8 >> 3)) |= 1 << (v8 & 7);
  *v6 = &v16;
  *(float *)(a1 + 76) = 2.0;
  v9 = *(_DWORD *)(a1 + 156);
  *(float *)(a1 + 80) = 56755.84;
  v26 = *(_DWORD *)(v9 + 4);
  if ( v26 > 0 )
  {
    v10 = 1.0 / (double)v26;
    *(float *)(a1 + 52) = *(float *)(a1 + 52) * v10;
    *(float *)(a1 + 56) = *(float *)(a1 + 56) * v10;
    *(float *)(a1 + 60) = v10 * *(float *)(a1 + 60);
  }
  sub_10146870(a1);
  v11 = *(float **)(a1 + 156);
  *(float *)(a1 + 52) = *(float *)(a1 + 52) + v11[2];
  *(float *)(a1 + 56) = v11[3] + *(float *)(a1 + 56);
  *(float *)(a1 + 60) = v11[4] + *(float *)(a1 + 60);
  (*(void (__thiscall **)(int, _DWORD, int, int, int))(*(_DWORD *)dword_10413168 + 84))(
    dword_10413168,
    0,
    1,
    *(_DWORD *)(a1 + 156) + 8,
    a2);
  (*(void (__thiscall **)(int, int, _DWORD, int, _DWORD))(*(_DWORD *)dword_10413168 + 152))(
    dword_10413168,
    a1 + 8,
    *(_DWORD *)(a1 + 136),
    a5,
    *(_DWORD *)(a1 + 124));
  sub_10144510((float *)(a1 + 52), (float *)(a1 + 64), a3);
  if ( a4 )
    sub_100D3280();
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10413168 + 184))(dword_10413168);
  sub_1014A8C0(a1, 1, 1, 1, 0, 0);
  sub_10143030((_DWORD *)a1, a3);
  (*(void (__thiscall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)dword_10413168 + 188))(
    dword_10413168,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v12 = *(_DWORD *)(a1 + 148);
  v13 = *(_DWORD *)(v12 + 16);
  (*(void (__thiscall **)(void *, int, _DWORD, int))(*(_DWORD *)off_103DD080 + 104))(
    off_103DD080,
    a1 + 8,
    *(_DWORD *)(v12 + 12),
    v13);
  sub_101438D0((int *)a1, 0.0);
  sub_1014AA40(a1, v13, 0);
  sub_10146330(a1, a1 + 8, 1u, 0);
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v14 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 8))(v14);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v14 + 172))(v14, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 12))(v14);
  (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 4))(v14);
  sub_100B0C30(*(float *)(a1 + 80), *(_BYTE *)(a1 + 121));
  sub_1005B2D0();
  *v24 = v25;
  if ( a4 )
  {
    sub_100D32F0();
    byte_1043BD08 = 0;
  }
  return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413168 + 160))(dword_10413168, *(_DWORD *)(a1 + 124));
}
