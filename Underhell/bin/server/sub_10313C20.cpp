void __thiscall sub_10313C20(_DWORD *this)
{
  float v2[3]; // [esp+4h] [ebp-18h] BYREF
  float v3[3]; // [esp+10h] [ebp-Ch] BYREF

  nullsub_4();
  v3[0] = 30.0;
  v3[1] = 30.0;
  v3[2] = 30.0;
  v2[0] = -30.0;
  v2[1] = -30.0;
  v2[2] = -30.0;
  sub_1025F360(this, (int)v2, (int)v3);
  sub_10112C00((int)(this + 80), 2);
  sub_100EBE30((int)this, 13);
}
