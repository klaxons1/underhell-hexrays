int __userpurge sub_10079FE0@<eax>(int a1@<ecx>, int a2@<edi>, float *a3, float *a4, int a5, int a6)
{
  float *v7; // eax
  float *v9; // [esp-Ch] [ebp-10h]
  int savedregs; // [esp+4h] [ebp+0h] BYREF

  v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 320) + 8))(*(_DWORD *)(a1 + 4) + 320);
  v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 320) + 4))(*(_DWORD *)(a1 + 4) + 320);
  return sub_10079F00(a1, (int)&savedregs, a2, a1, a3, a4, v7, v9, a5, a6);
}
