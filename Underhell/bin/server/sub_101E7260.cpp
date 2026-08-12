int __thiscall sub_101E7260(void *this, int a2, int a3)
{
  int result; // eax
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int *v9; // [esp-8h] [ebp-Ch]
  int *v10; // [esp-8h] [ebp-Ch]

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 592))(this);
  result = dword_106C1DF4;
  if ( !*(_DWORD *)(dword_106C1DF4 + 48) )
  {
    v9 = (int *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 24);
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
    v6 = sub_101DA970((int *)(v5 + 12), v9);
    v10 = (int *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 48);
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
    v8 = sub_101DA970((int *)(v7 + 36), v10);
    return sub_101E7080((int)this, a2, a3, v6, (int)"player_stand", v8, (int)"player_crouch");
  }
  return result;
}
