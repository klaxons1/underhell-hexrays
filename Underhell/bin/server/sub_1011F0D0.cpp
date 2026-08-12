void __thiscall sub_1011F0D0(_DWORD *this)
{
  __int64 v1; // [esp-8h] [ebp-Ch]
  float v2; // [esp+0h] [ebp-4h]

  v2 = 0.0;
  HIDWORD(v1) = this;
  LODWORD(v1) = this;
  if ( this[200] == 3 )
    sub_1010DD80(this + 264, v1, v2);
  else
    sub_1010DD80(this + 270, v1, v2);
}
