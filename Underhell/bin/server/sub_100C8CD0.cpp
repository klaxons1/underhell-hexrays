void __thiscall sub_100C8CD0(_DWORD *this, int a2, float a3)
{
  unsigned int v3; // ecx
  int *v4; // eax
  unsigned int v5; // ecx
  int v6; // eax

  v3 = this[525];
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (v3 & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( v4[1] == v5 )
    {
      if ( *v4 )
      {
        if ( v4[1] == v5 )
          v6 = *v4;
        else
          v6 = 0;
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 1164))(v6, a2, LODWORD(a3));
      }
    }
  }
}
