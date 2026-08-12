_DWORD *__thiscall sub_1007D3D0(int *this, int a2, int a3)
{
  _DWORD *result; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // ebx

  this[3] = 0;
  result = (_DWORD *)sub_1007CF80(this, 0, a3, 0);
  if ( a3 > 0 )
  {
    v5 = a3;
    v6 = 0;
    do
    {
      result = (_DWORD *)(v6 + *this);
      *result = *(_DWORD *)(v6 + a2);
      result[1] = *(_DWORD *)(v6 + a2 + 4);
      result[2] = *(_DWORD *)(v6 + a2 + 8);
      result[3] = *(_DWORD *)(v6 + a2 + 12);
      result[4] = *(_DWORD *)(v6 + a2 + 16);
      v7 = *(_DWORD *)(v6 + a2 + 20);
      v6 += 24;
      --v5;
      result[5] = v7;
    }
    while ( v5 );
  }
  return result;
}
