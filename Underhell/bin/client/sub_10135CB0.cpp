void __thiscall sub_10135CB0(int this)
{
  double v1; // st6

  if ( *(double *)(this + 136) != *((float *)off_103DC81C + 3)
    && (*(_BYTE *)(this + 124) || 0.0 == *(float *)(this + 120)) )
  {
    v1 = *(float *)(dword_10439CEC + 44);
    *(_BYTE *)(this + 124) = 0;
    *(float *)(this + 120) = v1;
    *(float *)(this + 128) = 0.0;
  }
}
