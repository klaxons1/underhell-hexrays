int __thiscall sub_100E9340(_DWORD *this)
{
  int result; // eax
  int v2; // edx
  int *v3; // ecx
  int v4; // esi

  result = -1;
  if ( (int)this[47] > 0 )
    result = this[47];
  v2 = this[39];
  if ( v2 > 0 )
  {
    v3 = (int *)(this[36] + 8);
    v4 = v2;
    do
    {
      if ( *v3 > 0 && (*v3 < result || result == -1) )
        result = *v3;
      v3 += 4;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
