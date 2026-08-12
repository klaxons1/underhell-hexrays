void __thiscall sub_102864A0(int this)
{
  _DWORD *v1; // esi
  int *v2; // ecx

  if ( *(_BYTE *)(this + 932) )
  {
    v1 = (_DWORD *)(this + 828);
    if ( *(_DWORD *)(this + 828) != 1 )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *v1 = 1;
      }
      else
      {
        v2 = *(int **)(this + 24);
        if ( v2 )
          sub_100194B0(v2, 828);
        *v1 = 1;
      }
    }
  }
}
