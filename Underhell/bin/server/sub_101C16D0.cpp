char __thiscall sub_101C16D0(int this, int a2, float *a3, char a4)
{
  int v4; // ebx
  int v6; // esi
  void *v7; // esp
  int v8; // esi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // esi
  _DWORD **v15; // esi
  _DWORD *v16; // eax
  bool v17; // al
  float v18; // ecx
  float v19; // edx
  int *v20; // eax
  int v21; // esi
  double v22; // st7
  const char *v23; // eax
  const char *v24; // ebx
  bool v26; // al
  int v27; // [esp+0h] [ebp-54h] BYREF
  _DWORD v28[4]; // [esp+Ch] [ebp-48h] BYREF
  float v29[3]; // [esp+1Ch] [ebp-38h] BYREF
  float v30[3]; // [esp+28h] [ebp-2Ch] BYREF
  float v31[3]; // [esp+34h] [ebp-20h] BYREF
  float v32; // [esp+40h] [ebp-14h]
  float v33; // [esp+44h] [ebp-10h]
  float v34; // [esp+48h] [ebp-Ch]
  int *v35; // [esp+4Ch] [ebp-8h]
  int i; // [esp+50h] [ebp-4h]
  int j; // [esp+60h] [ebp+Ch]
  char v38; // [esp+63h] [ebp+Fh]
  int v39; // [esp+64h] [ebp+10h]

  v4 = *(_DWORD *)a2;
  v6 = *(_DWORD *)(this + 16);
  v7 = alloca(4 * v6);
  v8 = v6 - 1;
  v35 = &v27;
  if ( v8 >= 0 )
  {
    v9 = 16 * v8;
    for ( i = 16 * v8; ; v9 = i )
    {
      v10 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31EC + 32))(
              dword_106B31EC,
              *(unsigned __int16 *)(*(_DWORD *)(v9 + *(_DWORD *)(this + 4)) + 358));
      i -= 16;
      v35[v8--] = v10;
      if ( v8 < 0 )
        break;
    }
  }
  sub_10265570(v4, *(_DWORD *)(v4 + 420));
  v28[0] = &CTraceFilterPushMove::`vftable';
  v28[3] = sub_100E99F0((_DWORD *)v4);
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    sub_100DAE60(v4);
  v31[0] = *(float *)(v4 + 580) + *a3;
  v31[1] = *(float *)(v4 + 584) + a3[1];
  v31[2] = *(float *)(v4 + 588) + a3[2];
  if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
    sub_100DAE60(v4);
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 636))(v4);
  sub_10264DF0(v4, v4 + 580, v31, v11, v28, a2 + 16);
  v12 = *(_DWORD *)(this + 16) - 1;
  if ( v12 >= 0 )
  {
    v13 = 16 * v12;
    for ( j = 16 * v12; ; v13 = j )
    {
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31EC + 36))(
        dword_106B31EC,
        *(unsigned __int16 *)(*(_DWORD *)(v13 + *(_DWORD *)(this + 4)) + 358),
        v35[v12]);
      j -= 16;
      if ( --v12 < 0 )
        break;
    }
  }
  v14 = a2;
  *(_BYTE *)(a2 + 101) = 0;
  if ( sub_101C5260(v4) )
  {
    v15 = *(_DWORD ***)(this + 4);
    v16 = (_DWORD *)sub_101C5260(v4);
    if ( sub_100E99F0(v16) == *v15 )
      *(_BYTE *)(a2 + 101) = 1;
    v14 = a2;
  }
  if ( *(_BYTE *)(this + 48) && ((*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) || sub_100D7680(v4)) )
  {
    v38 = 1;
    sub_100E0D20(v4, v31);
  }
  else
  {
    v38 = 0;
    if ( 0.0 != *(float *)(v14 + 60) )
      sub_100E0D20(v4, (float *)(v14 + 28));
    if ( 0.0 == *(float *)(v4 + 352)
      || !*(_BYTE *)(v4 + 361)
      || (*(_BYTE *)(v4 + 356) & 4) != 0
      || (*(_BYTE *)(v4 + 356) & 0x20) != 0 )
    {
      return 1;
    }
    if ( !a4 && 1.0 == *(float *)(v14 + 60) )
    {
      if ( !sub_101C1640((_DWORD *)v4) )
      {
        v23 = *(const char **)(**(_DWORD **)(this + 4) + 92);
        if ( !v23 )
          v23 = String;
        v24 = *(const char **)(v4 + 92);
        if ( !v24 )
          v24 = String;
        Warning("Interpenetrating entities! (%s and %s)\n", v24, v23);
      }
      return 1;
    }
  }
  v17 = !sub_101C1640((_DWORD *)v4);
  *(_BYTE *)(v14 + 100) = v17;
  if ( !v17 )
    return 1;
  if ( v38 )
  {
    if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
      sub_100DAE60(v4);
    v18 = *(float *)(v4 + 584);
    v19 = *(float *)(v4 + 588);
    v32 = *(float *)(v4 + 580);
    v33 = v18;
    v34 = v19;
    v39 = 0;
    while ( 1 )
    {
      v20 = *(int **)(this + 4);
      v21 = *v20;
      if ( (*(_DWORD *)(*v20 + 252) & 0x800) != 0 )
        sub_100DAE60(*v20);
      sub_10421CE0(v21 + 500, v39 >> 1, v30);
      v22 = (v39 & 1) != 0 ? -0.5 : 0.5;
      v29[0] = v30[0] * v22 + v32;
      v29[1] = v30[1] * v22 + v33;
      v29[2] = v22 * v30[2] + v34;
      sub_100E0D20(v4, v29);
      v26 = !sub_101C1640((_DWORD *)v4);
      *(_BYTE *)(a2 + 100) = v26;
      if ( !v26 )
        break;
      if ( ++v39 >= 4 )
      {
        sub_100E0D20(v4, v31);
        DevMsg(1, "Ignoring player blocking train!\n");
        return 1;
      }
    }
    return 1;
  }
  return 0;
}
