float *__thiscall sub_10286350(float *this, float *a2)
{
  unsigned int v4; // ecx
  float *v5; // eax
  int v6; // edx
  float *result; // eax
  int v8; // eax
  _DWORD *v9; // eax

  v4 = 12;
  v5 = a2;
  v6 = (char *)this - (char *)a2;
  while ( *(_DWORD *)((char *)v5 + v6) == *(_DWORD *)v5 )
  {
    v4 -= 4;
    ++v5;
    if ( v4 < 4 )
      return this;
  }
  v8 = *((_DWORD *)this - 1);
  if ( *(_BYTE *)(v8 + 84) )
  {
    *(_BYTE *)(v8 + 88) |= 1u;
  }
  else
  {
    v9 = *(_DWORD **)(v8 + 24);
    if ( v9 )
    {
      *v9 |= 0x101u;
      *(_WORD *)(sub_10153460(v9) + 2) = 0;
    }
  }
  result = this;
  *this = *a2;
  this[1] = a2[1];
  this[2] = a2[2];
  return result;
}
