void __thiscall sub_102586B0(int this)
{
  int v1; // eax
  int *v2; // esi
  int v3; // edi
  int *v4; // ecx
  int v5; // edi
  int *v6; // eax
  int *v7; // ecx
  int v8; // edi
  int *v9; // eax
  int *v10; // ecx

  v1 = *(_DWORD *)(this + 248);
  v2 = (int *)(this + 248);
  if ( (v1 & 0x10) != 0 || (v1 & 0x800) != 0 )
  {
    v3 = *v2 | 2;
    if ( *v2 != v3 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          sub_100194B0(v4, 248);
      }
      *v2 = v3;
    }
  }
  if ( (*v2 & 0x20) != 0 )
  {
    v5 = *v2 | 1;
    if ( *v2 != v5 )
    {
      v6 = v2 - 62;
      if ( *((_BYTE *)v2 - 164) )
      {
        *((_BYTE *)v6 + 88) |= 1u;
      }
      else
      {
        v7 = (int *)v6[6];
        if ( v7 )
          sub_100194B0(v7, 248);
      }
      *v2 = v5;
    }
  }
  if ( (*v2 & 0x200) != 0 )
  {
    v8 = *v2 | 1;
    if ( *v2 != v8 )
    {
      v9 = v2 - 62;
      if ( *((_BYTE *)v2 - 164) )
      {
        *((_BYTE *)v9 + 88) |= 1u;
        *v2 = v8;
        nullsub_4();
        return;
      }
      v10 = (int *)v9[6];
      if ( v10 )
        sub_100194B0(v10, 248);
      *v2 = v8;
    }
  }
  nullsub_4();
}
