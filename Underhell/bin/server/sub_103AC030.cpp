void __thiscall sub_103AC030(float *this, int a2)
{
  float v2; // [esp+8h] [ebp-Ch]

  if ( this[927] < (double)*(float *)(dword_106B31C8 + 12) )
  {
    this[927] = *(float *)(dword_106B31C8 + 12) + 0.5;
    v2 = (float)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 5, 10);
    sub_1025F3A0(a2, v2, 10.0);
  }
}
