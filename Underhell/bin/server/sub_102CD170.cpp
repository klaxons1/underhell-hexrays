int __thiscall sub_102CD170(int this, int a2)
{
  int v3; // ebx
  int *v4; // ecx
  int result; // eax
  int v6; // ecx

  v3 = *(_DWORD *)(this + 248) | 0x80;
  if ( *(_DWORD *)(this + 248) != v3 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 248);
    }
    *(_DWORD *)(this + 248) = v3;
  }
  result = a2;
  *(_DWORD *)(this + 808) = -1;
  v6 = *(_DWORD *)(a2 + 24);
  if ( v6 == 3 || v6 == 15 )
  {
    *(float *)(this + 1080) = *(float *)(a2 + 8);
    *(float *)(this + 1084) = *(float *)(a2 + 12);
    *(float *)(this + 1088) = *(float *)(a2 + 16);
  }
  else
  {
    *(float *)(this + 1080) = flt_106F1CA8;
    *(float *)(this + 1084) = flt_106F1CAC;
    *(float *)(this + 1088) = flt_106F1CB0;
  }
  return result;
}
