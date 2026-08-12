int __thiscall sub_1033D150(_BYTE *this)
{
  int result; // eax
  const char *v3; // eax

  result = sub_10219A30() % 2;
  if ( result )
  {
    v3 = "COMBINEPRISONGUARD_HEARDFMRADIO";
    if ( !this[4976] )
      v3 = "COMBINE_HEARDFMRADIO";
    return sub_100AC410((int)(this + 4244), v3, -1, 0);
  }
  return result;
}
