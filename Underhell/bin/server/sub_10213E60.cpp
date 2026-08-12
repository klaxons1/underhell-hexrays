int __thiscall sub_10213E60(int this)
{
  int v2; // ecx
  float v3; // eax
  float v4; // ecx
  float v5; // edx

  *(float *)(this + 1956) = *(float *)(this + 728);
  *(float *)(this + 1960) = *(float *)(this + 732);
  *(float *)(this + 1964) = *(float *)(this + 736);
  *(float *)(this + 1920) = 0.0;
  *(float *)(this + 1924) = 0.0;
  *(float *)(this + 1928) = 1.0;
  sub_10206E20((float *)this);
  sub_10213980(v2);
  if ( sub_102084A0(this) )
  {
    v3 = *(float *)(this + 1968);
    v4 = *(float *)(this + 1972);
    v5 = *(float *)(this + 1976);
    *(float *)(this + 1968) = *(float *)(this + 1980);
    *(float *)(this + 1972) = *(float *)(this + 1984);
    *(float *)(this + 1976) = *(float *)(this + 1988);
    *(float *)(this + 1980) = v3;
    *(float *)(this + 1984) = v4;
    *(float *)(this + 1988) = v5;
  }
  sub_102085B0(
    this,
    *(float *)(this + 728),
    *(_DWORD *)(this + 732),
    *(_DWORD *)(this + 736),
    *(float *)(this + 1968),
    *(_DWORD *)(this + 1972),
    *(_DWORD *)(this + 1976),
    (float *)(this + 2004),
    (float *)(this + 2016));
  return sub_102085B0(
           this,
           *(float *)(this + 728),
           *(_DWORD *)(this + 732),
           *(_DWORD *)(this + 736),
           *(float *)(this + 1980),
           *(_DWORD *)(this + 1984),
           *(_DWORD *)(this + 1988),
           (float *)(this + 2028),
           (float *)(this + 2040));
}
