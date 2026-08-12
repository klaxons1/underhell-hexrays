void __thiscall sub_103F7010(int this)
{
  float *v2; // edi
  int v3; // edx
  int v4; // eax
  float v5; // [esp+8h] [ebp-38h]
  float v6[3]; // [esp+1Ch] [ebp-24h] BYREF
  int v7; // [esp+28h] [ebp-18h] BYREF
  float v8; // [esp+2Ch] [ebp-14h]
  float v9; // [esp+30h] [ebp-10h]
  float v10; // [esp+34h] [ebp-Ch]
  float v11; // [esp+38h] [ebp-8h]
  float v12; // [esp+3Ch] [ebp-4h]

  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v2 = (float *)(this + 476);
  sub_10422540(this + 476, v6);
  sub_100E0EA0(this, v6);
  v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v5, 0);
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v3 = *(_DWORD *)(this + 252) >> 11;
  v10 = *v2 * 0.2;
  v11 = *(float *)(this + 480) * 0.2;
  v12 = 0.2 * *(float *)(this + 484);
  if ( (v3 & 1) != 0 )
    sub_100DAE60(this);
  *(float *)&v7 = *(float *)(this + 580) + v10;
  v8 = v11 + *(float *)(this + 584);
  v9 = v12 + *(float *)(this + 588);
  sub_1023D4B0(2048, (float *)&v7, 120, 0.5, this, 2, 0);
  if ( *(_BYTE *)(this + 447) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
      sub_100DAFD0(this);
    v4 = *(_DWORD *)(this + 252) >> 11;
    v10 = *v2 * 0.1;
    v11 = *(float *)(this + 480) * 0.1;
    v12 = 0.1 * *(float *)(this + 484);
    if ( (v4 & 1) != 0 )
      sub_100DAE60(this);
    *(float *)&v7 = *(float *)(this + 580) - v10;
    v8 = *(float *)(this + 584) - v11;
    v9 = *(float *)(this + 588) - v12;
    sub_10261F70((float *)&v7, (float *)(this + 580), 5);
  }
}
