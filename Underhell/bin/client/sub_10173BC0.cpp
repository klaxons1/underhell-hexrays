int __thiscall sub_10173BC0(int this, int a2)
{
  float *v3; // edi
  float v5; // [esp+10h] [ebp-10h]
  float v6; // [esp+10h] [ebp-10h]
  float v7; // [esp+14h] [ebp-Ch]

  v7 = (float)*(int *)(this + 32);
  v3 = (float *)(this + 12);
  v5 = *(float *)(this + 28) * 10.0;
  ((void (__thiscall *)(int (__stdcall ***)(char), int, _DWORD, _DWORD, _DWORD))(*off_103DFD80)[2])(
    off_103DFD80,
    this + 12,
    *(_DWORD *)(this + 24),
    LODWORD(v5),
    LODWORD(v7));
  v6 = *(float *)(this + 28) * 10.0;
  return sub_10173AD0(v3, v6, *(_DWORD *)(this + 32));
}
