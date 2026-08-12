void __thiscall sub_1022F6E0(_DWORD *this, int a2)
{
  __int64 v2; // [esp-8h] [ebp-Ch]

  if ( (unsigned int)(a2 - 1) <= 7 )
  {
    HIDWORD(v2) = this;
    LODWORD(v2) = this;
    sub_1010DD80(&this[6 * a2 + 250], v2, 0.0);
  }
}
