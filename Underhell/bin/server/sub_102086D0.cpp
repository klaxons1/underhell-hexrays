void __thiscall sub_102086D0(int this)
{
  int v1; // eax
  double v2; // st7
  double v3; // st7
  float v4; // [esp+0h] [ebp-Ch] BYREF
  float v5; // [esp+4h] [ebp-8h]
  float v6; // [esp+8h] [ebp-4h]

  if ( (*(_BYTE *)(this + 248) & 1) != 0 || (v1 = *(_DWORD *)(this + 1936), v1 == 1) )
  {
    v4 = *(float *)(this + 1968);
    v5 = *(float *)(this + 1972);
    v2 = *(float *)(this + 1976);
    goto LABEL_10;
  }
  if ( v1 == 2 )
  {
    v4 = *(float *)(this + 1980);
    v5 = *(float *)(this + 1984);
    v2 = *(float *)(this + 1988);
LABEL_10:
    v6 = v2;
    *(_DWORD *)(this + 1672) = 2;
    sub_100E11A0(this, &v4);
    return;
  }
  if ( v1 == 3 )
  {
    v4 = *(float *)(this + 1944);
    v5 = *(float *)(this + 1948);
    v3 = *(float *)(this + 1952);
    *(_DWORD *)(this + 1672) = 4;
  }
  else
  {
    v4 = *(float *)(this + 1956);
    v5 = *(float *)(this + 1960);
    v3 = *(float *)(this + 1964);
    *(_DWORD *)(this + 1672) = 0;
  }
  v6 = v3;
  sub_100E11A0(this, &v4);
}
