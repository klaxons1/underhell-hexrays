_DWORD *__stdcall sub_10237ED0(int a1, _DWORD *a2, int a3)
{
  double v3; // st7
  int v4; // edi
  int v5; // ebp
  int v6; // eax
  float v8; // [esp+8h] [ebp-14h]

  v3 = *(float *)(*(int (__cdecl **)(int))(a3 + 20))(a1);
  v4 = dword_1047CA7C;
  v5 = *(_DWORD *)dword_1047CA7C;
  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 80))(a1, (int)v3);
  v8 = (float)(*(int (__thiscall **)(int, int))(v5 + 56))(v4, v6);
  return sub_1022ACC0(a2, *(char **)a3, v8);
}
