int (__thiscall ***__thiscall sub_103F0BB0(int this))(_DWORD, _DWORD)
{
  int *v3; // ecx

  if ( *(_DWORD *)(this + 2124) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 2124) = 0;
      return sub_103EA3C0((void *)this);
    }
    v3 = *(int **)(this + 24);
    if ( v3 )
      sub_100194B0(v3, 2124);
    *(_DWORD *)(this + 2124) = 0;
  }
  return sub_103EA3C0((void *)this);
}
