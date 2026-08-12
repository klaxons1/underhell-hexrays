char __thiscall sub_102C7130(void *this, int a2, int a3, float *a4)
{
  int v4; // esi
  float *v5; // eax
  float *v7; // [esp-Ch] [ebp-18h]
  float *v8; // [esp-8h] [ebp-14h]
  float *v9; // [esp-4h] [ebp-10h]

  if ( (a3 & 0x46004003) != 0x46004003 )
    return 0;
  v4 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 12))(this);
  v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
  v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
  v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 36))(v4);
  v5 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 32))(v4);
  return sub_101152F0(a2, v5, v7, v8, v9, 1.0, a4);
}
