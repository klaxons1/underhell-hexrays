void __usercall sub_103E7ED0(int a1@<ecx>, int a2@<edi>)
{
  int v3; // eax
  int v4; // ecx
  double v5; // st7
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // edi
  int v18; // eax
  int v19; // edi
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // edi
  int v24; // eax
  unsigned int v25; // ecx
  int v26; // eax
  int v27; // [esp+18h] [ebp-30h] BYREF
  float v28; // [esp+1Ch] [ebp-2Ch]
  float v29; // [esp+20h] [ebp-28h]
  int v30; // [esp+24h] [ebp-24h] BYREF
  float v31; // [esp+28h] [ebp-20h]
  float v32; // [esp+2Ch] [ebp-1Ch]
  float v33; // [esp+30h] [ebp-18h] BYREF
  float v34; // [esp+34h] [ebp-14h]
  float v35; // [esp+38h] [ebp-10h]
  float v36; // [esp+3Ch] [ebp-Ch] BYREF
  float v37; // [esp+40h] [ebp-8h]
  float v38; // [esp+44h] [ebp-4h]

  if ( *(_DWORD *)(dword_106B945C + 48) && *(_DWORD *)(a1 + 52) )
  {
    v3 = sub_10269EC0((_DWORD *)a1);
    if ( v3 )
      v4 = v3 - 1120;
    else
      v4 = 0;
    (*(void (__thiscall **)(int, float *, float *, _DWORD, int))(*(_DWORD *)v4 + 528))(v4, &v36, &v33, 0, a2);
    v5 = 200.0;
    if ( (*(_BYTE *)(a1 + 52) & 8) != 0 )
    {
      *(float *)&v30 = v36 * 200.0;
      v31 = v37 * 200.0;
      v32 = 200.0 * v38;
      v6 = sub_10269EC0((_DWORD *)a1);
      if ( v6 )
        v7 = v6 - 1120;
      else
        v7 = 0;
      if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
        sub_100DAE60(v7);
      *(float *)&v27 = *(float *)(v7 + 580) + *(float *)&v30;
      v28 = *(float *)(v7 + 584) + v31;
      v29 = *(float *)(v7 + 588) + v32;
      v8 = sub_10269EC0((_DWORD *)a1);
      if ( v8 )
        v9 = v8 - 1120;
      else
        v9 = 0;
      if ( (*(_DWORD *)(v9 + 252) & 0x800) != 0 )
        sub_100DAE60(v9);
      sub_1011BC50((float *)(v9 + 580), (float *)&v27, 0, 255, 0, 1, 0.1);
      v5 = 200.0;
    }
    if ( (*(_BYTE *)(a1 + 52) & 0x10) != 0 )
    {
      *(float *)&v30 = v36 * v5;
      v31 = v37 * v5;
      v32 = v5 * v38;
      v10 = sub_10269EC0((_DWORD *)a1);
      if ( v10 )
        v11 = v10 - 1120;
      else
        v11 = 0;
      if ( (*(_DWORD *)(v11 + 252) & 0x800) != 0 )
        sub_100DAE60(v11);
      *(float *)&v27 = *(float *)(v11 + 580) - *(float *)&v30;
      v28 = *(float *)(v11 + 584) - v31;
      v29 = *(float *)(v11 + 588) - v32;
      v12 = sub_10269EC0((_DWORD *)a1);
      if ( v12 )
        v13 = v12 - 1120;
      else
        v13 = 0;
      if ( (*(_DWORD *)(v13 + 252) & 0x800) != 0 )
        sub_100DAE60(v13);
      sub_1011BC50((float *)(v13 + 580), (float *)&v27, 0, 255, 0, 1, 0.1);
      v5 = 200.0;
    }
    if ( (*(_DWORD *)(a1 + 52) & 0x200) != 0 )
    {
      *(float *)&v30 = v33 * v5;
      v31 = v34 * v5;
      v32 = v5 * v35;
      v14 = sub_10269EC0((_DWORD *)a1);
      if ( v14 )
        v15 = v14 - 1120;
      else
        v15 = 0;
      if ( (*(_DWORD *)(v15 + 252) & 0x800) != 0 )
        sub_100DAE60(v15);
      *(float *)&v27 = *(float *)(v15 + 580) - *(float *)&v30;
      v28 = *(float *)(v15 + 584) - v31;
      v29 = *(float *)(v15 + 588) - v32;
      v16 = sub_10269EC0((_DWORD *)a1);
      if ( v16 )
        v17 = v16 - 1120;
      else
        v17 = 0;
      if ( (*(_DWORD *)(v17 + 252) & 0x800) != 0 )
        sub_100DAE60(v17);
      sub_1011BC50((float *)(v17 + 580), (float *)&v27, 0, 255, 0, 1, 0.1);
      v5 = 200.0;
    }
    if ( (*(_DWORD *)(a1 + 52) & 0x400) != 0 )
    {
      *(float *)&v30 = v33 * v5;
      v31 = v34 * v5;
      v32 = v5 * v35;
      v18 = sub_10269EC0((_DWORD *)a1);
      if ( v18 )
        v19 = v18 - 1120;
      else
        v19 = 0;
      if ( (*(_DWORD *)(v19 + 252) & 0x800) != 0 )
        sub_100DAE60(v19);
      *(float *)&v27 = *(float *)&v30 + *(float *)(v19 + 580);
      v28 = *(float *)(v19 + 584) + v31;
      v29 = *(float *)(v19 + 588) + v32;
      v20 = sub_10269EC0((_DWORD *)a1);
      if ( v20 )
        v21 = v20 - 1120;
      else
        v21 = 0;
      if ( (*(_DWORD *)(v21 + 252) & 0x800) != 0 )
        sub_100DAE60(v21);
      sub_1011BC50((float *)(v21 + 580), (float *)&v27, 0, 255, 0, 1, 0.1);
    }
    if ( (*(_BYTE *)(a1 + 52) & 2) != 0 )
    {
      *(float *)&v27 = 20.0;
      v28 = 20.0;
      v29 = 20.0;
      *(float *)&v30 = -20.0;
      v31 = -20.0;
      v32 = -20.0;
      v22 = sub_10269EC0((_DWORD *)a1);
      if ( v22 )
        v23 = v22 - 1120;
      else
        v23 = 0;
      if ( (*(_DWORD *)(v23 + 252) & 0x800) != 0 )
        sub_100DAE60(v23);
      sub_1011BB20(v23 + 580, (int)&v30, (int)&v27, 0, 255, 0, 1, 0.1);
    }
  }
  v24 = sub_10269EC0((_DWORD *)a1);
  if ( v24 )
    v25 = v24 - 1120;
  else
    v25 = 0;
  sub_103E6B90(v25, *(_DWORD *)(a1 + 52), *(_DWORD *)(a1 + 52), *(float *)(a1 + 60));
  *(_DWORD *)(a1 + 52) &= 0xFFFFF7FE;
  v26 = sub_10269EC0((_DWORD *)a1);
  if ( v26 )
    sub_103E7AF0(v26 - 1120, 0.1);
  else
    sub_103E7AF0(0, 0.1);
}
