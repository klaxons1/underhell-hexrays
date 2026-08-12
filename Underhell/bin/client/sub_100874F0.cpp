int __thiscall sub_100874F0(int this, int a2, int a3, int a4)
{
  unsigned __int16 v4; // di
  int result; // eax
  int v6; // esi
  int v7; // ebx
  int v8; // [esp+4h] [ebp-8h]
  int v9; // [esp+8h] [ebp-4h]

  v4 = *(_WORD *)(this + 48);
  result = 0;
  v8 = this;
  v9 = 0;
  if ( v4 != 0xFFFF )
  {
    do
    {
      v6 = *(_DWORD *)(this + 36);
      v7 = 168 * v4;
      if ( (*(_BYTE *)(v6 + v7 + 8) & 0x10) != 0
        && *(_BYTE *)((*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_1041318C + 84))(*(unsigned __int16 *)(v6 + v7 + 4))
                    + 80) )
      {
        if ( v9 < a3 )
        {
          *(_WORD *)(a4 + 2 * v9++) = v4;
        }
        else
        {
          if ( !byte_1042BFF0 )
          {
            Warning("Too many depth textures rendered in a single view!\n");
            byte_1042BFF0 = 1;
          }
          (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1041318C + 80))(
            *(unsigned __int16 *)(v6 + v7 + 4),
            0,
            0);
        }
      }
      this = v8;
      v4 = *(_WORD *)(*(_DWORD *)(v8 + 36) + v7 + 166);
    }
    while ( v4 != 0xFFFF );
    return v9;
  }
  return result;
}
