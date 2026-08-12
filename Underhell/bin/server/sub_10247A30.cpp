void __thiscall sub_10247A30(int this, _DWORD *a2)
{
  int i; // ebx
  int v5; // ebx
  int v6; // [esp+10h] [ebp+8h]
  int v7; // [esp+10h] [ebp+8h]

  nullsub_5((int)a2);
  if ( *(_BYTE *)(this + 24) )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*a2 + 1596))(a2, 1);
    v6 = *(_DWORD *)(this + 48);
    if ( a2[55] != v6 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*a2 + 464))(a2, a2 + 55);
      a2[55] = v6;
    }
    for ( i = 0; i < *(_DWORD *)(this + 40); ++i )
      (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*a2 + 1440))(
        a2,
        *(_DWORD *)(*(_DWORD *)(this + 28) + 4 * i),
        0);
    v5 = 0;
    if ( *(int *)(this + 68) > 0 )
    {
      v7 = 0;
      do
      {
        sub_100C7A30(a2, *(_DWORD *)(v7 + *(_DWORD *)(this + 56) + 256), (char *)(v7 + *(_DWORD *)(this + 56)), 0);
        v7 += 260;
        ++v5;
      }
      while ( v5 < *(_DWORD *)(this + 68) );
    }
  }
}
