void __thiscall sub_1026BC10(int this)
{
  bool v2; // zf
  int i; // esi
  int v4; // esi
  int v5; // eax
  int v6; // [esp+8h] [ebp-8h] BYREF
  _BYTE v7[4]; // [esp+Ch] [ebp-4h] BYREF

  if ( (*(_BYTE *)(this + 348) & 4) != 0 )
  {
    v2 = *(_DWORD *)(this + 216) == 0;
    *(_DWORD *)(this + 352) = 0;
    if ( v2 )
    {
      for ( i = *(_DWORD *)(this + 244); i != -1; i = *(_DWORD *)(v4 + *(_DWORD *)(this + 232) + 8) )
      {
        v4 = 12 * i;
        (*(void (__thiscall **)(_DWORD, int *, _BYTE *))(**(_DWORD **)(v4 + *(_DWORD *)(this + 232)) + 784))(
          *(_DWORD *)(v4 + *(_DWORD *)(this + 232)),
          &v6,
          v7);
        if ( v6 > *(_DWORD *)(this + 352) - 8 )
          *(_DWORD *)(this + 352) = v6 + 8;
      }
    }
    v5 = *(_DWORD *)(this + 220);
    if ( *(_DWORD *)(this + 352) < v5 )
      *(_DWORD *)(this + 352) = v5;
    *(_BYTE *)(this + 348) &= ~4u;
  }
}
