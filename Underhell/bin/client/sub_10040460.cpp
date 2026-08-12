void __thiscall sub_10040460(int this)
{
  int v2; // edi

  while ( *(int *)(this + 24) > 0 )
  {
    v2 = **(_DWORD **)(this + 12);
    if ( *(_DWORD *)(this + 24) - 1 > 0 )
      memcpy(*(void **)(this + 12), (const void *)(*(_DWORD *)(this + 12) + 4), 4 * (*(_DWORD *)(this + 24) - 1));
    --*(_DWORD *)(this + 24);
    sub_10034930(*(_DWORD *)(v2 + 128));
    sub_10034930(v2);
  }
}
