void __thiscall sub_1016B8F0(float *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // ebx

  v2 = 0;
  *this = 0.0;
  if ( *((int *)this + 4) <= 0 )
  {
    this[4] = 0.0;
  }
  else
  {
    do
    {
      v3 = *((_DWORD *)this + 1);
      v4 = *(_DWORD *)(v3 + 4 * v2);
      if ( v4 )
      {
        sub_1016B690(*(_DWORD **)(v3 + 4 * v2));
        sub_10184660(v4);
      }
      ++v2;
    }
    while ( v2 < *((_DWORD *)this + 4) );
    this[4] = 0.0;
  }
}
