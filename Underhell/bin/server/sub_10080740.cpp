char __thiscall sub_10080740(int this)
{
  _DWORD *v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // esi
  int (__thiscall *v10)(int); // eax
  float *v11; // edi
  float *v12; // eax
  int v13; // ecx
  double v14; // st7
  double v15; // st6
  double v16; // rt0
  double v17; // st6
  double v18; // st7
  double v19; // rt1
  char v20; // al
  int v21; // edx
  char *v22; // eax
  int v23; // ebx
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  int v28; // ebx
  int v29; // eax
  double v30; // st7
  char *v31; // [esp-18h] [ebp-94h]
  int v32; // [esp-14h] [ebp-90h]
  _BYTE v33[84]; // [esp+4h] [ebp-78h] BYREF
  _DWORD v34[3]; // [esp+58h] [ebp-24h] BYREF
  float v35; // [esp+64h] [ebp-18h] BYREF
  float v36; // [esp+68h] [ebp-14h]
  float v37; // [esp+6Ch] [ebp-10h]
  int v38; // [esp+70h] [ebp-Ch]
  int v39; // [esp+74h] [ebp-8h]
  char v40; // [esp+79h] [ebp-3h]
  char v41; // [esp+7Ah] [ebp-2h]
  char v42; // [esp+7Bh] [ebp-1h]

  if ( !*(_BYTE *)(this + 92) )
    return 0;
  v2 = *(_DWORD **)(this + 36);
  if ( !v2 || !*v2 )
    return 0;
  v3 = v2[11];
  v4 = *(_DWORD *)(*v2 + 16);
  v42 = 0;
  v38 = v3;
  v39 = v4;
  if ( v4 == -1 )
    return v42;
  if ( !(unsigned __int8)sub_103E0CF0(0)
    || (v5 = sub_1026A890(this + 128), (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5))
    || (v6 = sub_1026A890(this + 128), (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 284))(v6))
    || *(_BYTE *)(sub_1026A890(this + 128) + 306) != 6
    || !*(_DWORD *)(sub_1026A890(this + 128) + 424)
    || (v7 = sub_1026A890(this + 128),
        (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v7 + 424) + 40))(*(_DWORD *)(v7 + 424)))
    && (v8 = sub_1026A890(this + 128),
        ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(v8 + 424) + 116))(*(_DWORD *)(v8 + 424)) <= 200.0) )
  {
LABEL_34:
    if ( v3 != -1 )
    {
      v28 = *(_DWORD *)(this + 32);
      if ( v3 < 0 || v3 >= *(_DWORD *)(v28 + 4) )
        ++dword_10691DE0;
      v29 = sub_1008D320(v39);
      if ( v29 )
      {
        *(_BYTE *)(v29 + 14) |= 1u;
        v30 = *(float *)(dword_106B31C8 + 12);
        v42 = 1;
        *(float *)(v29 + 16) = v30 + 4.0;
      }
    }
    return v42;
  }
  v9 = sub_1026A890(this + 128);
  v10 = *(int (__thiscall **)(int))(*(_DWORD *)(v9 + 320) + 4);
  v41 = 0;
  v40 = 0;
  v11 = (float *)v10(v9 + 320);
  v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(v9 + 320) + 8))(v9 + 320);
  v13 = 0;
  v35 = *v12 - *v11;
  v36 = v12[1] - v11[1];
  v37 = v12[2] - v11[2];
  v14 = 40.0;
  v15 = 30.0;
  while ( 1 )
  {
    v16 = v15;
    v17 = v14;
    v18 = v16;
    if ( v17 < *(&v35 + v13) )
      v41 = 1;
    v19 = v17;
    v15 = v18;
    v14 = v19;
    if ( v15 > *(&v35 + v13) )
      break;
    if ( ++v13 >= 3 )
    {
      v20 = v40;
      goto LABEL_19;
    }
  }
  v20 = 1;
LABEL_19:
  if ( !v41 || v20 )
    goto LABEL_33;
  v21 = *(_DWORD *)(*(_DWORD *)(this + 4) + 1676);
  if ( v39 < 0 || v39 >= *(_DWORD *)(*(_DWORD *)(this + 32) + 4) )
    ++dword_10691DE0;
  sub_1008D160(&v35, v21);
  *(float *)v34 = v35;
  *(float *)&v34[1] = v36;
  *(float *)&v34[2] = v37 + 0.01;
  v32 = sub_1026A890(this + 128);
  v31 = sub_10079C60((_DWORD *)this);
  v22 = sub_10079C40((_DWORD *)this);
  sub_10265810(&v35, v34, v22, v31, v32, 0, v33);
  if ( !v33[55] )
  {
LABEL_33:
    v3 = v38;
    goto LABEL_34;
  }
  v23 = *(_DWORD *)(this + 32);
  if ( v39 < 0 || v39 >= *(_DWORD *)(v23 + 4) )
  {
    ++dword_10691DE0;
    v24 = 0;
  }
  else
  {
    v24 = *(_DWORD *)(*(_DWORD *)(v23 + 8) + 4 * v39);
  }
  v25 = 0;
  if ( *(int *)(v24 + 84) <= 0 )
    return v42;
  v42 = 1;
  do
  {
    v26 = *(_DWORD *)(*(_DWORD *)(v24 + 72) + 4 * v25);
    *(_BYTE *)(v26 + 14) |= 1u;
    ++v25;
    *(float *)(v26 + 16) = *(float *)(dword_106B31C8 + 12) + 4.0;
  }
  while ( v25 < *(_DWORD *)(v24 + 84) );
  return v42;
}
