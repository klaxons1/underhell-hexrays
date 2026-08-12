char *__thiscall sub_1006DD60(char *this)
{
  float *v2; // esi
  _DWORD *v3; // ecx
  float *v4; // eax
  int v6; // [esp+Ch] [ebp-10h]
  _BYTE *v7; // [esp+10h] [ebp-Ch]
  _DWORD *v8; // [esp+14h] [ebp-8h]
  int v9; // [esp+18h] [ebp-4h]

  sub_1003D000((int)this);
  *(_DWORD *)this = &C_BaseTeamObjectiveResource::`vftable';
  *((_DWORD *)this + 1) = &C_BaseTeamObjectiveResource::`vftable';
  *((_DWORD *)this + 2) = &C_BaseTeamObjectiveResource::`vftable';
  *((_DWORD *)this + 3) = &C_BaseTeamObjectiveResource::`vftable';
  *((_DWORD *)this + 300) = 0;
  *((_DWORD *)this + 301) = 0;
  this[6076] = 0;
  *((_DWORD *)this + 303) = 0;
  this[1209] = 0;
  v9 = 0;
  v8 = this + 2412;
  v7 = this + 3540;
  v2 = (float *)(this + 6004);
  do
  {
    *(v2 - 8) = 0.0;
    *v2 = 0.0;
    v3 = v8;
    v2[10] = 0.0;
    this[v9 + 6036] = 0;
    *(v2 - 624) = 0.0;
    *v7 = 0;
    *(v2 - 1170) = 0.0;
    v4 = v2 - 1090;
    v6 = 8;
    do
    {
      v4[128] = 0.0;
      *(v4 - 64) = 0.0;
      *v4 = 0.0;
      v4[64] = 0.0;
      v4[992] = 0.0;
      *v3 = -1;
      v3[1] = -1;
      v3[2] = -1;
      v3 += 24;
      v4 += 8;
      --v6;
    }
    while ( v6 );
    v8 += 3;
    v7 += 255;
    ++v2;
    ++v9;
  }
  while ( v9 < 8 );
  *((_DWORD *)this + 811) = 0;
  *((_DWORD *)this + 812) = 0;
  *((_DWORD *)this + 813) = 0;
  *((_DWORD *)this + 814) = 0;
  *((_DWORD *)this + 815) = 0;
  *((_DWORD *)this + 816) = 0;
  *((_DWORD *)this + 817) = 0;
  *((_DWORD *)this + 818) = 0;
  dword_1041199C = (int)this;
  return this;
}
