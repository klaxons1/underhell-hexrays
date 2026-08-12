_DWORD *__thiscall sub_100A7D60(char *this)
{
  _DWORD *v1; // edx
  int v2; // esi
  _DWORD *result; // eax
  int v4; // ecx

  v1 = this + 60;
  v2 = 3;
  do
  {
    result = v1;
    v4 = 17;
    do
    {
      *result = -9999;
      result += 3;
      --v4;
    }
    while ( v4 );
    ++v1;
    --v2;
  }
  while ( v2 );
  return result;
}
