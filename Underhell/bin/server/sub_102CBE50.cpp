void __thiscall sub_102CBE50(int this, int a2)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  void *v7; // eax
  int v8; // [esp+4h] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 1381) )
    sub_102CAAA0(this);
  v3 = *(_DWORD *)(this + 920);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 2] == v5 )
    {
      if ( *v4 )
      {
        v6 = off_1061BE18[4 * (*(_DWORD *)(this + 920) & 0xFFF) + 2] == v5 ? *v4 : 0;
        v7 = (void *)sub_100D7680(v6);
        if ( v7 )
        {
          if ( sub_102C9AB0(v7, &v8) )
            sub_1029CCC0(v8);
          *(_DWORD *)(this + 920) = -1;
        }
      }
    }
  }
}
