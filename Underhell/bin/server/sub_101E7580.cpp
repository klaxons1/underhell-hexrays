int __thiscall sub_101E7580(int this, int a2)
{
  int result; // eax
  float v4; // [esp+0h] [ebp-Ch]

  *(_BYTE *)(this + 2120) = 1;
  result = dword_106984AC;
  if ( *(_DWORD *)(dword_106984AC + 48) )
  {
    sub_1023C380((int)"Player.bullettimeend", 0.0, 0);
    v4 = *(float *)(dword_106B31C8 + 12) + 1.0;
    return sub_100EC4A0((int *)this, v4, (int)"BulletTimeEndContext");
  }
  return result;
}
