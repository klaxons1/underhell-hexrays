int __thiscall sub_100C2BD0(int this)
{
  int v2; // edi

  while ( *(int *)(this + 8236) > 0 )
  {
    v2 = **(_DWORD **)(this + 8224);
    if ( *(_DWORD *)(this + 8236) - 1 > 0 )
      memcpy(*(void **)(this + 8224), (const void *)(*(_DWORD *)(this + 8224) + 4), 4 * (*(_DWORD *)(this + 8236) - 1));
    --*(_DWORD *)(this + 8236);
    if ( v2 )
    {
      sub_10034930(*(_DWORD *)(v2 + 24));
      *(_DWORD *)(v2 + 24) = 0;
      sub_10034930(v2);
    }
  }
  return sub_1011A810(this + 8224);
}
