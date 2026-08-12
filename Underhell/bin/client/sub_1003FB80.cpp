void __thiscall sub_1003FB80(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // ebx
  int v6; // esi
  int i; // [esp+8h] [ebp-4h]

  v5 = 0;
  if ( (int)this[641] > 0 )
  {
    for ( i = 0; ; i += 68 )
    {
      v6 = i + this[638];
      if ( *(_DWORD *)(v6 + 4) == a2
        && *(_DWORD *)v6 == a3
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 772))(this, v6, a4, 0) )
      {
        break;
      }
      if ( ++v5 >= this[641] )
        return;
    }
    *(_DWORD *)v6 = 0;
    *(_DWORD *)(v6 + 4) = 0;
    *(_BYTE *)(v6 + 12) = 0;
    if ( this[641] - v5 - 1 > 0 )
      memcpy((void *)(this[638] + 68 * v5), (const void *)(this[638] + 68 * v5 + 68), 68 * (this[641] - v5 - 1));
    --this[641];
  }
}
