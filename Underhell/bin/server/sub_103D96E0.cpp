void __thiscall sub_103D96E0(unsigned int this, int a2)
{
  double v3; // st7
  bool v4; // zf
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  int *v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  float v13; // [esp+18h] [ebp-30h]
  float v14; // [esp+18h] [ebp-30h]
  int v15[3]; // [esp+28h] [ebp-20h] BYREF
  float v16[3]; // [esp+34h] [ebp-14h] BYREF
  float v17; // [esp+40h] [ebp-8h]
  char v18[4]; // [esp+44h] [ebp-4h]

  if ( (*(_DWORD *)(this + 248) & 0x40000) == 0 )
  {
    v17 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            500.0,
            700.0)
        * 10.0;
    sub_10422220(this + 728, v16);
    v3 = 0.0;
    if ( (*(_DWORD *)(this + 248) & 0x200) != 0 )
      v3 = 5.0;
    if ( (*(_DWORD *)(this + 256) & 0x8000000) != 0 || (v4 = *(_DWORD *)(dword_10698344 + 48) == 0, v18[0] = 0, !v4) )
      v18[0] = 1;
    *(float *)v15 = v16[0] * v17;
    *(float *)&v15[1] = v16[1] * v17;
    *(float *)&v15[2] = v17 * v16[2] + 600.0;
    v13 = v3;
    sub_10166A90((int)"models/combine_soldier.mdl", this + 716, (float *)(this + 728), (int)v15, v13, v18[0]);
  }
  v5 = *(_DWORD *)(a2 + 44);
  if ( v5 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v5 >> 12 )
    v6 = 0;
  else
    v6 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
  sub_1010DD80((_DWORD *)(this + 2968), __SPAIR64__(this, v6), 0.0);
  v7 = *(_DWORD *)(a2 + 44);
  if ( v7 != -1 )
  {
    v8 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
    v9 = v7 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v9 )
    {
      if ( *v8 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v9 )
          v10 = *v8;
        else
          v10 = 0;
        (*(void (__thiscall **)(int, unsigned int, int))(*(_DWORD *)v10 + 272))(v10, this, a2);
        v11 = *(_DWORD *)(a2 + 44);
        if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v11 >> 12 )
          v12 = 0;
        else
          v12 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
        sub_1010C7F0((float *)dword_10614CA8, v12, "KilledNPC", 0.30000001, this, this, 0);
      }
    }
  }
  if ( *(_DWORD *)(this + 3712) )
  {
    sub_1025FAC0(*(_DWORD *)(this + 3712));
    *(_DWORD *)(this + 3712) = 0;
  }
  v14 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v14, 0);
  sub_1023C380((_DWORD *)this, (int)"NPC_Sniper.Die", 0.0, 0);
  sub_1025FAC0(this);
}
