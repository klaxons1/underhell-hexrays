void __thiscall sub_103F5D10(int this)
{
  float v2[3]; // [esp+8h] [ebp-18h] BYREF
  float v3[3]; // [esp+14h] [ebp-Ch] BYREF

  sub_100D2FF0((int *)this);
  v3[0] = 4.0;
  v3[1] = 4.0;
  v3[2] = 4.0;
  v2[0] = -4.0;
  v2[1] = -4.0;
  v2[2] = -4.0;
  sub_100D69D0((void *)this, (int)v2, (int)v3);
  sub_10112D90((unsigned __int16 *)(this + 320), 1, 100.0);
}
