void __thiscall sub_10054000(int this, int a2, int a3)
{
  _DWORD *v5; // ecx
  int *v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // [esp+3Ch] [ebp+8h]

  if ( a2 >= 0 && a2 < *(_DWORD *)(this + 20) )
  {
    v5 = *(_DWORD **)(*(_DWORD *)(this + 8) + 4 * a2);
    if ( *v5 != -1
      && (v6 = (int *)((char *)off_103DCD74 + 16 * (*v5 & 0xFFF) + 4),
          *((_DWORD *)off_103DCD74 + 4 * (*v5 & 0xFFF) + 2) == *v5 >> 12)
      && (v9 = *v6) != 0 )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a3 + 428))(a3, *(_DWORD *)(this + 28));
      v7 = (*(int (__thiscall **)(_DWORD, const char *, _DWORD, _DWORD))(**(_DWORD **)(this + 36) + 44))(
             *(_DWORD *)(this + 36),
             "$selfillumtint",
             0,
             0);
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v7 + 48))(
        v7,
        *(_DWORD *)(*(_DWORD *)(this + 8) + 4 * a2) + 4,
        4);
      v8 = (*(int (__thiscall **)(_DWORD, const char *, _DWORD, _DWORD))(**(_DWORD **)(this + 36) + 44))(
             *(_DWORD *)(this + 36),
             "$alpha",
             0,
             0);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 12))(
        v8,
        *(float *)(*(_DWORD *)(*(_DWORD *)(this + 8) + 4 * a2) + 16));
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10413160 + 88))(dword_10413160, 1);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10413168 + 24))(
        dword_10413168,
        *(_DWORD *)(*(_DWORD *)(this + 8) + 4 * a2) + 4);
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413160 + 4))(
        dword_10413160,
        *(_DWORD *)(this + 36),
        0);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)(v9 + 4) + 40))(v9 + 4, 1);
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413160 + 4))(dword_10413160, 0, 0);
      (*(void (__thiscall **)(int, void *))(*(_DWORD *)dword_10413168 + 24))(dword_10413168, &unk_103DB074);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413160 + 88))(dword_10413160, 0);
      (*(void (__thiscall **)(int))(*(_DWORD *)a3 + 436))(a3);
    }
    else
    {
      sub_10034930((int)v5);
      if ( *(_DWORD *)(this + 20) - a2 - 1 > 0 )
        memcpy(
          (void *)(*(_DWORD *)(this + 8) + 4 * a2),
          (const void *)(*(_DWORD *)(this + 8) + 4 * a2 + 4),
          4 * (*(_DWORD *)(this + 20) - a2 - 1));
      --*(_DWORD *)(this + 20);
    }
  }
}
