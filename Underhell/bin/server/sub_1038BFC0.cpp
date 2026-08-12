int __thiscall sub_1038BFC0(_DWORD *this, int a2)
{
  int result; // eax

  result = sub_100CE0A0(this, a2);
  if ( (this[62] & 0x2000000) != 0 )
  {
    result = sub_100CF460(this);
    if ( result )
    {
      *(float *)(sub_100CF460(this) + 1220) = 3500.0;
      result = sub_100CF460(this);
      *(float *)(result + 1224) = 3500.0;
    }
  }
  return result;
}
