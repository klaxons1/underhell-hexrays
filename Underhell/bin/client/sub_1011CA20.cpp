int __thiscall sub_1011CA20(int *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // eax

  v3 = this[3];
  v4 = this[1];
  if ( v3 + 1 > v4 )
    sub_100C03E0(this, v3 - v4 + 1);
  ++this[3];
  v5 = *this;
  v6 = this[3] - a2 - 1;
  this[4] = *this;
  if ( v6 > 0 )
    memcpy((void *)(32 * a2 + v5 + 32), (const void *)(32 * a2 + v5), 32 * v6);
  v7 = *this + 32 * a2;
  if ( v7 )
  {
    *(float *)(v7 + 4) = 0.0;
    *(float *)(v7 + 8) = 0.0;
    *(float *)(v7 + 16) = 1.0;
    *(float *)(v7 + 20) = 0.0;
    *(_DWORD *)v7 = 0;
    *(float *)(v7 + 4) = 0.0;
    *(float *)(v7 + 8) = 0.0;
    *(float *)(v7 + 16) = 0.0;
    *(float *)(v7 + 20) = 0.0;
    *(float *)(v7 + 24) = 0.0;
    *(float *)(v7 + 28) = 0.0;
  }
  return a2;
}
