int __thiscall sub_10254130(int this)
{
  int v1; // esi
  int result; // eax
  _DWORD *v3; // edx

  v1 = *(_DWORD *)(this + 272);
  result = 0;
  if ( v1 > 0 )
  {
    v3 = *(_DWORD **)(this + 260);
    do
    {
      if ( *(_DWORD *)(this + 280) < *v3 )
        break;
      ++result;
      ++v3;
    }
    while ( result < v1 );
  }
  if ( *(_BYTE *)(this + 285) )
  {
    if ( *(_DWORD *)(this + 280) != *(_DWORD *)(this + 232) )
      --result;
  }
  return result;
}
