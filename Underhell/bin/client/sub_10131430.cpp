char __thiscall sub_10131430(int this)
{
  if ( !byte_1043585C )
  {
    if ( (!*(_DWORD *)(dword_10439584 + 48) || *((float *)off_103DC81C + 2) <= 0.0) && !*(_DWORD *)(dword_104395CC + 48) )
    {
      *(_BYTE *)(this + 228) = 0;
      return 0;
    }
    if ( !*(_BYTE *)(this + 228) )
    {
      *(float *)(this + 212) = -1.0;
      *(_BYTE *)(this + 228) = 1;
      *(float *)(this + 216) = -1.0;
      *(_DWORD *)(this + 220) = -1;
      *(_DWORD *)(this + 224) = -1;
    }
  }
  return 1;
}
