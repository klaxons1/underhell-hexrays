void __thiscall sub_100F52F0(char *this)
{
  char *v1; // esi
  int v2; // edi
  int v3; // eax

  v1 = this + 12;
  v2 = 8;
  do
  {
    if ( *(_DWORD *)v1 )
    {
      if ( *((float *)off_103DC81C + 3) - 0.1 > *((float *)v1 + 2) )
      {
        v3 = sub_101218C0();
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 40))(v3, *(_DWORD *)v1);
        *(_DWORD *)v1 = 0;
        *((_DWORD *)v1 + 1) = 0;
      }
    }
    v1 += 16;
    --v2;
  }
  while ( v2 );
}
