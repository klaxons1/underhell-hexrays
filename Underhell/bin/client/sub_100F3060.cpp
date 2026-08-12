char __thiscall sub_100F3060(int this, float *a2)
{
  char result; // al

  if ( (*(_BYTE *)(this + 156) & 8) != 0 )
  {
    result = sub_100EB670(this + 8, a2);
    if ( result )
    {
      *(float *)(this + 224) = *a2;
      *(float *)(this + 228) = a2[1];
      *(float *)(this + 232) = a2[2];
    }
  }
  else
  {
    result = (char)a2;
    *(float *)(this + 224) = *a2;
    *(float *)(this + 228) = a2[1];
    *(float *)(this + 232) = a2[2];
  }
  return result;
}
