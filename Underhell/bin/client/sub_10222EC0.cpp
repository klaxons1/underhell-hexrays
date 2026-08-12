int __thiscall sub_10222EC0(_DWORD *this, int a2, int a3, int a4, int a5, int a6, _DWORD *a7, _DWORD *a8)
{
  int v8; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // edi
  int v12; // esi
  int v13; // ebx
  int result; // eax

  v8 = *(_DWORD *)(a2 + 40);
  if ( a4 >= v8 - 1 || v8 <= 1 )
  {
    *a7 = 0;
    *a8 = 0;
    return 0;
  }
  else
  {
    v9 = this[11];
    v10 = (a5 - 2) / (2 * v9);
    v11 = 6 * v9;
    v12 = v10 + 1;
    if ( v10 + 1 > a6 / v11 )
      v12 = a6 / v11;
    v13 = v8 - a4;
    result = v13;
    if ( v12 == v13 - 1 )
      --v12;
    if ( v13 > v12 )
      result = v12;
    *a7 = 2 * this[11] * (result - 1) + 2;
    *a8 = 6 * result * this[11];
  }
  return result;
}
