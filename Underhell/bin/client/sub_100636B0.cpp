void __thiscall sub_100636B0(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // edi
  int v5; // edx

  if ( a2 >= 0 && a2 < this[1] && a2 <= this[7] )
  {
    v2 = *this + 12 * a2;
    if ( *(_DWORD *)(v2 + 4) != a2 )
    {
      v3 = *(_DWORD *)(v2 + 8);
      v4 = *(_DWORD *)(v2 + 4);
      if ( v4 == -1 )
        this[3] = v3;
      else
        *(_DWORD *)(*this + 12 * v4 + 8) = v3;
      if ( v3 == -1 )
      {
        v5 = *(_DWORD *)(v2 + 4);
        --this[6];
        this[4] = v5;
      }
      else
      {
        *(_DWORD *)(*this + 12 * v3 + 4) = *(_DWORD *)(v2 + 4);
        --this[6];
      }
      *(_DWORD *)(v2 + 8) = a2;
      *(_DWORD *)(v2 + 4) = a2;
    }
  }
}
