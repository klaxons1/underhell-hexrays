int __thiscall sub_103C5B80(int *this)
{
  float v3; // [esp+0h] [ebp-Ch]

  if ( sub_10262560(this[6]) )
    v3 = *(float *)(dword_106B31C8 + 12) + 0.029999999;
  else
    v3 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0(this, v3, 0);
}
