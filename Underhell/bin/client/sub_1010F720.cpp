_DWORD *__thiscall sub_1010F720(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // ebx
  int v3; // edi
  int v4; // ecx
  int v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // edx

  result = (_DWORD *)*this;
  if ( *this )
  {
    v2 = (int)(result - 1);
    v3 = *(result - 1);
    v4 = 3 * v3;
    v5 = v3 - 1;
    v6 = &result[v4];
    if ( v5 >= 0 )
    {
      v7 = v6 + 2;
      do
      {
        v8 = *(v7 - 3);
        v7 -= 3;
        sub_10034930(v8);
        --v5;
        *v7 = 0;
      }
      while ( v5 >= 0 );
    }
    sub_10034930(v2);
    result = this;
    *this = 0;
  }
  else
  {
    *this = 0;
  }
  return result;
}
