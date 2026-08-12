void sub_10070A50()
{
  int v0; // esi
  int i; // edi

  if ( dword_10607410 )
  {
    v0 = *(_DWORD *)dword_10607404;
    for ( i = 0; v0; v0 = *(_DWORD *)(dword_10607404 + 4 * ++i) )
    {
      if ( (*(_DWORD *)(v0 + 252) & 0x800) != 0 )
        sub_100DAE60(v0);
      Msg(
        "(%.1f, %.1f, %.1f) -- Node ID: %d; WC id %d; type %d\n",
        *(float *)(v0 + 580),
        *(float *)(v0 + 584),
        *(float *)(v0 + 588),
        *(_DWORD *)(v0 + 820),
        *(_DWORD *)(v0 + 852),
        *(__int16 *)(v0 + 816));
      if ( i == -1 )
        break;
      if ( dword_10607410 <= i + 1 )
        break;
    }
  }
}
