void __thiscall sub_103064C0(_DWORD *this)
{
  unsigned int v1; // ecx
  int *v2; // eax
  unsigned int v3; // ecx
  int v4; // esi

  v1 = this[280];
  if ( v1 != -1 )
  {
    v2 = &off_1061BE18[4 * (v1 & 0xFFF) + 1];
    v3 = v1 >> 12;
    if ( v2[1] == v3 )
    {
      if ( *v2 )
      {
        if ( v2[1] == v3 )
          v4 = *v2;
        else
          v4 = 0;
        sub_10242820(v4, 0, 0.25);
        sub_100EC3F0((_DWORD *)v4, (int)sub_102429D0, 0.0, 0);
        *(float *)(v4 + 816) = *(float *)(dword_106B31C8 + 12) + 0.25;
        sub_100EC4A0((int *)v4, *(float *)(dword_106B31C8 + 12), 0);
      }
    }
  }
}
