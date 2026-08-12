void __thiscall sub_100C5DE0(int this, float a2, float a3)
{
  int v4; // edi
  int v5; // edx
  float v6; // ebx
  _DWORD *v7; // eax
  bool v8; // zf
  int v9; // eax
  _DWORD *v10; // eax
  float v11; // edx
  int v12; // eax
  _DWORD *v13; // eax
  double v14; // st7
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // eax
  float v18; // ecx
  int v19; // eax
  _DWORD *v20; // eax
  double v21; // [esp+Ch] [ebp-8h] BYREF

  v4 = dword_10700AC8;
  v5 = *(_DWORD *)dword_10700AC8;
  HIDWORD(v21) = *(_DWORD *)(this + 8);
  (*(void (__thiscall **)(int))(v5 + 100))(dword_10700AC8);
  v6 = a3;
  if ( !*(_DWORD *)(LODWORD(a3) + 1100) && sub_100D7240(LODWORD(a3)) )
    sub_100BD750((volatile signed __int32 *)LODWORD(v6));
  v7 = *(_DWORD **)(LODWORD(v6) + 1100);
  if ( !v7 || (v8 = *v7 == 0, a3 = *(float *)(LODWORD(v6) + 1100), v8) )
    a3 = 0.0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  a3 = sub_100BCBB0((void *)LODWORD(v6), SLODWORD(a3), SHIDWORD(v21));
  if ( *(_DWORD *)(this + 16) != *(_DWORD *)(this + 12) )
  {
    v9 = *(_DWORD *)(this + 72);
    if ( v9 )
    {
      if ( *(_BYTE *)(v9 + 84) )
      {
        *(_BYTE *)(v9 + 88) |= 1u;
      }
      else
      {
        v10 = *(_DWORD **)(v9 + 24);
        if ( v10 )
        {
          *v10 |= 0x101u;
          *(_WORD *)(sub_10153460(v10) + 2) = 0;
        }
      }
    }
    *(float *)(this + 16) = *(float *)(this + 12);
  }
  v11 = *(float *)(this + 12);
  a3 = a3 * a2 * *(float *)(this + 24) + v11;
  if ( LODWORD(v11) != LODWORD(a3) )
  {
    v12 = *(_DWORD *)(this + 72);
    if ( v12 )
    {
      if ( *(_BYTE *)(v12 + 84) )
      {
        *(_BYTE *)(v12 + 88) |= 1u;
      }
      else
      {
        v13 = *(_DWORD **)(v12 + 24);
        if ( v13 )
        {
          *v13 |= 0x101u;
          *(_WORD *)(sub_10153460(v13) + 2) = 0;
        }
      }
    }
    *(float *)(this + 12) = a3;
  }
  if ( *(float *)(this + 12) >= 0.0 )
  {
    if ( *(float *)(this + 12) < 1.0 )
      goto LABEL_29;
    v8 = *(_BYTE *)(this + 5) == 0;
    *(_BYTE *)(this + 4) = 1;
    if ( v8 )
    {
      v21 = 1.0;
      sub_100C5760((float *)(this + 12), &v21);
      goto LABEL_29;
    }
  }
  else if ( !*(_BYTE *)(this + 5) )
  {
    a3 = 0.0;
    sub_100C5640((float *)(this + 12), (int *)&a3);
    goto LABEL_29;
  }
  LODWORD(a3) = (int)*(float *)(this + 12);
  sub_100C5700((float *)(this + 12), (int *)&a3);
LABEL_29:
  v14 = 0.0;
  if ( 0.0 != *(float *)(this + 28) || 0.0 != *(float *)(this + 32) )
  {
    v15 = *(_DWORD *)(this + 20);
    a3 = 1.0;
    if ( v15 != COERCE_INT(1.0) )
    {
      v16 = *(_DWORD *)(this + 72);
      if ( v16 )
      {
        if ( *(_BYTE *)(v16 + 84) )
        {
          *(_BYTE *)(v16 + 88) |= 1u;
        }
        else
        {
          v17 = *(_DWORD **)(v16 + 24);
          if ( v17 )
          {
            *v17 |= 0x101u;
            *(_WORD *)(sub_10153460(v17) + 2) = 0;
          }
        }
      }
      *(float *)(this + 20) = 1.0;
      v14 = 0.0;
    }
    if ( *(float *)(this + 28) != v14 && *(float *)(this + 28) > (double)*(float *)(this + 12) )
    {
      a3 = *(float *)(this + 12) / *(float *)(this + 28);
      sub_100BC210((float *)(this + 20), &a3);
    }
    if ( 0.0 != *(float *)(this + 32) && 1.0 - *(float *)(this + 32) < *(float *)(this + 12) )
    {
      v21 = (1.0 - *(float *)(this + 12)) / *(float *)(this + 32);
      sub_100C57C0((float *)(this + 20), &v21);
    }
    v18 = *(float *)(this + 20);
    a3 = v18 * 3.0 * v18 - (v18 + v18) * v18 * v18;
    if ( LODWORD(v18) != LODWORD(a3) )
    {
      v19 = *(_DWORD *)(this + 72);
      if ( v19 )
      {
        if ( *(_BYTE *)(v19 + 84) )
        {
          *(_BYTE *)(v19 + 88) |= 1u;
        }
        else
        {
          v20 = *(_DWORD **)(v19 + 24);
          if ( v20 )
          {
            *v20 |= 0x101u;
            *(_WORD *)(sub_10153460(v20) + 2) = 0;
          }
        }
      }
      *(float *)(this + 20) = a3;
    }
    if ( !*(_DWORD *)(this + 8) )
    {
      a3 = 0.0;
      sub_100BC1B0((float *)(this + 20), (int *)&a3);
    }
  }
}
