void __thiscall sub_10359D10(int this, int a2)
{
  int v3; // ebx
  int v4; // edi
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  char v8; // [esp+7h] [ebp-1h]

  if ( (*(_DWORD *)(this + 256) & 0x10000000) == 0 )
  {
    v3 = *(_DWORD *)(this + 1740);
    v8 = 0;
    v4 = sub_10219A30() % 100;
    if ( (v3 & 6) != 0 && v4 <= 35 )
    {
      v8 = 1;
      v5 = this + 4244;
      if ( *(_BYTE *)(this + 4976) )
        sub_100AC410(v5, "COMBINEPRISONGUARD_LOSTARM", -1, 0);
      else
        sub_100AC410(v5, "COMBINE_LOSTARM", -1, 0);
    }
    if ( (v3 & 0x18) != 0 && (unsigned int)(v4 - 36) <= 0x21 )
    {
      v6 = this + 4244;
      if ( *(_BYTE *)(this + 4976) )
        sub_100AC410(v6, "COMBINEPRISONGUARD_LOSTLEG", -1, 0);
      else
        sub_100AC410(v6, "COMBINE_LOSTLEG", -1, 0);
    }
    else if ( !v8 )
    {
      v7 = this + 4244;
      if ( *(_BYTE *)(this + 4976) )
        sub_100AC410(v7, "COMBINEPRISONGUARD_DIE", -1, 0);
      else
        sub_100AC410(v7, "COMBINE_DIE", -1, 0);
    }
  }
}
