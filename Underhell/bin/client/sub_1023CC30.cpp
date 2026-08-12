void __thiscall sub_1023CC30(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // ebp
  int v4; // ebx
  int v5; // edi
  int (__thiscall **v6)(int, int, int); // esi
  int v7; // eax
  int v8; // eax

  v2 = this;
  v3 = this[55] - 1;
  if ( v3 >= 0 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(v2[52] + 4 * v3) == -1
        || (v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA74 + 64))(
                   dword_1047CA74,
                   *(_DWORD *)(v2[52] + 4 * v3))) == 0 )
      {
        v8 = 0;
      }
      else
      {
        v5 = dword_1047CA70;
        v6 = (int (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA70 + 216);
        v7 = sub_10278FB0();
        v8 = (*v6)(v5, v4, v7);
        v2 = this;
      }
      if ( v8 == a2 )
        break;
      if ( --v3 < 0 )
        return;
    }
    if ( v2[55] - v3 - 1 > 0 )
      memcpy((void *)(v2[52] + 4 * v3), (const void *)(v2[52] + 4 * v3 + 4), 4 * (v2[55] - v3 - 1));
    --v2[55];
  }
}
