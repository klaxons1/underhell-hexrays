void __thiscall sub_103D6080(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  _DWORD *v4; // eax
  unsigned int v5; // eax
  int v6; // ecx

  v2 = *(_DWORD *)(this + 1168);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 1168) & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12 )
    {
      if ( *v3 )
      {
        if ( *(_DWORD *)(dword_10698344 + 48) && !*(_BYTE *)(this + 1144) )
        {
          v4 = (_DWORD *)sub_100F8C20((_DWORD *)this);
          sub_103D5D90(v4, (_DWORD *)this);
        }
        v5 = *(_DWORD *)(this + 1168);
        if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1168) & 0xFFF) + 2] != v5 >> 12 )
          v6 = 0;
        else
          v6 = off_1061BE18[4 * (*(_DWORD *)(this + 1168) & 0xFFF) + 1];
        sub_103D38E0(v6, 0.1);
      }
    }
  }
  sub_1025FAC0(this);
}
