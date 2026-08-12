int __thiscall sub_102DDEB0(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  void *v5; // esi
  int v6; // edi
  int v7; // esi
  int *v8; // eax
  int *v9; // ecx

  v3 = *(_DWORD *)(this + 2164);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 2164) & 0xFFF) + 1];
    if ( v4[1] == v3 >> 12 )
    {
      v5 = (void *)*v4;
      if ( *v4 )
      {
        sub_1016AF10((int)v5);
        (*(void (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)v5 + 140))(v5, 0, -1);
        sub_100D6A00(v5);
        v6 = this + 4928;
        v7 = 0;
        v8 = (int *)(this + 4928);
        while ( *v8 < 19 || *v8 > 23 )
        {
          ++v7;
          ++v8;
          if ( v7 >= 28 )
            goto LABEL_15;
        }
        if ( *(_DWORD *)(v6 + 4 * v7) )
        {
          if ( *(_BYTE *)(this + 84) )
          {
            *(_BYTE *)(this + 88) |= 1u;
          }
          else
          {
            v9 = *(int **)(this + 24);
            if ( v9 )
              sub_100194B0(v9, 4 * v7 + 4928);
          }
          *(_DWORD *)(v6 + 4 * v7) = 0;
        }
LABEL_15:
        *(_DWORD *)(this + 2164) = -1;
      }
    }
  }
  return (*(int (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
           dword_106B31D0,
           *(_DWORD *)(this + 24),
           "UpdateInventory");
}
