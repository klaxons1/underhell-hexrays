BOOL __thiscall sub_10031230(int this)
{
  unsigned int v1; // eax
  int *v2; // ecx
  BOOL result; // eax

  result = 0;
  if ( *(_BYTE *)(this + 2512) )
  {
    if ( *(_DWORD *)(this + 2516) )
    {
      v1 = *(_DWORD *)(this + 2688);
      if ( v1 != -1 )
      {
        v2 = &off_1061BE18[4 * (*(_DWORD *)(this + 2688) & 0xFFF) + 1];
        if ( v2[1] == v1 >> 12 )
        {
          if ( *v2 )
            return 1;
        }
      }
    }
  }
  return result;
}
