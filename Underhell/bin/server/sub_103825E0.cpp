int __thiscall sub_103825E0(_BYTE *this)
{
  int result; // eax

  result = sub_1001F800();
  if ( this[3855] )
    return result & 0xFFFDFFFF;
  return result;
}
