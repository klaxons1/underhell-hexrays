_DWORD *__thiscall sub_1022B730(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx
  int v4; // esi
  int v5; // edi
  int v6; // edx
  bool v7; // zf
  int i; // [esp+4h] [ebp-4h]

  result = a2;
  v3 = a2[3];
  v4 = 0;
  for ( i = v3; v4 < v3; result[5] = v5 )
  {
    v5 = *(_DWORD *)(*a2 + 4 * v4);
    result = this;
    if ( this[5] )
    {
      v6 = (int)(this + 5);
      do
      {
        result = *(_DWORD **)v6;
        v7 = *(_DWORD *)(*(_DWORD *)v6 + 20) == 0;
        v6 = *(_DWORD *)v6 + 20;
      }
      while ( !v7 );
      v3 = i;
    }
    ++v4;
  }
  return result;
}
