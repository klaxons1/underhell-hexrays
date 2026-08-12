void *__thiscall sub_100E9800(_DWORD *this, int a2)
{
  void *result; // eax
  int v3; // ebx
  int v4; // esi

  result = off_103DC81C;
  v3 = this[5];
  this[7] = *((_DWORD *)off_103DC81C + 1);
  if ( v3 > 0 )
  {
    v4 = 0;
    do
    {
      result = (void *)sub_100F16B0(a2);
      v4 += 24;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
