int __thiscall sub_101778A0(int this)
{
  float v3; // [esp+0h] [ebp-Ch]

  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) & 0xFFF7);
  *(_BYTE *)(this + 1152) = 1;
  sub_100EC3F0((_DWORD *)this, (int)sub_101776C0, 0.0, 0);
  v3 = *(float *)(dword_106B31C8 + 12) + 0.5;
  return sub_100EC4A0((int *)this, v3, 0);
}
