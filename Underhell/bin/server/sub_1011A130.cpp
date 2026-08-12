void sub_1011A130()
{
  int *v0; // eax
  int v1; // eax

  if ( dword_1069C05C != -1 )
  {
    v0 = &off_1061BE18[4 * (dword_1069C05C & 0xFFF) + 1];
    if ( off_1061BE18[4 * (dword_1069C05C & 0xFFF) + 2] == (unsigned int)dword_1069C05C >> 12 )
    {
      if ( *v0 )
      {
        if ( off_1061BE18[4 * (dword_1069C05C & 0xFFF) + 2] == (unsigned int)dword_1069C05C >> 12 )
          v1 = *v0;
        else
          v1 = 0;
        if ( *(_BYTE *)(v1 + 1268) )
          sub_101194F0(v1, 1);
      }
    }
  }
}
