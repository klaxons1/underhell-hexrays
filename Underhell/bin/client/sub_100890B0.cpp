void __thiscall sub_100890B0(int this)
{
  int v2; // edi

  if ( *(_BYTE *)(this + 268) )
  {
    sub_10233280(0);
    for ( ; *(_DWORD *)(this + 288); --*(_DWORD *)(this + 288) )
    {
      sub_10233280(0);
      if ( *(_DWORD *)(this + 308) - *(_DWORD *)(this + 288) > 0 )
        memcpy(
          (void *)(*(_DWORD *)(this + 296) + *(_DWORD *)(this + 288) - 1),
          (const void *)(*(_DWORD *)(this + 296) + *(_DWORD *)(this + 288)),
          *(_DWORD *)(this + 308) - *(_DWORD *)(this + 288));
      --*(_DWORD *)(this + 308);
      v2 = *(_DWORD *)(this + 288) - 1;
      sub_10233380(4 * v2 + *(_DWORD *)(this + 276));
      if ( *(_DWORD *)(this + 288) - v2 - 1 > 0 )
        memcpy(
          (void *)(*(_DWORD *)(this + 276) + 4 * v2),
          (const void *)(*(_DWORD *)(this + 276) + 4 * v2 + 4),
          4 * (*(_DWORD *)(this + 288) - v2 - 1));
    }
    *(_BYTE *)(this + 268) = 0;
  }
}
