int __thiscall sub_102940F0(_DWORD *this, int a2)
{
  if ( a2 < 0 || a2 >= this[5] )
    Error("CUserMessages::GetUserMessageSize( %i ) out of range!!!\n", a2);
  return *(_DWORD *)(this[1] + 24 * a2 + 16);
}
