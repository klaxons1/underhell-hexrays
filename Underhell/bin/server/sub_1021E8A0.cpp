void __thiscall sub_1021E8A0(_DWORD *this, void *Src, int Size)
{
  int v3; // esi

  v3 = this[6];
  if ( v3 )
  {
    if ( Size <= *(_DWORD *)(v3 + 12) - *(_DWORD *)(v3 + 8) )
    {
      memcpy_0(*(void **)(v3 + 4), Src, Size);
      *(_DWORD *)(v3 + 4) += Size;
      *(_DWORD *)(v3 + 8) += Size;
    }
    else
    {
      *(_DWORD *)(v3 + 8) = *(_DWORD *)(v3 + 12);
      Warning("Save/Restore overflow!\n");
    }
  }
}
