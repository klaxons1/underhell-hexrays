void __thiscall sub_103716B0(int this)
{
  int v2; // eax
  int v3; // eax
  float v4; // [esp+Ch] [ebp-70h]
  int v5; // [esp+10h] [ebp-6Ch]
  float v6[13]; // [esp+1Ch] [ebp-60h] BYREF
  int v7; // [esp+50h] [ebp-2Ch]
  float v8; // [esp+54h] [ebp-28h]
  float v9; // [esp+58h] [ebp-24h]
  float v10; // [esp+5Ch] [ebp-20h]
  int v11; // [esp+60h] [ebp-1Ch]
  __int16 v12; // [esp+64h] [ebp-18h]
  int v13; // [esp+68h] [ebp-14h]
  int v14; // [esp+6Ch] [ebp-10h]
  int v15; // [esp+70h] [ebp-Ch]
  char v16; // [esp+74h] [ebp-8h]

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
  v9 = 3.0;
  v8 = 0.5;
  v7 = v3;
  sub_1028E890((int)"TeslaHitboxes", (int)v6);
  sub_1023C380((_DWORD *)this, (int)"RagdollBoogie.Zap", 0.0, 0);
  if ( *(float *)(this + 4560) > (double)*(float *)(dword_106B31C8 + 12) )
  {
    v5 = off_10674254;
    v4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.1,
           0.30000001)
       + *(float *)(dword_106B31C8 + 12);
    sub_100EC3F0((_DWORD *)this, (int)sub_103716B0, v4, v5);
  }
}
