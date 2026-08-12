char __thiscall sub_10116870(int this, void *a2, int Size)
{
  int v4; // ecx

  v4 = *(_DWORD *)(this + 12);
  if ( v4 == *(_DWORD *)(this + 8) )
    return 0;
  if ( Size <= v4 - *(_DWORD *)(this + 8) )
  {
    if ( a2 )
      memcpy_0(a2, *(const void **)(this + 4), Size);
    *(_DWORD *)(this + 4) += Size;
    *(_DWORD *)(this + 8) += Size;
    return 1;
  }
  else
  {
    *(_DWORD *)(this + 8) = v4;
    return 0;
  }
}
