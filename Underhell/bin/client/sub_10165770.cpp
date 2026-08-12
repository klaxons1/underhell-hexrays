int __thiscall sub_10165770(int this, int a2)
{
  float v3; // [esp+10h] [ebp-18h]
  float v4; // [esp+14h] [ebp-14h]
  float v5; // [esp+18h] [ebp-10h]
  float v6; // [esp+1Ch] [ebp-Ch]
  float v7; // [esp+20h] [ebp-8h]

  v7 = (float)*(int *)(this + 60);
  v6 = (float)*(int *)(this + 56);
  v5 = (float)*(int *)(this + 52);
  v4 = (float)*(int *)(this + 48);
  v3 = (float)*(int *)(this + 40);
  return (*((int (__thiscall **)(void ***, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*off_103E773C[0]
          + 19))(
           off_103E773C[0],
           *(_DWORD *)(this + 72),
           *(_DWORD *)(this + 12),
           *(_DWORD *)(this + 16),
           0.0,
           *(float *)(this + 28),
           *(float *)(this + 32),
           *(float *)(this + 36),
           LODWORD(v3),
           LODWORD(v4),
           LODWORD(v5),
           LODWORD(v6),
           LODWORD(v7));
}
