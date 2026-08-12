void __thiscall sub_1013FF30(int this)
{
  int v2; // esi
  double v3; // st7
  int v4; // ebx
  float v5; // [esp+10h] [ebp-23Ch]
  float v6; // [esp+14h] [ebp-238h]
  float v7; // [esp+18h] [ebp-234h]
  int v8[128]; // [esp+28h] [ebp-224h] BYREF
  _DWORD v9[7]; // [esp+228h] [ebp-24h] BYREF
  int v10; // [esp+244h] [ebp-8h]
  char v11; // [esp+248h] [ebp-4h]

  if ( *(_BYTE *)(this + 800) )
  {
    v2 = 0;
    v7 = *(float *)(dword_106B31C8 + 12) + 0.25;
    sub_100EC4A0((int *)this, v7, 0);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v3 = *(float *)(this + 804);
    *(float *)&v9[1] = *(float *)(this + 580);
    *(float *)&v9[2] = *(float *)(this + 584);
    *(float *)&v9[3] = *(float *)(this + 588);
    v9[0] = &CFireSphere::`vftable';
    v9[5] = v8;
    v9[6] = 128;
    v10 = 0;
    *(float *)&v9[4] = v3 * v3;
    v11 = 0;
    v5 = v3;
    (*(void (__thiscall **)(int, int, int, _DWORD, _DWORD, _DWORD *))(*(_DWORD *)dword_106B31EC + 52))(
      dword_106B31EC,
      16,
      this + 580,
      LODWORD(v5),
      0,
      v9);
    v4 = v10;
    if ( v10 > 0 )
    {
      do
      {
        v6 = *(float *)(this + 808) * 0.25;
        sub_1013FE10(v8[v2++], v6, 0);
      }
      while ( v2 < v4 );
    }
  }
}
