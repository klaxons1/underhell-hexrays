void __thiscall sub_10053E70(_DWORD *this, int a2, int a3)
{
  _DWORD *v4; // ecx
  int *v5; // edx
  int v6; // ebx

  if ( a2 >= 0 && a2 < this[5] )
  {
    v4 = *(_DWORD **)(this[2] + 4 * a2);
    if ( *v4 != -1
      && (v5 = (int *)((char *)off_103DCD74 + 16 * (*v4 & 0xFFF) + 4),
          *((_DWORD *)off_103DCD74 + 4 * (*v4 & 0xFFF) + 2) == *v4 >> 12)
      && (v6 = *v5) != 0 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 464))(a3, 1);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 468))(a3, 1);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 472))(a3, 1);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 476))(a3, 3);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 480))(a3, 8);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 492))(a3, 1);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a3 + 484))(a3, 1);
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a3 + 44))(a3, 0.0, 0.0099999998);
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_10413168 + 16))(0.0);
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413160 + 4))(dword_10413160, this[9], 0);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)(v6 + 4) + 40))(v6 + 4, 1);
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_10413160 + 4))(dword_10413160, 0, 0);
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_10413168 + 16))(1.0);
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a3 + 44))(a3, 0.0, 1.0);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a3 + 464))(a3, 0);
    }
    else
    {
      sub_10034930((int)v4);
      if ( this[5] - a2 - 1 > 0 )
        memcpy((void *)(this[2] + 4 * a2), (const void *)(this[2] + 4 * a2 + 4), 4 * (this[5] - a2 - 1));
      --this[5];
    }
  }
}
