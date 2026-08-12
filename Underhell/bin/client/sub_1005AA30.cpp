double __thiscall sub_1005AA30(int this, float a2)
{
  int v4; // edi
  int v5; // ebx
  double v6; // st7
  double v7; // st6
  double v8; // st7
  double v9; // st6
  double v10; // rt0
  float v11; // [esp+8h] [ebp-20h]
  float v12; // [esp+10h] [ebp-18h]
  int v13; // [esp+20h] [ebp-8h]
  int v14; // [esp+24h] [ebp-4h]
  float v15; // [esp+30h] [ebp+8h]

  if ( !*(_DWORD *)(this + 24) )
    return 0.0;
  if ( (*(_BYTE *)(this + 32) & 1) != 0 )
    return *(float *)(this + 20) * *(float *)(this + 16);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v4 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  *(_WORD *)(this + 32) |= 1u;
  v5 = -1;
  v13 = -1;
  v14 = -1;
  if ( *(_DWORD *)(dword_1040CFB4 + 48) )
  {
    if ( *(_DWORD *)(this + 12) != -1 )
    {
      v14 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 328))(v4, *(_DWORD *)(this + 28));
      v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 328))(v4, *(_DWORD *)(this + 24));
      v13 = v5;
    }
    if ( *(_DWORD *)(dword_1040D08C + 48) && !sub_10142330() )
      DevMsg(
        1,
        "Pixels visible: %d (qh:%d) Pixels possible: %d (qh:%d) (frame:%d)\n",
        v5,
        *(_DWORD *)(this + 24),
        v14,
        *(_DWORD *)(this + 28),
        *((_DWORD *)off_103DC81C + 1));
    if ( v5 >= 0 && v14 >= 0 )
    {
      *(_WORD *)(this + 32) |= 4u;
      if ( v14 > 0 )
      {
        v6 = (double)v13 / (double)v14;
        if ( v6 < 0.94999999 )
        {
          if ( v6 < 0.0 )
            v6 = 0.0;
        }
        else
        {
          v6 = 1.0;
        }
        v7 = *((float *)off_103DC81C + 4) * a2;
LABEL_20:
        v12 = v7;
        v11 = v6;
        sub_101F0510(v11, *(float *)(this + 16), v12);
        goto LABEL_35;
      }
      goto LABEL_34;
    }
  }
  else
  {
    if ( *(_DWORD *)(this + 12) != -1 )
      v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 328))(v4, *(_DWORD *)(this + 24));
    if ( *(_DWORD *)(dword_1040D08C + 48) && !sub_10142330() )
      DevMsg(1, "Pixels visible: %d (qh:%d) (frame:%d)\n", v5, *(_DWORD *)(this + 24), *((_DWORD *)off_103DC81C + 1));
    if ( v5 >= 0 )
    {
      *(_WORD *)(this + 32) |= 4u;
      if ( *(_DWORD *)(this + 12) == *((_DWORD *)off_103DC81C + 1) - 1 )
      {
        v8 = *((float *)off_103DC81C + 4) * a2;
        v9 = 0.0;
        if ( v5 > 0 )
        {
          v8 = v8 * 0.5;
          v9 = 1.0;
        }
        v10 = v9;
        v7 = v8;
        v6 = v10;
        goto LABEL_20;
      }
LABEL_34:
      v6 = 0.0;
LABEL_35:
      *(float *)(this + 16) = v6;
      if ( v4 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 12))(v4);
        (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
      }
      return *(float *)(this + 20) * *(float *)(this + 16);
    }
  }
  v15 = *(float *)(this + 20) * *(float *)(this + 16);
  *(_WORD *)(this + 32) = *(_WORD *)(this + 32) & 0xFFFD | (2 * (*(_DWORD *)(this + 12) >= 0));
  if ( v4 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 12))(v4);
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
  }
  return v15;
}
