int __userpurge sub_10146C80@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4@<esi>, float a5)
{
  double v5; // st7
  int v7; // eax
  double v8; // st7
  int v9; // ebx
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  double v15; // st7
  int v16; // eax
  int v17; // edx
  int v20; // [esp+14h] [ebp-10h]
  float v22; // [esp+20h] [ebp-4h]
  int savedregs; // [esp+24h] [ebp+0h]
  float v24; // [esp+2Ch] [ebp+8h]
  int v25; // [esp+2Ch] [ebp+8h]

  v5 = a5;
  v7 = *(_DWORD *)(a1 + 132);
  if ( (v7 & 0x1000) != 0 )
    v8 = v5 + 2.0;
  else
    v8 = v5 - 2.0;
  v9 = 0;
  v24 = v8;
  if ( (v7 & 4) != 0 && *(_DWORD *)(dword_1043C6B4 + 48) )
    v9 = 2 - ((v7 & 8) != 0);
  v10 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a3, a4);
  v11 = v10;
  if ( v10 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 8))(v10);
  v12 = *(_DWORD *)(a1 + 132);
  if ( (v12 & 1) != 0 )
  {
    (*(void (__thiscall **)(int, float))(*(_DWORD *)v11 + 184))(v11, COERCE_FLOAT(LODWORD(v24)));
    (*(void (__thiscall **)(int, float))(*(_DWORD *)v11 + 168))(v11, COERCE_FLOAT(LODWORD(v24)));
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 164))(v11, v9);
    v20 = *(_DWORD *)(a1 + 124);
    v25 = *(_DWORD *)dword_10413168;
    v13 = sub_101164B0();
    (*(void (__thiscall **)(int, int, _DWORD, int, int))(v25 + 152))(
      dword_10413168,
      a1 + 8,
      *(_DWORD *)(a1 + 136),
      v13,
      v20);
  }
  else if ( (v12 & 2) != 0 )
  {
    v14 = sub_10116450();
    (*(void (__thiscall **)(int, float, int, int))(*(_DWORD *)v11 + 184))(v11, COERCE_FLOAT(LODWORD(v24)), a2, v14);
    v15 = v24;
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 120))(dword_1047C97C)
      && v15 - *(float *)(dword_1043C7D4 + 44) < *(float *)(a1 + 60) )
    {
      v15 = *(float *)(a1 + 60) + *(float *)(dword_1043C7D4 + 44);
    }
    v22 = v15;
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 168))(v11, LODWORD(v22));
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 164))(v11, v9);
    savedregs = *(_DWORD *)(a1 + 124);
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10413168 + 152))(
      dword_10413168,
      a1 + 8,
      *(_DWORD *)(a1 + 136));
    sub_10144D60(v11);
  }
  else
  {
    v16 = *(_DWORD *)(a1 + 136);
    if ( (v16 & 0x23) != 0 )
    {
      v17 = *(_DWORD *)v11;
      if ( (v16 & 0x10) != 0 )
        (*(void (__thiscall **)(int, int, bool))(v17 + 544))(
          v11,
          *(_BYTE *)(a1 + 136) & 1,
          (*(_DWORD *)(a1 + 136) & 2) != 0);
      else
        (*(void (__thiscall **)(int, int, bool, bool))(v17 + 48))(
          v11,
          *(_BYTE *)(a1 + 136) & 1,
          (*(_DWORD *)(a1 + 136) & 2) != 0,
          (*(_DWORD *)(a1 + 136) & 0x20) != 0);
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 164))(v11, v9);
    if ( v9 )
      (*(void (__thiscall **)(int, float))(*(_DWORD *)v11 + 168))(v11, COERCE_FLOAT(LODWORD(v24)));
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 12))(v11);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 4))(v11);
}
