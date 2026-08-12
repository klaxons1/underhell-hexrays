char __thiscall sub_1005A630(_DWORD *this, int a2)
{
  void *v3; // eax
  int v4; // ecx

  sub_1006FE10(a2);
  v3 = (void *)sub_1004C590(this, 0);
  if ( v3 )
  {
    LOBYTE(v3) = sub_10058900(v3, &a2);
    if ( (_BYTE)v3 )
    {
      v4 = a2;
      if ( a2 )
      {
        *(float *)(a2 + 72) = flt_106F1CA8;
        *(float *)(v4 + 76) = flt_106F1CAC;
        *(float *)(v4 + 80) = flt_106F1CB0;
        *(float *)(v4 + 88) = flt_106F1CA8;
        *(float *)(v4 + 92) = flt_106F1CAC;
        *(float *)(v4 + 96) = flt_106F1CB0;
        *(_DWORD *)(v4 + 116) = 0;
        *(_DWORD *)(v4 + 64) = 0;
        LOBYTE(v3) = sub_1004BA00((int *)v4, 0);
      }
    }
  }
  return (char)v3;
}
