void *__thiscall sub_10187990(float *this)
{
  float *v1; // esi
  int v2; // edi
  void *result; // eax

  v1 = this + 88;
  v2 = 17;
  do
  {
    if ( *((int *)v1 - 4) > 1 )
      *((_DWORD *)v1 - 3) = 100;
    result = memset(v1 + 4, 0, 0xF0u);
    *(v1 - 2) = 0.0;
    *(v1 - 1) = 0.0;
    *v1 = 0.0;
    v1 += 80;
    --v2;
  }
  while ( v2 );
  this[1444] = 0.0;
  return result;
}
