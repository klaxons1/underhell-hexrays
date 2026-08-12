int __thiscall sub_10143B30(int this, int a2)
{
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // esi
  int v9; // [esp-4h] [ebp-20h]
  float v10[4]; // [esp+Ch] [ebp-10h] BYREF

  if ( this )
    v3 = this + 8;
  else
    v3 = 0;
  v4 = *(_DWORD *)dword_10413168;
  v9 = *(_DWORD *)(this + 124);
  v5 = sub_101164B0();
  (*(void (__thiscall **)(int, int, _DWORD, int, int))(v4 + 152))(dword_10413168, v3, *(_DWORD *)(this + 136), v5, v9);
  v10[0] = *(float *)(this + 180) * -1.0;
  v10[1] = *(float *)(this + 184) * -1.0;
  v10[2] = -1.0 * *(float *)(this + 188);
  v10[3] = 0.1 - *(float *)(this + 192);
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v7 = v6;
  if ( v6 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)v7 + 504))(v7, v10);
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 12))(v7);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7);
}
