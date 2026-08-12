float *__thiscall sub_100921A0(int this, char *Source, char *a3)
{
  int v4; // eax
  float *v5; // eax
  float *result; // eax

  if ( *(_DWORD *)(this + 440) )
  {
    sub_10180B10(Source, a3);
    v4 = *(_DWORD *)(this + 440);
    *(float *)(this + 472) = 0.0;
    *(float *)(this + 476) = 0.0;
    *(_BYTE *)(this + 468) = 0;
    v5 = *(float **)(v4 + 280);
    *(float *)(this + 444) = v5[7];
    *(float *)(this + 448) = v5[8];
    *(float *)(this + 452) = v5[9];
    result = *(float **)(*(_DWORD *)(this + 440) + 280);
    *(float *)(this + 456) = result[4];
    *(float *)(this + 460) = result[5];
    *(float *)(this + 464) = result[6];
  }
  return result;
}
