void __thiscall sub_1021EB10(_DWORD *this, void *Src, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = this[6];
  v4 = 16 * a3;
  if ( v3 )
  {
    if ( v4 <= *(_DWORD *)(v3 + 12) - *(_DWORD *)(v3 + 8) )
    {
      memcpy_0(*(void **)(v3 + 4), Src, 16 * a3);
      *(_DWORD *)(v3 + 4) += v4;
      *(_DWORD *)(v3 + 8) += v4;
    }
    else
    {
      *(_DWORD *)(v3 + 8) = *(_DWORD *)(v3 + 12);
      Warning("Save/Restore overflow!\n");
    }
  }
}
