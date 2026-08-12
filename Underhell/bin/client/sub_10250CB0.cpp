char __thiscall sub_10250CB0(int (__thiscall ***this)(void *, int *, int *, int *, int *))
{
  void (*v2)(void); // edx
  char v3; // bl
  char v4; // al
  char result; // al
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  char v8; // [esp+13h] [ebp-9h]
  int v9; // [esp+14h] [ebp-8h] BYREF
  int v10; // [esp+18h] [ebp-4h] BYREF

  v2 = (void (*)(void))(*this)[223];
  *((_WORD *)this + 203) = 0;
  v2();
  if ( *((_BYTE *)this + 340) )
  {
    ((void (__thiscall *)(int (__thiscall ***)(void *, int *, int *, int *, int *)))(*this)[249])(this);
    *((_BYTE *)this + 340) = 0;
  }
  v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 32))(dword_1047CA68, 108);
  v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 52))(dword_1047CA68, 108);
  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 40))(dword_1047CA68, 108);
  if ( !v3 && !v4 && !v8
    || ((*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &v10, &v9),
        (result = sub_10236EB0(this, v10, v9)) == 0) )
  {
    ((void (__thiscall *)(int (__thiscall ***)(void *, int *, int *, int *, int *)))(*this)[213])(this);
    v6 = (_DWORD *)sub_10229D00(32);
    if ( v6 )
      v7 = sub_10229D20(v6, (int)"TextKillFocus");
    else
      v7 = 0;
    ((void (__thiscall *)(int (__thiscall ***)(void *, int *, int *, int *, int *), _DWORD *))(*this)[45])(this, v7);
    return sub_10252370(this);
  }
  return result;
}
