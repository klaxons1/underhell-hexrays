void __thiscall sub_1001A830(int this, int a2)
{
  int i; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // ecx

  sub_1001A5F0((const void **)this);
  if ( *(_DWORD *)(this + 12) )
  {
    if ( *(_DWORD *)(this + 32) )
    {
      (*(void (__stdcall **)(_DWORD, int, _DWORD, _DWORD))(*(_DWORD *)(*(_DWORD *)(this + 4) + 4) + 64))(
        0,
        -1,
        *(_DWORD *)(this + 16),
        *((float *)off_103DC81C + 3));
      for ( i = 0; i < *(_DWORD *)(this + 32); ++i )
      {
        v4 = *(_DWORD *)(this + 20);
        v5 = *(unsigned __int16 *)(v4 + 4 * i);
        v6 = v4 + 4 * i;
        if ( (a2 & *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 12) + 44) + 4 * v5)) != 0 )
          sub_101ED9E0(
            *(_DWORD *)(*(_DWORD *)(this + 4) + 1284) + 48 * *(unsigned __int16 *)(v6 + 2),
            *(_DWORD *)(*(_DWORD *)this + 1284) + 48 * v5);
      }
    }
  }
}
