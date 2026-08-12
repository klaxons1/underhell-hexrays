void __thiscall sub_103E44A0(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // edi
  unsigned int v6; // eax
  int v7; // eax
  int *v8; // ecx
  int v9; // eax
  int *v10; // ecx
  __int64 v11; // [esp-8h] [ebp-18h]

  v3 = *(_DWORD *)(this + 24);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 24) & 0xFFF) + 1];
    if ( v4[1] == v3 >> 12 )
    {
      v5 = *v4;
      if ( *v4 )
      {
        v6 = *(_DWORD *)(this + 24);
        if ( v6 != -1
          && off_1061BE18[4 * (*(_DWORD *)(this + 24) & 0xFFF) + 2] == v6 >> 12
          && off_1061BE18[4 * (*(_DWORD *)(this + 24) & 0xFFF) + 1] )
        {
          v7 = this - 1120;
          if ( *(_BYTE *)(this - 1036) )
          {
            *(_BYTE *)(v7 + 88) |= 1u;
          }
          else
          {
            v8 = *(int **)(v7 + 24);
            if ( v8 )
              sub_100194B0(v8, 1144);
          }
          *(_DWORD *)(this + 24) = -1;
        }
        *(_DWORD *)(v5 + 3296) &= ~0x20u;
        HIDWORD(v11) = this - 1120;
        LODWORD(v11) = v5;
        sub_1010DD80((_DWORD *)(this + 52), v11, 0.0);
        if ( *(_BYTE *)(this + 9) )
        {
          v9 = this - 1120;
          if ( *(_BYTE *)(this - 1036) )
          {
            *(_BYTE *)(v9 + 88) |= 1u;
            *(_BYTE *)(this + 9) = 0;
          }
          else
          {
            v10 = *(int **)(v9 + 24);
            if ( v10 )
              sub_100194B0(v10, 1129);
            *(_BYTE *)(this + 9) = 0;
          }
        }
      }
    }
  }
}
