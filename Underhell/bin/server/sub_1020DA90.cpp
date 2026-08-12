void __thiscall sub_1020DA90(int this, int a2)
{
  char v3; // dl
  int *v4; // ecx
  _DWORD *v5; // ecx
  unsigned int v6; // ebx
  int *v7; // ecx
  __int64 v8; // [esp-8h] [ebp-18h]
  __int64 v9; // [esp-8h] [ebp-18h]
  char v10; // [esp+1Bh] [ebp+Bh]

  sub_100EC6E0(this, a2);
  v3 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2) == 0;
  v10 = v3;
  if ( v3 != *(_BYTE *)(this + 1686) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
      {
        sub_100194B0(v4, 1686);
        v3 = v10;
      }
    }
    *(_BYTE *)(this + 1686) = v3;
  }
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
  }
  else
  {
    v5 = *(_DWORD **)(this + 24);
    if ( v5 )
    {
      *v5 |= 0x101u;
      *(_WORD *)(sub_10153460(v5) + 2) = 0;
    }
  }
  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
  {
    if ( *(_BYTE *)(this + 1686) )
    {
      HIDWORD(v8) = this;
      LODWORD(v8) = this;
      sub_1010DD80((_DWORD *)(this + 1468), v8, 0.0);
      v6 = *(_DWORD *)(this + 248) & 0xFFFFFFFE;
      if ( *(_DWORD *)(this + 248) != v6 )
      {
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
        }
        else
        {
          v7 = *(int **)(this + 24);
          if ( v7 )
            sub_100194B0(v7, 248);
        }
        *(_DWORD *)(this + 248) = v6;
      }
    }
  }
  if ( *(_BYTE *)(this + 1684) && !*(_BYTE *)(this + 1686) )
    *(_BYTE *)(this + 1684) = 0;
  if ( !sub_100DCD90(this) )
  {
    HIDWORD(v9) = this;
    LODWORD(v9) = this;
    sub_1010DD80((_DWORD *)(this + 1636), v9, 0.0);
  }
}
