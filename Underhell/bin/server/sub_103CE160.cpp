bool __thiscall sub_103CE160(int this, int a2)
{
  int v2; // ebx

  v2 = *(_DWORD *)(a2 + 64);
  if ( (v2 & 0x20000000) != 0 && !*(_BYTE *)(this + 3776) && (double)(*(_DWORD *)(this + 216) / 3) < *(float *)(a2 + 52) )
    return 1;
  if ( (v2 & 0x20000002) != 0 && !sub_10023D10((_DWORD *)this, 23) && RandomFloat(0.0, 1.0) > 0.5 )
  {
    if ( RandomFloat(0.0, 1.0) > 0.75 )
      *(_DWORD *)(this + 2716) &= ~0x40u;
    return 1;
  }
  return sub_1001F7D0(a2);
}
