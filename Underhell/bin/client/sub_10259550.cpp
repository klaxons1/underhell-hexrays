int __thiscall sub_10259550(int (__thiscall ***this)(void *, int *, int *), int a2)
{
  int result; // eax
  void (*v4)(void); // edx
  int v5; // eax
  bool v6; // zf
  int v7; // edi
  int v8; // ebx
  int v9; // eax
  bool v10; // sf
  int v11; // [esp+8h] [ebp-4h] BYREF

  result = a2;
  if ( a2 == 107 )
  {
    v4 = (void (*)(void))(*this)[4];
    this[76] = (int (__thiscall **)(void *, int *, int *))-1;
    v4();
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA68 + 28))(dword_1047CA68, &v11, &a2);
    sub_10236F60(this, &v11, &a2);
    v5 = sub_10258E30((int)this, v11, a2);
    v6 = *((_BYTE *)this + 219) == 0;
    this[74] = (int (__thiscall **)(void *, int *, int *))v5;
    if ( !v6 )
    {
      v7 = dword_1047CA68;
      v8 = *(_DWORD *)dword_1047CA68;
      v9 = ((int (__thiscall *)(int (__thiscall ***)(void *, int *, int *)))**this)(this);
      (*(void (__thiscall **)(int, int))(v8 + 8))(v7, v9);
      v10 = (int)this[76] < 0;
      *((_BYTE *)this + 300) = 1;
      if ( v10 )
        this[76] = this[74];
      this[77] = this[74];
    }
    ((void (__thiscall *)(int (__thiscall ***)(void *, int *, int *), _DWORD))(*this)[12])(this, 0);
    return ((int (__thiscall *)(int (__thiscall ***)(void *, int *, int *)))(*this)[4])(this);
  }
  else if ( a2 == 108 && *((_BYTE *)this + 219) )
  {
    sub_102574A0(this);
    return sub_10257670((int)this);
  }
  return result;
}
