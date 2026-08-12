char __thiscall sub_101FC0D0(int this)
{
  int v2; // eax
  int v3; // esi
  int v4; // ebx
  int v5; // eax
  void *v6; // eax

  LOBYTE(v2) = *(_BYTE *)(this + 846);
  if ( (v2 & 1) != 0 )
  {
    *(_BYTE *)(this + 846) = v2 & 0xFE;
    sub_10233210(this + 316);
    v2 = *(_DWORD *)(this + 700);
    if ( v2 > 0 )
    {
      v3 = 0;
      v4 = *(_DWORD *)(this + 700);
      do
      {
        v5 = v3 + *(_DWORD *)(this + 688);
        if ( *(_BYTE *)(v5 + 32) )
        {
          v6 = (void *)sub_1022CF00(v5 + 16);
          v2 = sub_101FBCF0(*((int **)off_103EE614 + 35), v6);
        }
        else
        {
          v2 = sub_101F9B80(*((_DWORD **)off_103EE614 + 35), v3 + *(_DWORD *)(this + 688));
        }
        if ( v2 )
          LOBYTE(v2) = sub_101FC0D0(v2);
        v3 += 40;
        --v4;
      }
      while ( v4 );
    }
  }
  return v2;
}
