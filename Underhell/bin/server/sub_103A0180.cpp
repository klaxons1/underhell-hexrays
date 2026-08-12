void __thiscall sub_103A0180(int *this)
{
  float v2; // [esp+0h] [ebp-Ch]

  sub_1039F290((int)this, 300.0);
  this[49] = 0;
  sub_100EC3F0(this, (int)sub_1039F920, 0.0, 0);
  v2 = *(float *)(dword_106B31C8 + 12) + 0.5;
  sub_100EC4A0(this, v2, 0);
  sub_1023C380(this, (int)"NPC_RollerMine.Hurt", 0.0, 0);
}
