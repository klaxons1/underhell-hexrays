void __thiscall sub_10154950(int this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  unsigned __int16 v8; // ax
  int v9; // esi
  float *v10; // esi
  float v11; // [esp+10h] [ebp-18h]
  float v12; // [esp+10h] [ebp-18h]
  float v13; // [esp+14h] [ebp-14h]
  float v14; // [esp+14h] [ebp-14h]
  int v15; // [esp+24h] [ebp-4h]
  int v16; // [esp+24h] [ebp-4h]

  v8 = sub_10152120((int *)(this + 1244), 0);
  v9 = v8;
  sub_10153D90(this + 1244, 0xFFFFu, v8);
  v10 = (float *)(*(_DWORD *)(this + 1244) + 48 * v9);
  v10[6] = *((float *)off_103DC81C + 3);
  v10[8] = *(float *)(this + 1216);
  v10[3] = a5;
  v10[4] = a6;
  v10[5] = a7;
  *v10 = a2;
  v10[1] = a3;
  v10[2] = a4;
  v15 = *(_DWORD *)(dword_1043CE64 + 48);
  v13 = (float)v15;
  v11 = (float)-v15;
  v10[3] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
             dword_10413198,
             LODWORD(v11),
             LODWORD(v13))
         + v10[3];
  v16 = *(_DWORD *)(dword_1043CE64 + 48);
  v14 = (float)v16;
  v12 = (float)-v16;
  v10[4] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
             dword_10413198,
             LODWORD(v12),
             LODWORD(v14))
         + v10[4];
  v10[7] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
             dword_10413198,
             0.5,
             1.5);
}
