_DWORD *__thiscall sub_1014C220(_DWORD *this)
{
  _DWORD *v1; // edi
  int v2; // ebx
  int v3; // eax
  int v4; // esi
  _DWORD *result; // eax
  int v6; // ecx

  v1 = this;
  v2 = 256;
  do
  {
    v3 = v1[9];
    if ( (_DWORD *)v3 != v1 )
    {
      do
      {
        v4 = *(_DWORD *)(v3 + 36);
        sub_10034930(v3);
        v3 = v4;
      }
      while ( (_DWORD *)v4 != v1 );
    }
    v1 += 10;
    --v2;
  }
  while ( v2 );
  result = this;
  v6 = 256;
  do
  {
    result[8] = result;
    result[9] = result;
    result += 10;
    --v6;
  }
  while ( v6 );
  return result;
}
