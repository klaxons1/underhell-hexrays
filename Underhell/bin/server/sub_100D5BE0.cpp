BOOL __thiscall sub_100D5BE0(float *this)
{
  return (COERCE_UNSIGNED_INT(*this) & 0x7F800000) != 0x7F800000
      && (COERCE_UNSIGNED_INT(this[1]) & 0x7F800000) != 0x7F800000
      && (COERCE_UNSIGNED_INT(this[2]) & 0x7F800000) != 0x7F800000;
}
