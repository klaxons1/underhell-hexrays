void *__thiscall sub_1013FDD0(int this)
{
  void *result; // eax

  result = sub_100E38F0((float *)this);
  if ( !*(_BYTE *)(this + 854) && (*(_BYTE *)(this + 248) & 4) != 0 )
  {
    *(float *)(this + 828) = *(float *)(this + 840);
    result = sub_1013FB00(this);
  }
  *(_BYTE *)(this + 854) = 1;
  return result;
}
