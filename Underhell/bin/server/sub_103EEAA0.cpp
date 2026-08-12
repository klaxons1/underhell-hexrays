void __thiscall sub_103EEAA0(_DWORD *this, int a2, char a3)
{
  __int64 v3; // [esp-8h] [ebp-Ch]
  float v4; // [esp+0h] [ebp-4h]

  v4 = 0.0;
  HIDWORD(v3) = a2;
  LODWORD(v3) = this - 372;
  if ( a3 )
    sub_1010DD80(this + 118, v3, v4);
  else
    sub_1010DD80(this + 130, v3, v4);
}
