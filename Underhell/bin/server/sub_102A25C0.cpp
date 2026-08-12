int __usercall sub_102A25C0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  bool v3; // zf
  int v4; // eax
  int v6; // edi
  int v7; // ecx
  int v8; // ecx
  int v9; // edi
  double v10; // st4
  int v11; // edx
  _BYTE v12[12]; // [esp+4h] [ebp-54h] BYREF
  float v13[3]; // [esp+10h] [ebp-48h] BYREF
  float v14[3]; // [esp+1Ch] [ebp-3Ch] BYREF
  float v15[3]; // [esp+28h] [ebp-30h] BYREF
  float v16; // [esp+34h] [ebp-24h]
  float v17; // [esp+38h] [ebp-20h]
  float v18; // [esp+3Ch] [ebp-1Ch]
  float v19; // [esp+40h] [ebp-18h]
  float v20; // [esp+44h] [ebp-14h]
  float v21; // [esp+48h] [ebp-10h]
  float v22; // [esp+4Ch] [ebp-Ch] BYREF
  float v23; // [esp+50h] [ebp-8h]
  float v24; // [esp+54h] [ebp-4h]

  v3 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 368))(*(_DWORD *)(a1 + 4)) == 0;
  v4 = **(_DWORD **)(a1 + 4);
  if ( v3 )
    return (*(int (**)(void))(v4 + 1840))();
  (*(void (__stdcall **)(float *, float *, float *, int))(v4 + 528))(v13, v14, v15, a2);
  v6 = *(_DWORD *)(a1 + 4);
  v7 = *(_DWORD *)(v6 + 252) >> 11;
  v16 = v15[0] * 48.0;
  v17 = v15[1] * 48.0;
  v18 = 48.0 * v15[2];
  if ( (v7 & 1) != 0 )
    sub_100DAE60(v6);
  v8 = *(_DWORD *)(a1 + 4);
  v22 = *(float *)(v6 + 580) + v16;
  v23 = *(float *)(v6 + 584) + v17;
  v24 = *(float *)(v6 + 588) + v18;
  (*(void (__thiscall **)(int, _BYTE *, float *))(*(_DWORD *)v8 + 2096))(v8, v12, &v22);
  v9 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 368))(*(_DWORD *)(a1 + 4));
  if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
    sub_100DAE60(v9);
  v19 = *(float *)(v9 + 580) - v22;
  v20 = *(float *)(v9 + 584) - v23;
  v21 = *(float *)(v9 + 588) - v24;
  off_10689714();
  v10 = 0.0;
  if ( v14[2] * v21 + v14[1] * v20 + v14[0] * v19 > 0.0 )
    v10 = -0.69999999;
  v11 = **(_DWORD **)(a1 + 4);
  if ( v10 < v21 * v13[2] + v20 * v13[1] + v19 * v13[0] )
    return (*(int (__stdcall **)(_BYTE *))(v11 + 1836))(v12);
  else
    return (*(int (**)(void))(v11 + 1840))();
}
