int __thiscall sub_100A9640(_DWORD *this, float a2)
{
  int v3; // eax
  int v4; // esi
  int result; // eax
  float v6; // [esp+Ch] [ebp-34h]
  float v7; // [esp+18h] [ebp-28h]
  float v8; // [esp+24h] [ebp-1Ch]
  float v9; // [esp+30h] [ebp-10h]
  float v10; // [esp+38h] [ebp-8h]

  v9 = *(float *)((*(int (__thiscall **)(_DWORD *, int))(*this + 20))(this, 1) + 8);
  v8 = *(float *)((*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 20))(this, 0) + 8);
  v7 = *(float *)((*(int (__thiscall **)(_DWORD *, int))(*this + 28))(this, 1) + 8);
  v3 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 28))(this, 0);
  v4 = this[1];
  v6 = *(float *)(v3 + 8);
  result = *(_DWORD *)(v4 + 228);
  v10 = *(float *)(v4 + 224);
  *(float *)(v4 + 220) = *(float *)(v4 + 220);
  *(float *)(v4 + 224) = v10;
  *(float *)(v4 + 228) = (v7 - (v9 - v8)) * a2 + (1.0 - a2) * v6;
  return result;
}
