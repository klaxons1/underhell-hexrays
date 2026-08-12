void __thiscall sub_101F9870(int *this, unsigned int a2)
{
  int v3; // ecx
  int v4; // eax

  if ( a2 && !sub_101F9620(a2, this + 7) && *(_DWORD *)(a2 + 304) != a2 )
  {
    v3 = *(_DWORD *)(a2 + 304);
    v4 = *(_DWORD *)(a2 + 308);
    if ( v3 )
      *(_DWORD *)(v3 + 308) = v4;
    else
      this[3] = v4;
    if ( v4 )
      *(_DWORD *)(v4 + 304) = v3;
    else
      this[4] = v3;
    --this[6];
    *(_DWORD *)(a2 + 308) = a2;
    *(_DWORD *)(a2 + 304) = a2;
  }
}
