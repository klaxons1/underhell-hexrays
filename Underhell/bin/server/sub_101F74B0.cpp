__int16 __thiscall sub_101F74B0(int *this)
{
  unsigned __int16 v2; // ax
  int v3; // edi
  int v4; // eax

  v2 = sub_101EA1A0(this, 0);
  v3 = v2;
  sub_101F2800((int)this, 0xFFFFu, v2);
  v4 = *this + 40 * v3;
  if ( v4 )
  {
    *(_DWORD *)(v4 + 4) = 0;
    *(float *)v4 = 0.0;
    *(_DWORD *)(v4 + 8) = 0;
    *(float *)(v4 + 12) = 0.0;
    *(float *)(v4 + 16) = 0.0;
    *(float *)(v4 + 20) = 0.0;
    *(float *)(v4 + 24) = 0.0;
    *(float *)(v4 + 28) = 0.0;
    *(float *)(v4 + 32) = 0.0;
  }
  return v3;
}
