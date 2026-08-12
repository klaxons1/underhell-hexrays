void __thiscall sub_101BC2B0(_DWORD *this)
{
  int v2; // ebx

  if ( dword_106BAFF4 )
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)off_1063AC88 + 16))(off_1063AC88);
    sub_101B5220(&dword_106B9F38);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFE8 + 24))(dword_106BAFE8, dword_106BAFF4);
    dword_106BAFF4 = 0;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFE8 + 36))(dword_106BAFE8, dword_106BAFFC);
    dword_106BAFFC = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_106BAFE8 + 48))(dword_106BAFE8);
    dword_106BAFEC = 0;
    v2 = dword_106B9E74;
    if ( dword_106B9E74 )
    {
      sub_1010BCD0((_DWORD *)dword_106B9E74);
      sub_10184660(v2);
    }
    dword_106B9E74 = 0;
    this[4] = 0;
    this[9] = 0;
    this[14] = 0;
    if ( (int)this[13] >= 0 )
    {
      if ( this[11] )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[11]);
        this[11] = 0;
      }
      this[12] = 0;
    }
    this[15] = this[11];
    sub_101BC180(this + 16);
  }
}
