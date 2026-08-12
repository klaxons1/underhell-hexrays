char __thiscall sub_10251D10(int (__thiscall ***this)(void *, int *, int *), int *a2)
{
  int v4; // edi
  int *v5; // [esp+14h] [ebp-Ch] BYREF
  int v6; // [esp+18h] [ebp-8h] BYREF
  int v7; // [esp+1Ch] [ebp-4h] BYREF

  if ( ((unsigned __int8 (__thiscall *)(int (__thiscall ***)(void *, int *, int *)))(*this)[60])(this)
    && ((*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 79)
     || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 80)) )
  {
    if ( this[78] == (int (__thiscall **)(void *, int *, int *))-1 )
      this[78] = this[70];
    return 1;
  }
  else if ( (_BYTE)a2
         && ((int (__thiscall *)(int (__thiscall ***)(void *, int *, int *)))(*this)[160])(this)
         && ((*(void (__thiscall **)(int, int **, int **))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &v5, &a2),
             sub_10236F60(this, &v5, &a2),
             v4 = (*this)[252](this, v5, a2),
             (unsigned __int8)(*this)[250](this, &v6, &v7))
         && v4 >= v6
         && v4 < v7 )
  {
    return 0;
  }
  else
  {
    this[78] = (int (__thiscall **)(void *, int *, int *))-1;
    return 1;
  }
}
