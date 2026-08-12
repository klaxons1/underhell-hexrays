void __thiscall sub_1038ABB0(float *this)
{
  int v2; // eax
  int (__thiscall *v3)(float *, _DWORD, float *, float *, int, int, _DWORD, _DWORD); // eax
  int v4; // esi
  _BYTE v5[12]; // [esp+30h] [ebp-54h] BYREF
  _BYTE v6[12]; // [esp+3Ch] [ebp-48h] BYREF
  float v7; // [esp+48h] [ebp-3Ch] BYREF
  float v8; // [esp+4Ch] [ebp-38h]
  float v9; // [esp+50h] [ebp-34h]
  float v10[3]; // [esp+54h] [ebp-30h] BYREF
  float v11[3]; // [esp+60h] [ebp-24h] BYREF
  float v12[2]; // [esp+6Ch] [ebp-18h] BYREF
  float v13; // [esp+74h] [ebp-10h]
  float v14[3]; // [esp+78h] [ebp-Ch] BYREF

  v11[0] = 16.0;
  v11[1] = 16.0;
  v11[2] = 16.0;
  v2 = *(_DWORD *)this;
  v10[0] = -16.0;
  v3 = *(int (__thiscall **)(float *, _DWORD, float *, float *, int, int, _DWORD, _DWORD))(v2 + 1072);
  v10[1] = -16.0;
  v10[2] = -16.0;
  v4 = v3(this, 16.0, v10, v11, 15, 128, 1.0, 0);
  if ( v4 )
  {
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 576))(this);
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 576))(v4);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
    {
      v7 = 8.0;
      v8 = 14.0;
      v9 = 0.0;
      sub_100F7A60((float *)v4, &v7);
      if ( ((_DWORD)this[63] & 0x800) != 0 )
        sub_100DAE60((int)this);
      if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
        sub_100DAE60(v4);
      v14[0] = *(float *)(v4 + 580) - this[145];
      v14[1] = *(float *)(v4 + 584) - this[146];
      v14[2] = *(float *)(v4 + 588) - this[147];
      off_10689714();
      sub_10422540(v14, v6);
      sub_104222B0(v6, v12, v5, 0);
      if ( (*(_BYTE *)(v4 + 256) & 1) == 0 )
        v13 = 0.0;
      v7 = v12[0] * 250.0;
      v8 = v12[1] * 250.0;
      v9 = 250.0 * v13;
      sub_100EA150(v4, &v7);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 1476))(v4, 0);
    }
    sub_1023C380(this, (int)"NPC_Metropolice.Shove", 0.0, 0);
  }
}
