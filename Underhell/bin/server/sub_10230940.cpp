void __thiscall sub_10230940(int this, int a2)
{
  unsigned int v3; // eax
  __int64 v4; // [esp-8h] [ebp-14h]

  if ( *(_BYTE *)(this + 834) && *(_DWORD *)(this + 260) )
  {
    if ( *(_DWORD *)(a2 + 2684) != 2 )
    {
      if ( *(_DWORD *)(this + 812) && sub_1012B040((unsigned int *)(this + 884), 0) )
        sub_1022FB60(this, 2, *(char **)(this + 812), 1);
      else
        sub_102329C0(this, a2);
    }
  }
  else if ( !*(_DWORD *)(this + 812)
         || (v3 = *(_DWORD *)(this + 884), v3 != -1)
         && off_1061BE18[4 * (*(_DWORD *)(this + 884) & 0xFFF) + 2] == v3 >> 12
         && off_1061BE18[4 * (*(_DWORD *)(this + 884) & 0xFFF) + 1] )
  {
    sub_102329C0(this, a2);
  }
  else
  {
    *(_DWORD *)(a2 + 2684) = 2;
    sub_10232840(this, a2, *(char **)(this + 812), 0);
  }
  HIDWORD(v4) = this;
  LODWORD(v4) = 0;
  sub_1010DD80((_DWORD *)(this + 928), v4, 0.0);
}
