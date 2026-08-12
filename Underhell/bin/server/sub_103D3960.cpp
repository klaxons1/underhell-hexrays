void __thiscall sub_103D3960(int this)
{
  int *v1; // esi
  int v2; // edi
  double v3; // st7
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  float *v7; // eax
  float v8; // [esp+0h] [ebp-4h]

  if ( *(float *)(this + 808) >= 0.0 )
  {
    v1 = (int *)(this + 820);
    v2 = *(_DWORD *)(this + 832);
    if ( *(float *)(this + 808) == 0.0 )
      v3 = *(float *)(dword_106B31C8 + 12) + 4.0;
    else
      v3 = *(float *)(dword_106B31C8 + 12) + *(float *)(this + 808);
    v4 = *(_DWORD *)(this + 824);
    v8 = v3 - *(float *)(this + 852);
    if ( v2 + 1 > v4 )
      sub_102ABFC0(v1, v2 - v4 + 1);
    ++v1[3];
    v5 = *v1;
    v6 = v1[3] - v2 - 1;
    v1[4] = *v1;
    if ( v6 > 0 )
      memcpy((void *)(v5 + 4 * v2 + 4), (const void *)(v5 + 4 * v2), 4 * v6);
    v7 = (float *)(*v1 + 4 * v2);
    if ( v7 )
      *v7 = v8;
  }
}
