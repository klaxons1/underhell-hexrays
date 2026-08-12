int __thiscall sub_101655F0(int this, int a2)
{
  float v3; // [esp+10h] [ebp-2Ch]
  float v4; // [esp+18h] [ebp-24h]
  float v5; // [esp+1Ch] [ebp-20h]
  float v6; // [esp+24h] [ebp-18h]
  float v7; // [esp+28h] [ebp-14h]
  float v8; // [esp+2Ch] [ebp-10h]
  float v9; // [esp+30h] [ebp-Ch]

  v9 = (float)*(int *)(this + 56);
  v8 = (float)*(int *)(this + 52);
  v7 = (float)*(int *)(this + 48);
  v6 = (double)*(int *)(this + 24) * 0.1;
  v5 = 0.1 * (double)*(int *)(this + 64);
  v4 = (float)*(int *)(this + 60);
  v3 = (float)*(int *)(this + 40);
  return (*((int (__thiscall **)(void ***, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))*off_103E773C[0]
          + 7))(
           off_103E773C[0],
           *(_DWORD *)(this + 72),
           *(_DWORD *)(this + 76),
           *(_DWORD *)(this + 12),
           *(_DWORD *)(this + 16),
           0.0,
           *(float *)(this + 28),
           *(float *)(this + 32),
           *(float *)(this + 36),
           LODWORD(v3),
           *(float *)(this + 44),
           LODWORD(v4),
           LODWORD(v5),
           *(_DWORD *)(this + 20),
           LODWORD(v6),
           LODWORD(v7),
           LODWORD(v8),
           LODWORD(v9),
           -1);
}
