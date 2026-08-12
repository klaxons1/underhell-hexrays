char __thiscall sub_10220AC0(_DWORD *this, _DWORD *a2, int *a3, int *a4)
{
  unsigned int v5; // eax
  int v6; // edx
  int v7; // edx
  int v8; // ecx
  _DWORD **v9; // edx
  int v10; // eax
  _DWORD *v11; // edx

  v5 = sub_10430EC0(a2);
  if ( *((_BYTE *)this + 22) )
    v6 = v5 & this[6];
  else
    v6 = v5 % this[3];
  *a3 = v6;
  v7 = 5 * v6;
  v8 = *(_DWORD *)(*this + 4 * v7 + 12);
  v9 = (_DWORD **)(*this + 4 * v7);
  v10 = 0;
  if ( v8 > 0 )
  {
    v11 = *v9;
    do
    {
      if ( *v11 == *a2 )
        break;
      ++v10;
      v11 += 2;
    }
    while ( v10 < v8 );
  }
  if ( v10 == v8 )
    return 0;
  *a4 = v10;
  return 1;
}
