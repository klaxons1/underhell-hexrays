int __thiscall sub_10125B70(int this)
{
  int v2; // edx
  int result; // eax

  sub_10112C00(this + 320, 0);
  result = sub_100E0970(this, v2, 0, 0);
  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
    *(float *)(this + 800) = 0.0;
  return result;
}
