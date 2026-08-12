char __thiscall sub_1008AAB0(int this, int a2, int a3)
{
  int v3; // edi
  int v5; // esi
  char v6; // cl
  __int16 v7; // ax
  bool v8; // zf
  char v9; // al
  int v11; // eax
  int v12; // edi
  int v13; // eax
  __int16 v14; // ax
  float v15; // [esp+38h] [ebp-30h]
  float v16; // [esp+3Ch] [ebp-2Ch]
  float v17; // [esp+40h] [ebp-28h]
  float v18; // [esp+44h] [ebp-24h]
  int v19; // [esp+54h] [ebp-14h]
  void (__thiscall **v20)(int, int); // [esp+58h] [ebp-10h]
  int v21; // [esp+5Ch] [ebp-Ch] BYREF
  int v22; // [esp+60h] [ebp-8h] BYREF
  char v23; // [esp+66h] [ebp-2h]
  char v24; // [esp+67h] [ebp-1h]

  v3 = (unsigned __int16)a2;
  v5 = *(_DWORD *)(this + 36) + 168 * (unsigned __int16)a2;
  v7 = *(_WORD *)(v5 + 8) & 0xFF7F;
  v23 = (unsigned __int8)*(_WORD *)(v5 + 8) >> 7;
  v6 = v23;
  *(_WORD *)(v5 + 8) = v7;
  if ( v6 )
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(*(_DWORD *)dword_1041318C + 8))(
      *(unsigned __int16 *)(v5 + 4),
      *(_DWORD *)(this + 24),
      *(_DWORD *)(this + 28),
      v3);
  v8 = *(_BYTE *)(this + 211) == 0;
  LOBYTE(v22) = (*(_BYTE *)(v5 + 8) & 0x20) != 0;
  v24 = 0;
  if ( !v8 || (v9 = sub_10089F20((_DWORD *)(this + 64), *(_WORD *)(v5 + 148), v22, *(float *)&a3), HIBYTE(a3) = 1, !v9) )
    HIBYTE(a3) = 0;
  if ( *(_WORD *)(*(_DWORD *)(this + 68) + 10 * *(unsigned __int16 *)(v5 + 148)) == 0xFFFF )
  {
    sub_10085AD0((_DWORD *)this, a2);
    return 0;
  }
  if ( HIBYTE(a3) || (_BYTE)v22 )
  {
    v19 = sub_1007A730(off_103DCD78, *(_DWORD *)v5);
    v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
    v12 = v11;
    if ( v11 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 8))(v11);
    sub_10084CA0((_DWORD *)(this + 64), *(_WORD *)(v5 + 148), &v21, &v22, &a3, &a2);
    (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v12 + 152))(v12, v21, v22, a3, a2);
    (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v12 + 48))(v12, 1, 0, 0);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 80))(v12, 0);
    v20 = (void (__thiscall **)(int, int))(*(_DWORD *)v12 + 96);
    v13 = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_1041318C + 20))(*(unsigned __int16 *)(v5 + 4));
    (*v20)(v12, v13);
    if ( sub_10085960(this, v19, v5, 0) )
      v24 = 1;
    else
      DevMsg("Didn't draw shadow hierarchy.. bad shadow texcoords probably going to happen..grab Brian!\n");
    v14 = *(_WORD *)(v5 + 8);
    if ( (v14 & 8) == 0 )
      *(_WORD *)(v5 + 8) = v14 & 0xFFDF;
    v18 = ((double)a2 - 1.0) * 0.0009765625;
    v17 = ((double)a3 - 1.0) * 0.0009765625;
    v16 = ((double)v22 + 0.5) * 0.0009765625;
    v15 = 0.0009765625 * ((double)v21 + 0.5);
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1041318C + 36))(
      dword_1041318C,
      *(unsigned __int16 *)(v5 + 4),
      LODWORD(v15),
      LODWORD(v16),
      LODWORD(v17),
      LODWORD(v18));
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 12))(v12);
    (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 4))(v12);
  }
  else if ( v23 )
  {
    sub_10084CA0((_DWORD *)(this + 64), *(_WORD *)(v5 + 148), &v22, &v21, &a3, &a2);
    sub_10083C90(*(unsigned __int16 *)(v5 + 4), v22, v21, a3, a2);
    return v24;
  }
  return v24;
}
