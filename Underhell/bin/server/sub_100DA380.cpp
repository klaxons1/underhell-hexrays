void __thiscall sub_100DA380(_DWORD *this, int a2)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax

  v2 = this[75];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 384))(v5, a2);
      }
    }
  }
}
