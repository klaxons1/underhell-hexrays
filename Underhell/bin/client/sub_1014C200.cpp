void *__thiscall sub_1014C200(void *this)
{
  void *result; // eax
  _DWORD *v2; // edx
  int v3; // esi

  result = this;
  v2 = this;
  v3 = 256;
  do
  {
    v2[8] = v2;
    v2[9] = v2;
    v2 += 10;
    --v3;
  }
  while ( v3 );
  return result;
}
