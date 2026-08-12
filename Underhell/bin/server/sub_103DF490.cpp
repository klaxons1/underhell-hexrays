void __thiscall sub_103DF490(float *this, int a2, int a3)
{
  if ( *(float *)(dword_106B31C8 + 12) != this[470]
    && !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 5) )
  {
    this[470] = *(float *)(dword_106B31C8 + 12);
    sub_10262ED0(a2, a3, (int)"AirboatGunImpact");
  }
}
