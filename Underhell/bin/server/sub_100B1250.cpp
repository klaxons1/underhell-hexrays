int __thiscall sub_100B1250(_DWORD *this, int a2)
{
  int result; // eax

  result = this[16] - a2 - 1;
  if ( result > 0 )
    result = (int)memcpy(&this[a2], &this[a2 + 1], 4 * result);
  --this[16];
  return result;
}
