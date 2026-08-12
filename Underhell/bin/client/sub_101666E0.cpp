int __thiscall sub_101666E0(int this, int a2)
{
  float *v3; // edi
  int v4; // edx
  int v5; // ebx
  double v6; // st4
  double v7; // rt0
  float v9; // [esp+20h] [ebp-28h]
  float v10; // [esp+24h] [ebp-24h]
  float v11; // [esp+28h] [ebp-20h]
  float v12; // [esp+2Ch] [ebp-1Ch]
  float v13; // [esp+2Ch] [ebp-1Ch]
  int v14[3]; // [esp+3Ch] [ebp-Ch] BYREF

  v3 = (float *)(this + 24);
  v4 = *(_DWORD *)(this + 52);
  v5 = this + 12;
  v6 = *(float *)(this + 32);
  v7 = *(float *)(this + 28) * 4.0;
  *(float *)v14 = *(float *)(this + 24) * 4.0 + *(float *)(this + 12);
  *(float *)&v14[1] = v7 + *(float *)(this + 16);
  *(float *)&v14[2] = 4.0 * v6 + *(float *)(this + 20);
  v12 = (float)*(int *)(this + 60);
  ((void (__thiscall *)(void ***, int *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD))(*off_103E9C2C)[7])(
    off_103E9C2C,
    v14,
    *(_DWORD *)(this + 36),
    *(_DWORD *)(this + 40),
    *(_DWORD *)(this + 44),
    *(_DWORD *)(this + 48),
    *(_DWORD *)(this + 56),
    v4,
    LODWORD(v12));
  v13 = (float)*(int *)(this + 48);
  v11 = (float)*(int *)(this + 44);
  v10 = (float)*(int *)(this + 40);
  v9 = (float)*(int *)(this + 36);
  sub_101570F0(v5, (int)v3, this, (float *)v14, v3, v9, v10, v11, v13);
  return sub_10166430(
           *(_DWORD *)(this + 52),
           *(_DWORD *)(this + 56),
           (float *)(this + 12),
           v3,
           *(_DWORD *)(this + 36),
           *(_DWORD *)(this + 40),
           *(_DWORD *)(this + 44),
           *(_DWORD *)(this + 48),
           *(_DWORD *)(this + 60));
}
