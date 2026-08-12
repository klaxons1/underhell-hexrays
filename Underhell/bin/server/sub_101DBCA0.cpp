int __cdecl sub_101DBCA0(int *a1)
{
  int v1; // eax
  int v2; // esi
  int v3; // eax
  void (__thiscall *v4)(int *, float *, float *); // eax
  float v6[3]; // [esp+8h] [ebp-18h] BYREF
  float v7[3]; // [esp+14h] [ebp-Ch] BYREF

  v1 = (*(int (__thiscall **)(int *))(*a1 + 316))(a1);
  v6[0] = 0.0;
  v2 = v1;
  v3 = *a1;
  v6[1] = 0.0;
  v4 = *(void (__thiscall **)(int *, float *, float *))(v3 + 196);
  v6[2] = 0.0;
  v7[0] = 0.0;
  v7[1] = 0.0;
  v7[2] = 0.0;
  v4(a1, v6, v7);
  while ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2) )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 36))(v2);
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 32))(v2);
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 48))(v2);
  }
  return (*(int (__thiscall **)(int *, int))(*a1 + 320))(a1, v2);
}
