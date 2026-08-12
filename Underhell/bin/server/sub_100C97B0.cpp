void __thiscall sub_100C97B0(_DWORD *this, int a2)
{
  unsigned int v2; // edx
  int *v3; // eax
  unsigned int v4; // edx
  int v5; // eax

  v2 = this[525];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[525] & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( off_1061BE18[4 * (this[525] & 0xFFF) + 2] == v4 )
    {
      if ( *v3 )
      {
        if ( off_1061BE18[4 * (this[525] & 0xFFF) + 2] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        (*(void (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)v5 + 1392))(v5, a2, this);
      }
    }
  }
}
