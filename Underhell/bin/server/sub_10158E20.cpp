void __thiscall sub_10158E20(int this)
{
  int v2; // ecx
  int v3; // edx
  int v4; // eax
  int v5; // esi

  v2 = *(_DWORD *)(this + 4);
  if ( *(float *)(v2 + 4136) > 10000.0 )
    *(float *)(v2 + 4136) = 10000.0;
  if ( 0.0 != *(float *)(*(_DWORD *)(this + 4) + 4136) )
  {
    *(float *)(*(_DWORD *)(this + 4) + 4136) = *(float *)(*(_DWORD *)(this + 4) + 4136)
                                             - *(float *)(dword_106B31C8 + 16) * 1000.0;
    v3 = *(_DWORD *)(this + 4);
    if ( *(float *)(v3 + 4136) <= 0.0 || !*(_BYTE *)(v3 + 447) )
    {
      *(float *)(v3 + 4136) = 0.0;
      sub_100EA9A0(*(int **)(this + 4), 4);
    }
    v4 = *(_DWORD *)(this + 4);
    v5 = *(_DWORD *)(this + 8);
    *(float *)(v5 + 64) = *(float *)(v4 + 4140);
    *(float *)(v5 + 68) = *(float *)(v4 + 4144);
  }
}
