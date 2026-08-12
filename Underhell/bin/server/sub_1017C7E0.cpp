int __thiscall sub_1017C7E0(_DWORD *this)
{
  int i; // edi
  unsigned int v3; // eax

  for ( i = 0; i < this[204]; ++i )
  {
    v3 = *(_DWORD *)(this[201] + 4 * i);
    if ( v3 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this[201] + 4 * i) & 0xFFF) + 2] == v3 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this[201] + 4 * i) & 0xFFF) + 1] )
    {
      sub_1010C7F0((float *)dword_10614CA8, (int)this, "_OnLogicBranchRemoved", 0.0, (int)this, (int)this, 0);
    }
  }
  return sub_100E20F0(this);
}
