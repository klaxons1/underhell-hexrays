char __userpurge sub_103B3900@<al>(int a1@<ecx>, double a2@<st0>, float a3)
{
  unsigned int v4; // eax
  int *v5; // ecx
  unsigned int v6; // eax
  int v7; // edi
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // eax
  char v11; // al
  int v12; // edi
  char v13; // bl
  double v14; // st7
  float v15; // edi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  double v20; // st7
  double v21; // st7
  long double v22; // st7
  long double v23; // st6
  double v24; // st7
  double v25; // st6
  double v26; // st4
  double v27; // st4
  float v29; // [esp+14h] [ebp-14h]
  float v30; // [esp+14h] [ebp-14h]
  int v31; // [esp+18h] [ebp-10h]
  float v32; // [esp+24h] [ebp-4h]
  float v33; // [esp+24h] [ebp-4h]
  int v34; // [esp+24h] [ebp-4h]

  v4 = *(_DWORD *)(a1 + 3800);
  if ( v4 == -1 || (v5 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 3800) & 0xFFF) + 1], v6 = v4 >> 12, v5[1] != v6) || !*v5 )
  {
    if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1) )
    {
      if ( *(_BYTE *)(a1 + 3860) || !sub_102DC130((unsigned int *)(a1 + 3800)) )
        goto LABEL_28;
LABEL_27:
      sub_103AEED0((float *)a1, 490.0);
      goto LABEL_28;
    }
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 320))(v10);
    v12 = dword_106B31C8;
    v13 = v11;
    sub_10021820((void *)a1);
    v14 = *(float *)(v12 + 12) - a2;
    if ( v13 )
    {
      if ( sub_100B8E40((float *)(a1 + 3936)) )
      {
LABEL_20:
        if ( *(_BYTE *)(a1 + 3860) )
          goto LABEL_28;
        if ( !sub_102DC130((unsigned int *)(a1 + 3800)) )
          goto LABEL_28;
        if ( *(float *)(a1 + 3868) >= 490.0 )
          goto LABEL_28;
        v32 = v14;
        if ( v32 <= 7.0 )
          goto LABEL_28;
        goto LABEL_27;
      }
    }
    else if ( v14 >= 3.0 )
    {
      goto LABEL_20;
    }
    v15 = *(float *)a1;
    v16 = (*(int (__thiscall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 368))(a1, 1.0, 0.5, 0.0);
    v17 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 1868))(a1, v16);
    v18 = sub_10077560(v17, v31);
    v19 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 368))(a1, v18);
    (*(void (__thiscall **)(int, int))(LODWORD(v15) + 1704))(a1, v19);
    goto LABEL_20;
  }
  if ( v5[1] == v6 )
    v7 = *v5;
  else
    v7 = 0;
  if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
    sub_100DAE60(v7);
  v8 = *(_DWORD *)(a1 + 3800);
  if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3800) & 0xFFF) + 2] != v8 >> 12 )
    v9 = 0;
  else
    v9 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3800) & 0xFFF) + 1];
  (*(void (__thiscall **)(int, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 1704))(
    a1,
    v9,
    v7 + 580,
    1.0,
    0.5,
    0.0);
LABEL_28:
  if ( *(float *)(dword_106EB0E4 + 44) > 0.1 )
  {
    v20 = *(float *)(dword_106EB0E4 + 44);
    if ( v20 <= 490.0 )
    {
      if ( v20 < 200.0 )
        v20 = 200.0;
    }
    else
    {
      v20 = 490.0;
    }
    *(float *)(a1 + 3868) = v20;
  }
  if ( !*(_BYTE *)(a1 + 3860) )
  {
    if ( *(_BYTE *)(a1 + 3861) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 296))(a1) )
      {
        v21 = *(float *)(dword_106EB12C + 44) * 0.01 * 290.0 + 200.0;
        if ( *(float *)(a1 + 3868) < v21 )
        {
          v29 = v21;
          sub_103AEED0((float *)a1, v29);
        }
      }
    }
  }
  v33 = *(float *)(a1 + 3868);
  v22 = v33 - sub_100BE820(a1, dword_106EAD9C);
  v34 = -1;
  if ( v22 >= 0.0 )
    v34 = 1;
  v23 = v22;
  v24 = (double)v34;
  v25 = fabs(v23);
  if ( v25 > 0.01 )
  {
    if ( fabs(*(float *)(a1 + 3872)) < 10.0 )
      *(float *)(a1 + 3872) = 10.0 * v24;
    if ( *(float *)(a1 + 3872) * v24 * 0.4161 <= v25 )
    {
      v27 = *(float *)(a1 + 3872) * 0.5 + v24 * 150.0;
      *(float *)(a1 + 3872) = v27;
      if ( 0.4161 * (v27 * v24) > v25 )
        *(float *)(a1 + 3872) = v24 * v25 * 2.403268445085316;
    }
    else
    {
      v26 = *(float *)(a1 + 3872) * 0.8;
      *(float *)(a1 + 3872) = v26;
      if ( v26 * v24 * a3 > v25 )
        *(float *)(a1 + 3872) = v25 * v24 / a3;
    }
    v30 = sub_100BE820(a1, dword_106EAD9C) + *(float *)(a1 + 3872) * a3;
    sub_103B0A00(a1, v30);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1828))(a1);
  return 0;
}
