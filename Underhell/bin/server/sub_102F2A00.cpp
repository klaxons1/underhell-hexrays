BOOL __thiscall sub_102F2A00(float *this)
{
  return (COERCE_UNSIGNED_INT(this[2]) & 0x7F800000) == 0x7F800000
      || (COERCE_UNSIGNED_INT(this[3]) & 0x7F800000) == 0x7F800000
      || (COERCE_UNSIGNED_INT(this[4]) & 0x7F800000) == 0x7F800000
      || !sub_100D5BE0(this + 5);
}
