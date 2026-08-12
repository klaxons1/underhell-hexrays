void __thiscall sub_100396A0(_DWORD *this)
{
  int v1; // esi
  int v2; // eax
  int v3; // edi

  v1 = this[284];
  if ( v1 != -1 )
  {
    v2 = dword_10404D6C - 1;
    if ( dword_10404D6C - 1 == v1 )
    {
      if ( dword_10404D6C > 0 )
      {
        *(_DWORD *)(dword_10404D60 + 4 * v2) = *(_DWORD *)(dword_10404D60 + 4 * dword_10404D6C-- - 4);
        this[284] = -1;
        return;
      }
    }
    else
    {
      v3 = *(_DWORD *)(dword_10404D60 + 4 * v2);
      if ( dword_10404D6C > 0 )
        *(_DWORD *)(dword_10404D60 + 4 * v2) = *(_DWORD *)(dword_10404D60 + 4 * dword_10404D6C-- - 4);
      *(_DWORD *)(v3 + 1136) = this[284];
      *(_DWORD *)(dword_10404D60 + 4 * this[284]) = v3;
    }
    this[284] = -1;
  }
}
