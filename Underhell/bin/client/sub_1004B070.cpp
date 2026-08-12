int __thiscall sub_1004B070(int this, float a2)
{
  int v3; // edx
  double v4; // st6
  double v5; // st6
  int v6; // ecx
  int v7; // ecx
  int *v8; // eax
  int v9; // eax
  int v10; // ecx

  sub_1004AF00((_DWORD *)this);
  v3 = *(_DWORD *)(*(_DWORD *)(this + 16420) + 4);
  if ( *(_BYTE *)(this + 20) )
  {
    if ( a2 >= (double)*(float *)(this + 24) )
      v4 = *(float *)(this + 24);
    else
      v4 = a2;
    *(float *)(this + 24) = v4;
    if ( a2 <= (double)*(float *)(this + 28) )
      v5 = *(float *)(this + 28);
    else
      v5 = a2;
    v6 = *(_DWORD *)(this + 16416);
    *(float *)(this + 28) = v5;
    *(float *)(this + 4 * v6 + 32) = a2;
    ++*(_DWORD *)(this + 16416);
  }
  else
  {
    v7 = *(_DWORD *)(this + 16420);
    if ( v7 == *(_DWORD *)(*(_DWORD *)(this + 4) + 8) || a2 >= (double)*(float *)(this + 16428) )
    {
      *(float *)(this + 16428) = a2;
    }
    else
    {
      v8 = *(int **)v7;
      v8[1] = *(_DWORD *)(v7 + 4);
      **(_DWORD **)(v7 + 4) = *(_DWORD *)v7;
      *(_DWORD *)(v7 + 4) = v8;
      v9 = *v8;
      *(_DWORD *)v7 = v9;
      *(_DWORD *)(v9 + 4) = v7;
      **(_DWORD **)(v7 + 4) = v7;
    }
  }
  v10 = *(_DWORD *)(this + 4) + 4;
  *(_DWORD *)(this + 16420) = v3;
  if ( v3 == v10 )
    return 0;
  **(_DWORD **)(this + 8) = *(_DWORD *)(v3 + 8);
  return *(_DWORD *)(this + 16420);
}
