int __thiscall sub_1017CB20(int this)
{
  int result; // eax
  int v3; // edi
  int v4; // ebx
  unsigned int v5; // eax
  int *v6; // ecx
  char Buffer[512]; // [esp+20h] [ebp-200h] BYREF

  result = sub_100DF940(this);
  v3 = result;
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    v4 = 0;
    if ( *(int *)(this + 876) > 0 )
    {
      do
      {
        v5 = *(_DWORD *)(*(_DWORD *)(this + 864) + 4 * v4);
        if ( v5 != -1 )
        {
          v6 = &off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 864) + 4 * v4) & 0xFFF) + 1];
          if ( off_1061BE18[4 * (*(_DWORD *)(*(_DWORD *)(this + 864) + 4 * v4) & 0xFFF) + 2] == v5 >> 12 )
          {
            if ( *v6 )
            {
              sub_10429A00(Buffer, 0x200u, "Branch (%s): %s", *(_DWORD *)(*v6 + 260));
              sub_100D5DE0((_DWORD *)this, v3++, (int)Buffer, 0.0, 255, 255, 255, 255);
            }
          }
        }
        ++v4;
      }
      while ( v4 < *(_DWORD *)(this + 876) );
      return v3;
    }
  }
  return result;
}
