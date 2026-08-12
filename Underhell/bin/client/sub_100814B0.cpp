int __thiscall sub_100814B0(_DWORD *this)
{
  int result; // eax
  int v3; // eax
  bool v4; // bl
  int v5; // [esp-10h] [ebp-1Ch]
  int v6; // [esp-Ch] [ebp-18h]
  int v7; // [esp+4h] [ebp-8h] BYREF
  int v8; // [esp+8h] [ebp-4h] BYREF

  result = sub_101B9A20();
  if ( result )
  {
    (*(void (__thiscall **)(int, int, int *, int *))(*(_DWORD *)dword_1047CA70 + 20))(dword_1047CA70, result, &v8, &v7);
    v3 = v8;
    v4 = v8 != this[7] || v7 != this[8];
    v6 = v7;
    v5 = v8;
    this[8] = v7;
    this[7] = v3;
    result = sub_10236200(0, 0, v5, v6);
    if ( v4 )
      return (*(int (__thiscall **)(_DWORD *))(*this + 140))(this);
  }
  return result;
}
