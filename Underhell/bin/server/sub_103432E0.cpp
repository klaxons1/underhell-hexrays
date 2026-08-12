int __thiscall sub_103432E0(_BYTE *this)
{
  const char *v1; // eax

  v1 = "COMBINEPRISONGUARD_SPOTFRIENDLYBODY";
  if ( !this[4976] )
    v1 = "COMBINE_SPOTFRIENDLYBODY";
  return sub_100AC410((int)(this + 4244), v1, -1, 0);
}
