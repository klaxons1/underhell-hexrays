int __thiscall sub_101673C0(int this, int a2)
{
  float v4; // [esp+18h] [ebp-30h]
  float v5; // [esp+24h] [ebp-24h]
  float *v6; // [esp+38h] [ebp-10h]
  float *v7; // [esp+3Ch] [ebp-Ch]
  float *v8; // [esp+40h] [ebp-8h]
  float *v9; // [esp+44h] [ebp-4h]

  v7 = (float *)(this + 48);
  v8 = (float *)(this + 12);
  v6 = (float *)(this + 36);
  v9 = (float *)(this + 24);
  v4 = (float)*(int *)(this + 60);
  ((void (__thiscall *)(void ***, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*off_103E9C2C)[13])(
    off_103E9C2C,
    this + 12,
    this + 24,
    this + 36,
    this + 48,
    LODWORD(v4),
    *(float *)(this + 72),
    *(_DWORD *)(this + 68),
    *(_DWORD *)(this + 64),
    *(unsigned __int8 *)(this + 76));
  v5 = (float)*(int *)(this + 64);
  return sub_10167140(
           *(_DWORD *)(this + 60),
           v6,
           v7,
           v8,
           v9,
           (int)*(float *)(this + 72),
           *(_DWORD *)(this + 68),
           v5,
           *(_DWORD *)(this + 76));
}
