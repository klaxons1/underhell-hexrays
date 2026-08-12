int __thiscall sub_100D8A80(int *this, int a2, float a3, float a4)
{
  bool v4; // cc
  int result; // eax
  _DWORD v6[3]; // [esp+0h] [ebp-Ch] BYREF

  v4 = this[67] < 2048;
  result = a2;
  *(float *)&v6[1] = a3;
  v6[0] = a2;
  *(float *)&v6[2] = a4;
  if ( v4 )
    return sub_1003BE10(this + 64, this[67], v6);
  this[67] = 0;
  return result;
}
