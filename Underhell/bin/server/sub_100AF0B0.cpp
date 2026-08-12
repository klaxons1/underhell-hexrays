char __thiscall sub_100AF0B0(_DWORD *this, int a2, float a3, int a4, int a5)
{
  unsigned int v6; // eax
  int *v7; // ecx
  int v8; // ecx
  double v9; // st7
  unsigned int v10; // eax
  int v11; // eax
  _BYTE v13[256]; // [esp+28h] [ebp-100h] BYREF
  float v14; // [esp+13Ch] [ebp+14h]

  v6 = this[16];
  if ( v6 == -1 || (v7 = &off_1061BE18[4 * (this[16] & 0xFFF) + 1], v7[1] != v6 >> 12) )
    v8 = 0;
  else
    v8 = *v7;
  v9 = ((double (__stdcall *)(int, _DWORD, int, int))*(_DWORD *)(*(_DWORD *)v8 + 860))(a2, LODWORD(a3), a4, a5);
  if ( v9 <= 0.0 )
    return 0;
  v10 = this[16];
  if ( v10 == -1 || off_1061BE18[4 * (this[16] & 0xFFF) + 2] != v10 >> 12 )
    v11 = 0;
  else
    v11 = off_1061BE18[4 * (this[16] & 0xFFF) + 1];
  sub_100ACB00((int)this, v11, (int)"SpeakRawScene( %s, %f) %f\n");
  sub_1023AFB0(a2, v13, 256);
  if ( (int)sub_10223E80(v13) > 0 )
  {
    v14 = v9;
    sub_100AD840((int)this, v14, a3);
  }
  return 1;
}
