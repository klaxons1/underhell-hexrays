void __thiscall sub_100EFC90(int this)
{
  int v2; // edi

  while ( *(int *)(this + 24) > 0 )
  {
    v2 = **(_DWORD **)(this + 12);
    if ( *(_DWORD *)(this + 24) - 1 > 0 )
      memcpy(*(void **)(this + 12), (const void *)(*(_DWORD *)(this + 12) + 4), 4 * (*(_DWORD *)(this + 24) - 1));
    --*(_DWORD *)(this + 24);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D8 + 336))(dword_106B31D8, *(_DWORD *)(v2 + 128));
    sub_10184660(v2);
  }
}
