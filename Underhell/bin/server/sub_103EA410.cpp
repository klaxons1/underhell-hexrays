float *__thiscall sub_103EA410(_WORD *this)
{
  _BYTE *v1; // edx
  float *v2; // esi
  float *result; // eax
  int v4; // ecx

  this[958] = 0;
  v1 = this + 924;
  v2 = (float *)(this + 950);
  result = (float *)(this + 930);
  v4 = 4;
  do
  {
    *(v1 - 4) = 0;
    *v1 = 0;
    *(result - 2) = 0.0;
    *(result - 1) = 0.0;
    ++v2;
    *result = 0.0;
    ++v1;
    *(v2 - 1) = 0.0;
    result += 3;
    --v4;
  }
  while ( v4 );
  return result;
}
