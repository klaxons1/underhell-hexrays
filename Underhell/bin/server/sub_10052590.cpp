void __thiscall sub_10052590(int this, int a2)
{
  int v3; // edx
  int v4; // ecx
  char v5; // al
  _DWORD *v6; // ecx

  if ( a2 )
  {
    v3 = *(_DWORD *)(this + 4);
    if ( *(_DWORD *)(v3 + 2888) == -1
      || off_1061BE18[4 * (*(_DWORD *)(v3 + 2888) & 0xFFF) + 2] != *(_DWORD *)(v3 + 2888) >> 12 )
    {
      v4 = 0;
    }
    else
    {
      v4 = off_1061BE18[4 * (*(_DWORD *)(v3 + 2888) & 0xFFF) + 1];
    }
    if ( v4 != a2 )
    {
      if ( *(_DWORD *)(v3 + 2888) != -1
        && off_1061BE18[4 * (*(_DWORD *)(v3 + 2888) & 0xFFF) + 2] == *(_DWORD *)(v3 + 2888) >> 12
        && off_1061BE18[4 * (*(_DWORD *)(v3 + 2888) & 0xFFF) + 1] )
      {
        sub_100519F0((_DWORD *)this);
        sub_10070510(0.0);
      }
      v5 = sub_10070B10(*(_DWORD *)(this + 4));
      v6 = *(_DWORD **)(this + 4);
      if ( v5 )
      {
        sub_100448D0(v6, a2);
      }
      else
      {
        sub_100448D0(v6, 0);
        sub_10050BE0((float *)(this + 168));
      }
    }
  }
}
