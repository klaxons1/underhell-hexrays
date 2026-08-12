char __cdecl sub_100A4790(int a1)
{
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  return sub_100A4700(
           (int)&savedregs,
           *(_DWORD *)a1,
           *(_DWORD *)(a1 + 4),
           *(_DWORD *)(a1 + 8),
           *(_DWORD *)(a1 + 12),
           *(_DWORD *)(a1 + 16),
           *(_DWORD *)(a1 + 20),
           *(float *)(a1 + 80));
}
