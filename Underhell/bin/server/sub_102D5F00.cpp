char *__cdecl sub_102D5F00(float *a1, float *a2, int a3, int a4, int a5, float a6, char a7)
{
  char *v7; // esi
  int v8; // ecx
  int v9; // eax

  v7 = sub_100E3960((int)"npc_grenade_frag", a1, a2, a5);
  *((float *)v7 + 530) = *(float *)(dword_106B31C8 + 12) + a6;
  *((float *)v7 + 531) = a6 - 1.5 + *(float *)(dword_106B31C8 + 12);
  sub_100EC3F0(v7, (int)sub_102D5AE0, 0.0, 0);
  sub_100EC4A0((int *)v7, *(float *)(dword_106B31C8 + 12), 0);
  v8 = *((_DWORD *)v7 + 106);
  if ( v8 )
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 208))(v8, a3, a4);
  if ( a5 )
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a5 + 288))(a5);
  else
    v9 = 0;
  sub_100F4E50((unsigned int *)v7, v9);
  if ( v7[225] != 1 )
  {
    (*(void (__thiscall **)(char *, char *))(*(_DWORD *)v7 + 480))(v7, v7 + 225);
    v7[225] = 1;
  }
  v7[2149] = a7;
  return v7;
}
