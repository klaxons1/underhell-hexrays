unsigned int __thiscall sub_10270A00(int this, int a2)
{
  unsigned int result; // eax
  int *v4; // ecx
  int v5; // edi
  unsigned int v6; // eax
  int v7; // eax
  int *v8; // ecx
  int v9; // eax
  int *v10; // ecx
  __int64 v11; // [esp-8h] [ebp-18h]

  result = *(_DWORD *)(this + 4);
  if ( result != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1];
    result >>= 12;
    if ( v4[1] == result )
    {
      v5 = *v4;
      if ( *v4 )
      {
        v6 = *(_DWORD *)(this + 4);
        if ( v6 != -1
          && off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 2] == v6 >> 12
          && off_1061BE18[4 * (*(_DWORD *)(this + 4) & 0xFFF) + 1] )
        {
          v7 = this - 1576;
          if ( *(_BYTE *)(this - 1492) )
          {
            *(_BYTE *)(v7 + 88) |= 1u;
          }
          else
          {
            v8 = *(int **)(v7 + 24);
            if ( v8 )
              sub_100194B0(v8, 1580);
          }
          *(_DWORD *)(this + 4) = -1;
        }
        *(_DWORD *)(v5 + 3296) &= ~0x20u;
        HIDWORD(v11) = this - 1576;
        LODWORD(v11) = v5;
        sub_1010DD80((_DWORD *)(this + 564), v11, 0.0);
        if ( *(_BYTE *)(this + 517) )
        {
          v9 = this - 1576;
          if ( *(_BYTE *)(this - 1492) )
          {
            *(_BYTE *)(v9 + 88) |= 1u;
          }
          else
          {
            v10 = *(int **)(v9 + 24);
            if ( v10 )
              sub_100194B0(v10, 2093);
          }
          *(_BYTE *)(this + 517) = 0;
        }
        return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)(this + 100) + 264))(1.0);
      }
    }
  }
  return result;
}
