void __thiscall sub_10299EC0(int this)
{
  unsigned int v2; // edi
  int *v3; // esi
  unsigned int v4; // edi

  if ( *(_BYTE *)(this + 16) )
  {
    v2 = *(_DWORD *)(this + 60);
    if ( v2 != -1 )
    {
      v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 1];
      v4 = v2 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 2] == v4 && *v3 && sub_10295D00((_DWORD *)this) )
      {
        if ( v3[1] == v4 )
          sub_102995D0((_DWORD *)this, *v3);
        else
          sub_102995D0((_DWORD *)this, 0);
      }
    }
  }
}
