char __thiscall sub_10149960(
        _DWORD *this,
        int a2,
        int a3,
        float *a4,
        float a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  float *v10; // ebx
  char v11; // al
  int v12; // edi
  float v14; // eax
  float *v15; // eax
  int (__thiscall *v16)(float *); // edx
  float *v17; // eax
  double v18; // st7
  bool v19; // zf
  double v20; // st7
  _BYTE v21[96]; // [esp+0h] [ebp-120h] BYREF
  float v22[17]; // [esp+60h] [ebp-C0h] BYREF
  _DWORD v23[29]; // [esp+A4h] [ebp-7Ch] BYREF
  _DWORD *v24; // [esp+118h] [ebp-8h]
  char v25; // [esp+11Eh] [ebp-2h]
  char v26; // [esp+11Fh] [ebp-1h] BYREF

  v24 = this;
  if ( (dword_1043C8D8 & 1) == 0 )
  {
    dword_1043C8D8 |= 1u;
    dword_1043C8D4 = CVProfile::FindOrCreateCounter(g_VProfCurrentProfile, "cameras rendered", 0);
    atexit(nullsub_7);
  }
  ++*(_DWORD *)dword_1043C8D4;
  v10 = a4;
  LODWORD(v22[0]) = &fogparams_t::`vftable';
  v11 = sub_1005D680(a4);
  qmemcpy(v23, (const void *)LODWORD(a5), sizeof(v23));
  v12 = 0;
  v25 = v11;
  if ( v11 )
  {
    if ( !a6 )
      return 0;
    v12 = a6 + 3356;
    sub_10046400(v22, a6 + 3356);
    if ( *(_BYTE *)(v12 + 64) != 1 )
    {
      (**(void (__thiscall ***)(int, int))v12)(v12, v12 + 64);
      *(_BYTE *)(v12 + 64) = 1;
    }
    a5 = sub_1005D6C0(v10);
    if ( *(_DWORD *)(v12 + 32) != LODWORD(a5) )
    {
      (**(void (__thiscall ***)(int, int))v12)(v12, v12 + 32);
      *(float *)(v12 + 32) = a5;
    }
    a5 = sub_1005D6D0(v10);
    if ( *(_DWORD *)(v12 + 36) != LODWORD(a5) )
    {
      (**(void (__thiscall ***)(int, int))v12)(v12, v12 + 36);
      *(float *)(v12 + 36) = a5;
    }
    a5 = sub_1005D6D0(v10);
    if ( *(_DWORD *)(v12 + 40) != LODWORD(a5) )
    {
      (**(void (__thiscall ***)(int, int))v12)(v12, v12 + 40);
      *(float *)(v12 + 40) = a5;
    }
    a5 = sub_1005D6E0(v10);
    if ( *(_DWORD *)(v12 + 44) != LODWORD(a5) )
    {
      (**(void (__thiscall ***)(int, int))v12)(v12, v12 + 44);
      *(float *)(v12 + 44) = a5;
    }
    sub_1005D690(v10, (_BYTE *)&a4 + 3, (_BYTE *)&a6 + 3, &v26);
    LOBYTE(a5) = HIBYTE(a4);
    if ( *(_BYTE *)(v12 + 16) != HIBYTE(a4) )
    {
      (**(void (__thiscall ***)(int, int))v12)(v12, v12 + 16);
      *(_BYTE *)(v12 + 16) = LOBYTE(a5);
    }
    LOBYTE(a5) = HIBYTE(a6);
    if ( *(_BYTE *)(v12 + 17) != HIBYTE(a6) )
    {
      (**(void (__thiscall ***)(int, int))v12)(v12, v12 + 16);
      *(_BYTE *)(v12 + 17) = LOBYTE(a5);
    }
    LOBYTE(a5) = v26;
    if ( *(_BYTE *)(v12 + 18) != v26 )
    {
      (**(void (__thiscall ***)(int, int))v12)(v12, v12 + 16);
      *(_BYTE *)(v12 + 18) = LOBYTE(a5);
    }
    *(float *)&v23[18] = sub_1005D6D0(v10);
  }
  v23[2] = a9;
  v23[3] = a10;
  v14 = *v10;
  v23[0] = a7;
  v23[1] = a8;
  v15 = (float *)(*(int (__thiscall **)(float *))(LODWORD(v14) + 36))(v10);
  *(float *)&v23[11] = *v15;
  *(float *)&v23[12] = v15[1];
  v16 = *(int (__thiscall **)(float *))(*(_DWORD *)v10 + 40);
  *(float *)&v23[13] = v15[2];
  v17 = (float *)v16(v10);
  *(float *)&v23[14] = *v17;
  *(float *)&v23[15] = v17[1];
  *(float *)&v23[16] = v17[2];
  v18 = sub_1005D670(v10);
  v19 = *((_BYTE *)v10 + 1221) == 0;
  *(float *)&v23[9] = v18;
  LOBYTE(v23[4]) = 0;
  if ( v19 )
    v20 = 1.0;
  else
    v20 = 0.0;
  *(float *)&v23[22] = v20;
  (*(void (__thiscall **)(int, _DWORD *, int, int, _BYTE *))(*(_DWORD *)dword_10413168 + 152))(
    dword_10413168,
    v23,
    3,
    a2,
    v21);
  sub_10149780(v24, 0, 2, (int)v23, 0, 2, 0, 0, 0);
  (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_10413168 + 160))(dword_10413168, v21);
  if ( v25 )
  {
    if ( v12 )
      sub_10046400((float *)v12, (int)v22);
  }
  return 1;
}
