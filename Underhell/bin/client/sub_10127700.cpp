int __thiscall sub_10127700(_DWORD *this, int a2)
{
  bool v2; // zf
  int result; // eax
  int v4; // esi
  int v5; // edi
  int v6; // ebx

  v2 = this[84] == 0;
  result = a2;
  this[49] = a2;
  if ( !v2 )
  {
    result = sub_10128960();
    v4 = result;
    v5 = 1;
    if ( *(int *)(result + 100) > 1 )
    {
      v6 = 144;
      do
      {
        sub_10128980(v6 + *(_DWORD *)(v4 + 88));
        result = sub_10127700(a2);
        ++v5;
        v6 += 144;
      }
      while ( v5 < *(_DWORD *)(v4 + 100) );
    }
  }
  return result;
}
