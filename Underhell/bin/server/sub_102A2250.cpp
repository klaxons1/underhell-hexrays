_DWORD *__thiscall sub_102A2250(_BYTE *this, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2;
  if ( this[108] )
    *a2 = "passenger_driver";
  else
    *a2 = "passenger";
  return result;
}
