void __thiscall sub_1022FEF0(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // esi

  sub_100DF330((float *)this);
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    v2 = *(_DWORD *)(this + 880);
    if ( v2 != -1 )
    {
      v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 1];
      v4 = v2 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 2] == v4 )
      {
        if ( *v3 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 2] == v4 )
            v5 = *v3;
          else
            v5 = 0;
          if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
            sub_100DAE60(v5);
          if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
            sub_100DAE60(this);
          sub_1011C3A0((float *)(this + 580), (float *)(v5 + 580), 16.0, 0, 255, 0, 64, 1, 0.0);
        }
      }
    }
  }
}
