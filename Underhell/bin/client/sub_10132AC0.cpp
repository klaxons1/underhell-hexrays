float *__thiscall sub_10132AC0(_DWORD *this, int a2)
{
  float *result; // eax

  for ( result = *(float **)(this[1] + 32976); result; result = *(float **)result )
  {
    if ( *((_DWORD *)result + 7) == a2 )
      result[6] = *((float *)off_103DC81C + 3) - 1000.0;
  }
  return result;
}
