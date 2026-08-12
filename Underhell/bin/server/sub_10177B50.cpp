int __thiscall sub_10177B50(int this)
{
  char *v2; // eax
  int *v4; // esi
  int *v5; // ecx
  int v6; // ebx
  int *v7; // eax
  int *v8; // ecx

  if ( *(_DWORD *)(this + 1120) == 44 )
  {
    v2 = sub_100E3960((int)"item_battery", (float *)(this + 716), (float *)(this + 728), 0);
  }
  else
  {
    if ( *(_DWORD *)(this + 1120) != 45 )
    {
LABEL_6:
      Warning("unable to create world_item %d\n", *(_DWORD *)(this + 1120));
      return sub_1025FAE0(this);
    }
    v2 = sub_100E3960((int)"item_suit", (float *)(this + 716), (float *)(this + 728), 0);
  }
  if ( !v2 )
    goto LABEL_6;
  *((_DWORD *)v2 + 53) = *(_DWORD *)(this + 212);
  v4 = (int *)(v2 + 248);
  *((_DWORD *)v2 + 65) = *(_DWORD *)(this + 260);
  if ( *((_DWORD *)v2 + 62) )
  {
    if ( v2[84] )
    {
      v2[88] |= 1u;
    }
    else
    {
      v5 = (int *)*((_DWORD *)v2 + 6);
      if ( v5 )
        sub_100194B0(v5, 248);
    }
    *v4 = 0;
  }
  v6 = *v4 | *(_DWORD *)(this + 248);
  if ( *v4 != v6 )
  {
    v7 = v4 - 62;
    if ( *((_BYTE *)v4 - 164) )
    {
      *((_BYTE *)v7 + 88) |= 1u;
      *v4 = v6;
      return sub_1025FAE0(this);
    }
    v8 = (int *)v7[6];
    if ( v8 )
      sub_100194B0(v8, 248);
    *v4 = v6;
  }
  return sub_1025FAE0(this);
}
