void __thiscall sub_101DC630(_DWORD *this, _DWORD *a2, int a3, int *a4)
{
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // [esp-14h] [ebp-14h]
  int v8; // [esp-10h] [ebp-10h]
  float *v9; // [esp-Ch] [ebp-Ch]
  char v10; // [esp-8h] [ebp-8h]

  if ( !a3 )
  {
    v4 = *(_DWORD *)(dword_106B31C8 + 24);
    if ( v4 != this[214] )
    {
      this[214] = v4;
      v5 = this[200];
      v10 = *(_BYTE *)(*a4 + 24);
      v9 = (float *)(*a4 + 12);
      v8 = *a4;
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 24))(v5);
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5);
      sub_101B0F90(a2, v6, v7, v8, v9, v10);
    }
  }
}
