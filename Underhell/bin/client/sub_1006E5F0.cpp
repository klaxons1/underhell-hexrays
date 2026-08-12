void __thiscall sub_1006E5F0(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // edi
  int v5; // edx

  if ( a2 >= 0 && a2 < this[1] && a2 <= this[7] )
  {
    v2 = *this + 68 * a2;
    if ( *(_DWORD *)(v2 + 60) != a2 )
    {
      v3 = *(_DWORD *)(v2 + 64);
      v4 = *(_DWORD *)(v2 + 60);
      if ( v4 == -1 )
        this[3] = v3;
      else
        *(_DWORD *)(*this + 68 * v4 + 64) = v3;
      if ( v3 == -1 )
      {
        v5 = *(_DWORD *)(v2 + 60);
        --this[6];
        this[4] = v5;
      }
      else
      {
        *(_DWORD *)(*this + 68 * v3 + 60) = *(_DWORD *)(v2 + 60);
        --this[6];
      }
      *(_DWORD *)(v2 + 64) = a2;
      *(_DWORD *)(v2 + 60) = a2;
    }
  }
}
