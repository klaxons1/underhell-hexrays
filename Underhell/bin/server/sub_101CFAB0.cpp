int __cdecl sub_101CFAB0(int a1, float *a2, int a3, int a4, int *a5, int a6, int a7, int a8, int a9, float *a10)
{
  int v10; // edi
  int v11; // eax
  int result; // eax
  int v13; // edi
  int v14[1536]; // [esp+30h] [ebp-1800h] BYREF

  v10 = *(_DWORD *)dword_106B31F0;
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 24))(a1);
  result = (*(int (__thiscall **)(int, int))(v10 + 16))(dword_106B31F0, v11);
  if ( result )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v13 = sub_100E2680((int)"prop_ragdoll_attached", (float *)(a1 + 580), &flt_106F1CB4, 0);
    sub_100C3050(v13, *(float *)&a1);
    sub_101CE2B0(v13);
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)a1 + 776))(a1, v14, 524032);
    sub_101CF710(v13, a5, a2, a3, (int)v14, (int)v14, 0.1, a4, a6, a7, a10, *(float *)&a9, a8);
    return v13;
  }
  return result;
}
