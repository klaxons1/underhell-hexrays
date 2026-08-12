int __thiscall sub_102B6F20(int this, int a2, int a3)
{
  int result; // eax
  float v5; // [esp+0h] [ebp-Ch]

  v5 = 0.0;
  if ( *(int *)(this + 1180) > 5 )
    return sub_100EC3F0((_DWORD *)this, 0, v5, 0);
  sub_1023C380((_DWORD *)this, (int)"NPC_CombineMine.FlipOver", v5, 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 424) + 236))(*(_DWORD *)(this + 424), a2);
  result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 424) + 244))(*(_DWORD *)(this + 424), a3);
  ++*(_DWORD *)(this + 1180);
  return result;
}
