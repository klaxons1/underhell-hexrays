_DWORD *__userpurge sub_102DDB80@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4)
{
  int v5; // eax
  int v6; // ecx
  int v8; // [esp-18h] [ebp-1Ch]
  int v9; // [esp-14h] [ebp-18h]

  sub_101EAB70((int)a1, a2, a3, a4);
  v5 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "bt_enabled");
  v6 = *(_DWORD *)(*(_DWORD *)(v5 + 28) + 48);
  dword_106E1030 = v5;
  if ( v6 )
    (**(void (__thiscall ***)(int, _DWORD))(v5 + 24))(v5 + 24, 0);
  sub_102DCFA0(a1, "PlayerDied", 0, v8, v9, -1, 0, (int)a1, (int)a1);
  return sub_102DCAC0();
}
