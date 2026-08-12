void __thiscall sub_1002B830(int this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // ebx
  _DWORD *v8; // eax
  _BYTE *v9; // eax
  bool v10; // [esp+Bh] [ebp-1h]

  if ( *(_DWORD *)(this + 1184) )
  {
    v3 = *(_DWORD *)(this + 1632);
    if ( *(_DWORD *)(this + 1800) != v3 )
    {
      *(_DWORD *)(this + 1800) = v3;
      sub_1000F6C0(this - 8, 8);
      if ( *(_BYTE *)(this + 1752) )
        sub_10029560((_DWORD *)(this - 8));
      *(float *)(this + 1228) = 0.0;
    }
  }
  if ( !*(_DWORD *)(this + 1184) )
  {
    v4 = *(_DWORD *)(this + 1636);
    if ( v4 != -1 )
    {
      if ( *(_DWORD *)(this + 1800) != v4 )
      {
        *(_DWORD *)(this + 1800) = v4;
        sub_1000F6C0(this - 8, 8);
        if ( *(_BYTE *)(this + 1752) )
          sub_10029560((_DWORD *)(this - 8));
      }
      *(_DWORD *)(this + 1636) = -1;
    }
  }
  if ( !a2 )
  {
    *(_DWORD *)(this + 1632) = -1;
    *(_DWORD *)(this + 1636) = -1;
  }
  v5 = *(_DWORD *)dword_10413178;
  v6 = sub_10034480(this - 8);
  v7 = (*(int (__thiscall **)(int, int))(v5 + 4))(dword_10413178, v6);
  v10 = v7 != (*(int (__thiscall **)(int))(*(_DWORD *)(this - 4) + 36))(this - 4);
  sub_1003CD40(a2);
  if ( !a2 || v10 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)(this - 8) + 376))(this - 8);
    if ( !*(_DWORD *)(this + 1932) && (*(int (__thiscall **)(int))(*(_DWORD *)(this - 4) + 36))(this - 4) )
      sub_10026520(this - 8);
    v8 = *(_DWORD **)(this + 1932);
    if ( !v8 || !*v8 )
      v8 = 0;
    if ( sub_10027270((int)v8, "mouth") != -1 )
      *(_WORD *)(this + 1390) = 1;
    if ( v10 )
      goto LABEL_26;
  }
  if ( *(_DWORD *)(this + 1800) != *(_DWORD *)(this + 1632) )
  {
LABEL_26:
    sub_1000F6C0(this - 8, 8);
    *(_DWORD *)(this + 1632) = *(_DWORD *)(this + 1800);
  }
  if ( *(_BYTE *)(this + 1752) && *(_BYTE *)(this + 1300) != *(_BYTE *)(this + 1753) && 0.0 != *(float *)(this + 1808) )
  {
    *(float *)(this + 1808) = 0.0;
    sub_1000F6C0(this - 8, 8);
  }
  if ( *(_BYTE *)(this + 76) != 23 )
    goto LABEL_38;
  if ( !*(_BYTE *)(this + 1772) )
    (*(void (__thiscall **)(int))(*(_DWORD *)(this - 8) + 660))(this - 8);
  if ( *(_BYTE *)(this + 76) != 23 || *(_BYTE *)(this + 1772) != 1 )
  {
LABEL_38:
    if ( !*(_DWORD *)(this + 1184) )
      goto LABEL_41;
    goto LABEL_39;
  }
  if ( !*(_DWORD *)(this + 1184) )
  {
    sub_1000DF30((_DWORD *)(this - 8), 32);
    goto LABEL_38;
  }
LABEL_39:
  if ( *(_BYTE *)(this + 76) != 23 )
    sub_10027340(this - 8);
LABEL_41:
  if ( (*(_DWORD *)(this + 104) & 8) != 0 )
  {
    v9 = *(_BYTE **)(this + 1236);
    if ( v9 )
    {
      if ( *v9 )
      {
        Msg("delete ragdoll due to nointerp\n");
        sub_10034930(*(_DWORD *)(this + 1236));
        *(_DWORD *)(this + 1236) = 0;
      }
    }
  }
}
