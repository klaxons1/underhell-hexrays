char __thiscall sub_1004CBB0(void **this)
{
  unsigned int v2; // eax
  int v3; // edi
  int v5; // [esp+4h] [ebp-4h] BYREF

  LOBYTE(v2) = sub_1004BEB0(this[1], &v5);
  if ( (_BYTE)v2 )
  {
    v2 = *(_DWORD *)(v5 + 24);
    if ( v2 != -1 )
    {
      v2 >>= 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(v5 + 24) & 0xFFF) + 2] == v2 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(v5 + 24) & 0xFFF) + 1] )
        {
          v3 = (int)this[1];
          if ( *(_DWORD *)(v5 + 24) == -1
            || off_1061BE18[4 * (*(_DWORD *)(v5 + 24) & 0xFFF) + 2] != *(_DWORD *)(v5 + 24) >> 12 )
          {
            LOBYTE(v2) = sub_1004C360(0, v3);
          }
          else
          {
            LOBYTE(v2) = sub_1004C360((_DWORD *)off_1061BE18[4 * (*(_DWORD *)(v5 + 24) & 0xFFF) + 1], v3);
          }
        }
      }
    }
  }
  return v2;
}
