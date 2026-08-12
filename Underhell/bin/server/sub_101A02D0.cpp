BOOL __thiscall sub_101A02D0(_DWORD *this)
{
  int v1; // edx
  int v2; // eax
  int v3; // ecx
  int v4; // ecx
  BOOL result; // eax

  v1 = this[8];
  result = 0;
  if ( v1 )
  {
    if ( *(_DWORD **)(v1 + 4 * dword_10632880 + 24) == this )
    {
      v2 = this[7];
      if ( v2 )
      {
        if ( *(_DWORD **)(v2 + 4 * dword_1063287C + 24) == this )
        {
          v3 = *(_DWORD *)(v2 + 32);
          if ( v3 )
          {
            if ( *(_DWORD *)(v3 + 4 * dword_10632880 + 24) == v2 )
            {
              v4 = *(_DWORD *)(v1 + 28);
              if ( v4 )
              {
                if ( *(_DWORD *)(v4 + 4 * dword_1063287C + 24) == v1 && *(_DWORD *)(v2 + 32) == v4 )
                  return 1;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
