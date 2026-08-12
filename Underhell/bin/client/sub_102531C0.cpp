int __thiscall sub_102531C0(_DWORD *this, char a2)
{
  int result; // eax

  result = this[58];
  this[78] = (result != 0) - 1;
  this[79] = result;
  if ( a2 )
    this[70] = result;
  return result;
}
