void __thiscall sub_100E06A0(float *this, float a2, float a3)
{
  float v3; // [esp+0h] [ebp-8h]

  this[108] = a2;
  if ( this[107] != a2 )
  {
    v3 = *(float *)(dword_106B31C8 + 12) + a3;
    sub_100EC3F0((int)sub_100E0630, v3, (int)"ShadowCastDistThink");
  }
}
