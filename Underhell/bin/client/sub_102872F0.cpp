void __thiscall sub_102872F0(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // ebx

  if ( a2 >= 0 && a2 < this[1] && a2 <= this[7] )
  {
    v2 = *this + 16 * a2;
    if ( *(_DWORD *)(v2 + 8) != a2 )
    {
      v3 = *(_DWORD *)(v2 + 12);
      v4 = *(_DWORD *)(v2 + 8);
      if ( v4 == -1 )
        this[3] = v3;
      else
        *(_DWORD *)(*this + 16 * v4 + 12) = v3;
      if ( v3 == -1 )
      {
        --this[6];
        this[4] = v4;
      }
      else
      {
        *(_DWORD *)(16 * v3 + *this + 8) = v4;
        --this[6];
      }
      *(_DWORD *)(v2 + 12) = a2;
      *(_DWORD *)(v2 + 8) = a2;
    }
  }
}
