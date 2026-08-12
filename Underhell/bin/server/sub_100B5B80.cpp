char __thiscall sub_100B5B80(int this, char a2)
{
  int *v2; // eax
  char v4; // cl
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  int v7; // edi

  LOBYTE(v2) = a2;
  v4 = *(_BYTE *)(this + 3695);
  *(_BYTE *)(this + 3695) = a2;
  if ( a2 )
  {
    *(_BYTE *)(this + 3693) = 0;
  }
  else if ( v4 )
  {
    v5 = *(_DWORD *)(this + 3644);
    if ( v5 != -1 )
    {
      v2 = &off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 1];
      v6 = v5 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] == v6 )
      {
        if ( *v2 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(this + 3644) & 0xFFF) + 2] == v6 )
            v7 = *v2;
          else
            v7 = 0;
          v2 = (int *)(*(_DWORD *)(v7 + 252) >> 11);
          if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
            LOBYTE(v2) = sub_100DAE60(v7);
          *(float *)(this + 3620) = *(float *)(v7 + 580);
          *(float *)(this + 3624) = *(float *)(v7 + 584);
          *(float *)(this + 3628) = *(float *)(v7 + 588);
        }
      }
    }
  }
  return (char)v2;
}
