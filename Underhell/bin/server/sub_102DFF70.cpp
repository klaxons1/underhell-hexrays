void __thiscall sub_102DFF70(int this)
{
  float v2; // [esp+0h] [ebp-18h]
  float v3[3]; // [esp+Ch] [ebp-Ch] BYREF

  sub_102DEF10(this, 10.0);
  v3[0] = -3.0;
  v3[1] = 0.0;
  v3[2] = 0.0;
  sub_100F7A60((float *)this, v3);
  if ( *(_BYTE *)(this + 2137) )
    (*(void (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
      dword_106B31D0,
      *(_DWORD *)(this + 24),
      "ironsight_toggle");
  v2 = 0.0;
  if ( *(float *)(this + 5084) < 35.0 )
    sub_1023C380((_DWORD *)this, (int)"Player.Voice.Jump.Exhausted", v2, 0);
  else
    sub_1023C380((_DWORD *)this, (int)"Player.Voice.Jump", v2, 0);
}
