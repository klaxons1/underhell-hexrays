int __thiscall sub_1024F4C0(int (__thiscall ***this)(void *, int, int), int a2, int a3)
{
  int result; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // [esp+8h] [ebp-10h] BYREF
  int v8; // [esp+Ch] [ebp-Ch] BYREF
  int v9; // [esp+10h] [ebp-8h] BYREF
  int v10; // [esp+14h] [ebp-4h] BYREF

  sub_10239490((int)this, a2, a3);
  result = ((int (__thiscall *)(int (__thiscall ***)(void *, int, int)))(*this)[21])(this);
  if ( !(_BYTE)result )
  {
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &v8, &v10);
    sub_10236250(this, (int)&a3, (int)&a2, (int)&v7, (int)&v9);
    v5 = a3;
    if ( a3 + v7 > v8 )
      v5 = v8 - v7;
    v6 = a2;
    if ( a2 + v9 > v10 )
      v6 = v10 - v9;
    a3 = v5 < 0 ? 0 : v5;
    a2 = v6 < 0 ? 0 : v6;
    return sub_10236140(this, a3, a2);
  }
  return result;
}
