int __thiscall sub_102FB610(int this)
{
  int v2; // eax
  int v3; // eax
  float v5; // [esp+14h] [ebp-70h]
  float v6[13]; // [esp+24h] [ebp-60h] BYREF
  int v7; // [esp+58h] [ebp-2Ch]
  float v8; // [esp+5Ch] [ebp-28h]
  float v9; // [esp+60h] [ebp-24h]
  float v10; // [esp+64h] [ebp-20h]
  int v11; // [esp+68h] [ebp-1Ch]
  __int16 v12; // [esp+6Ch] [ebp-18h]
  int v13; // [esp+70h] [ebp-14h]
  int v14; // [esp+74h] [ebp-10h]
  int v15; // [esp+78h] [ebp-Ch]
  char v16; // [esp+7Ch] [ebp-8h]

  v6[0] = 0.0;
  v6[1] = 0.0;
  v6[2] = 0.0;
  v6[3] = 0.0;
  v6[4] = 0.0;
  v6[5] = 0.0;
  v12 = 0;
  v2 = *(_DWORD *)(this + 24);
  v6[6] = 0.0;
  v6[7] = 0.0;
  v6[12] = 0.0;
  v6[8] = 0.0;
  v7 = 0;
  v6[9] = 0.0;
  v11 = 0;
  v6[10] = 0.0;
  v13 = 0;
  v6[11] = 0.0;
  v14 = 0;
  v15 = 0;
  v8 = 1.0;
  v16 = 0;
  v9 = 0.0;
  v10 = 0.0;
  v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v2);
  v9 = 4.0;
  v7 = v3;
  v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         0.25,
         1.0);
  sub_1028E890((int)"TeslaHitboxes", (int)v6);
  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 4144) )
    return sub_100EC3F0((_DWORD *)this, 0, *(float *)(dword_106B31C8 + 12), (int)"ZapThink");
  v5 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         0.050000001,
         0.25)
     + *(float *)(dword_106B31C8 + 12);
  return sub_100EC3F0((_DWORD *)this, (int)sub_102FB610, v5, (int)"ZapThink");
}
