int __thiscall sub_100BA1B0(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  int result; // eax
  int v4; // ecx

  if ( a2 < 1 || a2 >= this[1] )
    return 0;
  v2 = &this[13 * a2];
  result = v2[11];
  if ( result != -1 )
    return result;
  v4 = v2[14];
  if ( v4 )
    return (int)*(float *)(*(_DWORD *)(v4 + 28) + 44);
  else
    return 0;
}
