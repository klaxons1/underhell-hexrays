int __thiscall sub_101263E0(int this)
{
  int result; // eax
  float v3[3]; // [esp+10h] [ebp-18h] BYREF
  float v4[3]; // [esp+1Ch] [ebp-Ch] BYREF

  sub_1023C380((int)"ItemSoda.Bounce", 0.0, 0);
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 8);
  v4[0] = 8.0;
  v4[1] = 8.0;
  v4[2] = 8.0;
  v3[0] = -8.0;
  v3[1] = -8.0;
  v3[2] = 0.0;
  sub_1025F360(this, v3, v4);
  result = sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  *(_DWORD *)(this + 196) = sub_10125760;
  return result;
}
