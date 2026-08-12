char *__cdecl sub_10322A20(int a1, float a2, float *a3, float *a4)
{
  char *result; // eax
  char *v5; // esi
  int v6; // eax
  int *v7; // edi
  int v8; // ebx
  __int16 v9; // ax
  int v10; // [esp-10h] [ebp-14h]

  result = sub_100E3960((int)"npc_barnacle_tongue_tip", a3, a4, 0);
  v5 = result;
  if ( result )
  {
    v10 = (*(int (__thiscall **)(char *))(*((_DWORD *)result + 80) + 48))(result + 320);
    v6 = (*(int (__thiscall **)(_DWORD *))(*((_DWORD *)v5 + 80) + 44))((_DWORD *)v5 + 80);
    sub_100E9550(v5, v6, v10, 0, 0);
    if ( sub_10321870((int)v5, a2) )
    {
      if ( a1 )
        *((_DWORD *)v5 + 281) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
      else
        *((_DWORD *)v5 + 281) = -1;
      v7 = (int *)*((_DWORD *)v5 + 106);
      v8 = *v7;
      v9 = (*(int (__thiscall **)(int *))(*v7 + 92))(v7);
      (*(void (__thiscall **)(int *, int))(v8 + 88))(v7, v9 & 0xEFFF);
      return v5;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
