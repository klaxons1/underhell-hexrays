int __thiscall sub_10129C10(_DWORD *this, int a2)
{
  if ( !this[a2 + 6] )
    Msg("GetCustomCameraTexture %i is returning null\n", a2);
  return this[a2 + 6];
}
