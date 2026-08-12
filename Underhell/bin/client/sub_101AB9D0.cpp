int __thiscall sub_101AB9D0(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // edx

  result = a2;
  if ( !a2 )
    return sub_100A9200(this, a2);
  v3 = *(_DWORD *)(a2 + 76);
  if ( !v3 || *(_DWORD *)(v3 + 736) != 32 )
    return sub_100A9200(this, a2);
  return result;
}
