void __thiscall sub_10057220(_DWORD *this, int a2)
{
  int v3; // edi
  _DWORD *v4; // ecx
  _DWORD *i; // eax
  int v6; // ebx
  int v7; // ecx

  v3 = 0;
  if ( (int)this[3] > 0 )
  {
    v4 = (_DWORD *)*this;
    for ( i = (_DWORD *)*this; *i != a2; ++i )
    {
      if ( ++v3 >= this[3] )
        return;
    }
    v6 = v4[v3];
    if ( v6 )
    {
      sub_100564B0(v4[v3]);
      sub_10184660(v6);
    }
    v7 = this[3];
    if ( v7 > 0 )
    {
      *(_DWORD *)(*this + 4 * v3) = *(_DWORD *)(*this + 4 * v7 - 4);
      --this[3];
    }
  }
}
