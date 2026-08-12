int __thiscall sub_1014E840(int this)
{
  int v2; // ebx
  int result; // eax
  int *v4; // ecx

  sub_1014E510(this);
  *(_DWORD *)this = &CFunc_DustMotes::`vftable';
  v2 = *(_DWORD *)(this + 836) | 2;
  result = this;
  if ( *(_DWORD *)(this + 836) != v2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 836) = v2;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 836);
      *(_DWORD *)(this + 836) = v2;
      return this;
    }
  }
  return result;
}
