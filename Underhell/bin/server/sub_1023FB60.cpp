void __thiscall sub_1023FB60(int this)
{
  int v2; // eax
  _DWORD *v3; // esi
  unsigned int v4; // eax
  int v5; // eax
  float *v6; // eax

  if ( (*(_BYTE *)(this + 236) & 0x2C) != 0 )
  {
    v2 = sub_10261B20();
    v3 = (_DWORD *)v2;
    if ( v2 )
    {
      v4 = *(_DWORD *)(v2 + 2644);
      if ( v4 == -1 || off_1061BE18[4 * (v3[661] & 0xFFF) + 2] != v4 >> 12 )
        v5 = 0;
      else
        v5 = off_1061BE18[4 * (v3[661] & 0xFFF) + 1];
      if ( v5 == this )
      {
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        v6 = (float *)(*(int (__thiscall **)(_DWORD *))(*v3 + 576))(v3);
        sub_1011BC50((float *)(this + 580), v6, 255, 0, 255, 0, 0.0);
      }
    }
  }
  sub_100DF330((float *)this);
}
