void __thiscall sub_100A8080(_DWORD *this)
{
  int v2; // ecx
  int v3; // edx
  int v4; // eax
  int v5; // esi

  v2 = this[1];
  if ( *(float *)(v2 + 4212) > 10000.0 )
    *(float *)(v2 + 4212) = 10000.0;
  if ( 0.0 != *(float *)(this[1] + 4212) )
  {
    *(float *)(this[1] + 4212) = *(float *)(this[1] + 4212) - *((float *)off_103DC81C + 4) * 1000.0;
    v3 = this[1];
    if ( *(float *)(v3 + 4212) <= 0.0 || !*(_BYTE *)(v3 + 320) )
    {
      *(float *)(v3 + 4212) = 0.0;
      sub_1000DEC0((_DWORD *)this[1], 4);
    }
    v4 = this[1];
    v5 = this[2];
    *(float *)(v5 + 64) = *(float *)(v4 + 4200);
    *(float *)(v5 + 68) = *(float *)(v4 + 4204);
  }
}
