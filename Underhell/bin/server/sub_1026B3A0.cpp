char __thiscall sub_1026B3A0(float *this, int a2)
{
  char result; // al
  char v4; // bl

  if ( *(_BYTE *)(a2 + 15) )
    return 0;
  v4 = sub_1026B1F0(this, *(float *)(a2 + 8));
  if ( v4 )
  {
    if ( *(_DWORD *)(dword_106CEF04 + 48) )
      Msg("Crashed!: speed %.2f, lastSpeed %.2f\n", *(float *)(a2 + 8), this[103]);
  }
  result = v4;
  this[103] = *(float *)(a2 + 8);
  return result;
}
