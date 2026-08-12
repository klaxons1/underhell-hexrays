int *__thiscall sub_100C4E70(int *this, int *a2)
{
  int v2; // edi
  int v4; // edx
  int v5; // eax
  int v6; // ecx

  v2 = a2[3];
  this[3] = 0;
  sub_100C2A80(this, 0, v2, 0);
  if ( v2 > 0 )
  {
    v4 = 0;
    do
    {
      v5 = *a2;
      v6 = *this;
      *(_DWORD *)(v6 + v4) = *(_DWORD *)(*a2 + v4);
      *(_DWORD *)(v6 + v4 + 4) = *(_DWORD *)(v5 + v4 + 4);
      *(_DWORD *)(v6 + v4 + 8) = *(_DWORD *)(v5 + v4 + 8);
      v4 += 12;
      --v2;
    }
    while ( v2 );
  }
  return this;
}
