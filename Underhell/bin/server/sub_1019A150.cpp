void __thiscall sub_1019A150(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // ebx
  int v5; // edx

  if ( a2 >= 0 && a2 < this[1] && a2 <= this[7] )
  {
    v2 = *this + 32 * a2;
    if ( *(_DWORD *)(v2 + 24) != a2 )
    {
      v3 = *(_DWORD *)(v2 + 28);
      v4 = *(_DWORD *)(v2 + 24);
      if ( v4 == -1 )
        this[3] = v3;
      else
        *(_DWORD *)(32 * v4 + *this + 28) = v3;
      if ( v3 == -1 )
      {
        v5 = *(_DWORD *)(v2 + 24);
        --this[6];
        this[4] = v5;
      }
      else
      {
        *(_DWORD *)(32 * v3 + *this + 24) = *(_DWORD *)(v2 + 24);
        --this[6];
      }
      *(_DWORD *)(v2 + 28) = a2;
      *(_DWORD *)(v2 + 24) = a2;
    }
  }
}
