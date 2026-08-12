float *__thiscall sub_103E2320(float *this, int a2, int a3)
{
  float v5[3]; // [esp+18h] [ebp-24h] BYREF
  float v6; // [esp+24h] [ebp-18h] BYREF
  float v7; // [esp+28h] [ebp-14h]
  float v8; // [esp+2Ch] [ebp-10h]
  float v9[3]; // [esp+30h] [ebp-Ch] BYREF

  if ( 0.0 != *(float *)(dword_106B31C8 + 16) )
  {
    sub_103E0930((char *)this - 1484);
    if ( *(this - 87) > 0.0 )
    {
      if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
        sub_100DAE60(a2);
      sub_1023D4B0(0x2000, (float *)(a2 + 580), 3500, 0.1, a2, 3, 0);
    }
  }
  (*(void (__thiscall **)(float *, float *, _DWORD))(*((_DWORD *)this - 371) + 540))(this - 371, v9, 0);
  if ( (*(_DWORD *)(this - 308) & 0x800) != 0 )
    sub_100DAE60((int)(this - 371));
  v6 = *(this - 226) + v9[0];
  v7 = *(this - 225) + v9[1];
  v8 = *(this - 224) + v9[2];
  sub_1029EAC0((int)(this - 371), &v6, v5);
  v6 = v5[0];
  v7 = v5[1];
  v8 = v5[2];
  return sub_103E0DE0(this + 103, &v6);
}
