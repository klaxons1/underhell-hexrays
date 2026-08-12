int __thiscall sub_1008C4D0(int (__thiscall **this)(int this))
{
  int result; // eax
  float v2; // [esp+0h] [ebp-Ch]

  if ( this[2] != sub_1008C470 )
  {
    sub_10260160(4, "Doing partial rebuild of Node Graph...\n", 0, 0, 0, 0);
    sub_100EC3F0((int)sub_1008C470, 0.0, 0);
    v2 = *(float *)(dword_106B31C8 + 12) + 0.1;
    return sub_100EC4A0(v2, 0);
  }
  return result;
}
