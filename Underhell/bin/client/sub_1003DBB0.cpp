int __thiscall sub_1003DBB0(int this, int a2)
{
  int v3; // edi
  char v4; // al
  bool v5; // al
  bool v6; // dl
  bool v7; // al
  bool v8; // bl
  unsigned int v9; // eax
  _DWORD *v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // edx
  int v14; // eax
  int v15; // edx
  unsigned int v16; // eax
  int v17; // ebx
  unsigned int v18; // eax
  int v19; // ecx
  char v20; // al
  int v22; // [esp+10h] [ebp-1Ch]
  float v23; // [esp+14h] [ebp-18h]
  int v24; // [esp+14h] [ebp-18h]
  int v25; // [esp+14h] [ebp-18h]
  int v26; // [esp+24h] [ebp-8h]
  bool v27; // [esp+2Bh] [ebp-1h]
  int v28; // [esp+34h] [ebp+8h]

  v26 = dword_1047CA8C;
  (*(void (**)(void))(*(_DWORD *)dword_1047CA8C + 100))();
  if ( *(_BYTE *)(this + 76) != 23 || a2 )
  {
    v3 = this - 8;
    if ( *(_BYTE *)(this + 76) != 23 )
    {
      sub_10034A30((float *)(this - 8), (float *)(v3 + 708));
      sub_10034B10((float *)v3, (float *)(v3 + 720));
    }
  }
  else
  {
    v3 = this - 8;
    sub_10034A30((float *)(this - 8), (float *)(this - 8 + 708));
    sub_10034B10((float *)(this - 8), (float *)(this - 8 + 720));
  }
  if ( !*(_DWORD *)(this + 72) )
  {
    *(_WORD *)(this + 124) = 1;
    sub_1008FA90(1);
    sub_10037BA0(v3, &flt_10459240);
    sub_10037CA0(v3, &flt_1045924C);
  }
  v4 = *(_BYTE *)(this + 108);
  if ( *(_BYTE *)(this + 109) != v4 )
    *(_BYTE *)(this + 108) = v4;
  v27 = *(float *)(this + 92) != *(float *)(this + 88);
  v5 = *(float *)(this + 516) != *(float *)(this + 540)
    || *(float *)(this + 520) != *(float *)(this + 544)
    || *(float *)(this + 524) != *(float *)(this + 548);
  v6 = v5;
  v7 = *(float *)(this + 528) != *(float *)(this + 596)
    || *(float *)(this + 532) != *(float *)(this + 600)
    || *(float *)(this + 536) != *(float *)(this + 604);
  v8 = v6 || v7 || *(float *)(this + 100) != *(float *)(this + 96);
  if ( *(_BYTE *)(this + 315) )
  {
    sub_100375F0(v3);
  }
  else if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 428))(v3) )
  {
    if ( v27 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 364))(v3, 1);
    if ( v8 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 364))(v3, 2);
  }
  v9 = *(_DWORD *)(this + 332);
  if ( v9 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 332) & 0xFFF) + 2) != v9 >> 12 )
    v10 = 0;
  else
    v10 = (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 332) & 0xFFF) + 1);
  sub_1003CAB0((_DWORD *)v3, v10);
  *(float *)(this + 272) = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1041315C + 60))(dword_1041315C);
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 188))(v3);
  if ( !a2 )
  {
    *(float *)(this + 296) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                               dword_10413198,
                               0.0,
                               1.0);
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 376))(v3);
    *(_DWORD *)(this + 1132) = *((_DWORD *)off_103DC81C + 6);
  }
  sub_1003CC70((_DWORD *)v3, (int)"PostDataUpdate");
  v11 = sub_100422D0();
  if ( *(_BYTE *)(this + 1100) && v11 )
  {
    v12 = *(_DWORD *)(this + 1116);
    if ( v12 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1116) & 0xFFF) + 2) != v12 >> 12 )
      v13 = 0;
    else
      v13 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1116) & 0xFFF) + 1);
    if ( v11 == v13 )
      sub_1000FD70(v3, v11);
  }
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 356))(v3);
  v15 = 128;
  if ( v14 == 1 )
  {
    v15 = 132;
  }
  else if ( v14 == 2 )
  {
    v15 = 136;
  }
  (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)dword_10413184 + 24))(
    dword_10413184,
    140,
    v15,
    *(unsigned __int16 *)(v3 + 390));
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 428))(v3)
    && (sub_10037760(v3) || (*(_DWORD *)(this + 104) & 8) != 0) )
  {
    sub_1003DA30((_WORD *)v3);
  }
  v16 = *(_DWORD *)(this + 332);
  if ( v16 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 332) & 0xFFF) + 2) != v16 >> 12 )
    v17 = 0;
  else
    v17 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 332) & 0xFFF) + 1);
  v18 = *(_DWORD *)(this + 336);
  if ( v18 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 336) & 0xFFF) + 2) != v18 >> 12 )
    v19 = 0;
  else
    v19 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 336) & 0xFFF) + 1);
  if ( v19 != v17 )
    sub_10039310(v3);
  v20 = *(_BYTE *)(this + 1154);
  if ( *(_BYTE *)(this + 1159) == v20 )
  {
    v25 = *(_DWORD *)(this + 1155);
    if ( v3 )
      v22 = *(_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)v3 + 8))(v3, -1, v25);
    else
      v22 = -1;
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 1160) + 32))(*(_DWORD *)(this + 1160), v22, v25);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 104))(v26);
  }
  else if ( v20 )
  {
    v28 = *(_DWORD *)(this + 1155);
    v23 = 1.0;
    if ( v3 )
    {
      (*(int (__thiscall **)(int, int, int, float))(*(_DWORD *)v3 + 8))(v3, -1, v28, COERCE_FLOAT(LODWORD(v23)));
      (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1160) + 24))(*(_DWORD *)(this + 1160));
    }
    else
    {
      (*(void (__thiscall **)(_DWORD, int, int, float))(**(_DWORD **)(this + 1160) + 24))(
        *(_DWORD *)(this + 1160),
        -1,
        v28,
        COERCE_FLOAT(LODWORD(v23)));
    }
    *(_BYTE *)(this + 1159) = *(_BYTE *)(this + 1154);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 104))(v26);
  }
  else
  {
    if ( v3 )
      v24 = *(_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 8))(v3, -1);
    else
      v24 = -1;
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 1160) + 28))(*(_DWORD *)(this + 1160), v24);
    *(_BYTE *)(this + 1159) = *(_BYTE *)(this + 1154);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 104))(v26);
  }
}
