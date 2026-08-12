void __thiscall sub_101ACC00(int this)
{
  int v2; // edi

  if ( (*(_BYTE *)(this + 236) & 0x24) != 0 )
  {
    v2 = *(_DWORD *)(this + 800);
    if ( v2 )
    {
      if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
        sub_100DAE60(*(_DWORD *)(this + 800));
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      sub_1011BC50((float *)(this + 580), (float *)(v2 + 580), 255, 100, 100, 1, 0.0);
    }
  }
  sub_100DF330((float *)this);
}
