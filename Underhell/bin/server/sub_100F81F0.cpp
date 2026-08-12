int __thiscall sub_100F81F0(int this)
{
  int result; // eax
  int *v2; // esi
  int v3; // edi
  int *v4; // ecx

  result = dword_106B31C8;
  if ( *(_DWORD *)(dword_106B31C8 + 20) != 1 )
  {
    v2 = (int *)(this + 4520);
    v3 = (*(_DWORD *)(this + 4520) + 1) % 4;
    if ( *(_DWORD *)(this + 4520) != v3 )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *v2 = v3;
      }
      else
      {
        v4 = *(int **)(this + 24);
        if ( v4 )
          result = sub_100194B0(v4, 4520);
        *v2 = v3;
      }
    }
  }
  return result;
}
