int __thiscall sub_101FAED0(int this, char a2)
{
  int v2; // eax
  int v3; // esi
  _DWORD *v4; // ecx
  int v5; // esi
  int result; // eax
  int v7; // edx
  int v8; // edx

  if ( a2 )
    ++*(_DWORD *)(this + 276);
  v2 = 0;
  if ( *(_WORD *)(*(_DWORD *)(this + 140) + 38) )
  {
    do
    {
      v3 = *(_DWORD *)(**(_DWORD **)(this + 140) + 4 * (unsigned __int16)v2);
      if ( a2 )
        *(float *)(v3 + 828) = *(float *)(v3 + 832) + *(float *)(v3 + 828);
      *(float *)(v3 + 832) = 0.0;
      ++v2;
    }
    while ( v2 < *(unsigned __int16 *)(*(_DWORD *)(this + 140) + 38) );
  }
  v4 = (_DWORD *)(this + 12);
  v5 = 7;
  do
  {
    for ( result = 0; result < *v4; *(float *)(v8 + 12) = 0.0 )
    {
      if ( a2 )
      {
        v7 = *(_DWORD *)(*(v4 - 3) + 4 * result);
        *(float *)(v7 + 8) = *(float *)(v7 + 12) + *(float *)(v7 + 8);
      }
      v8 = *(_DWORD *)(*(v4 - 3) + 4 * result++);
    }
    v4 += 5;
    --v5;
  }
  while ( v5 );
  return result;
}
