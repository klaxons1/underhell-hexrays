int __cdecl sub_101E60B0(int a1, int a2)
{
  char *v3; // eax
  const char *v4; // eax

  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 4))(a1, 0);
  *(_BYTE *)a2 = 1;
  v3 = (char *)(**(int (__thiscall ***)(int))a1)(a1);
  *(_WORD *)(a2 + 1) = sub_100D9F40(v3);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 4))(a1, 0);
  v4 = (const char *)(**(int (__thiscall ***)(int))a1)(a1);
  *(float *)(a2 + 3) = atof(v4);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 4))(a1, 1);
}
