int __thiscall sub_1012ECC0(_DWORD *this, int a2)
{
  void (__thiscall *v3)(int, int *, int); // edx
  void (__thiscall *v5)(int, int *, int); // edx
  int v6; // edi
  int v7; // eax
  int v9; // [esp+Ch] [ebp-Ch] BYREF
  int v10; // [esp+10h] [ebp-8h] BYREF
  int v11; // [esp+14h] [ebp-4h] BYREF
  _DWORD *v12; // [esp+20h] [ebp+8h]

  v3 = *(void (__thiscall **)(int, int *, int))(*(_DWORD *)a2 + 52);
  v11 = 6;
  v3(a2, &v11, 1);
  v5 = *(void (__thiscall **)(int, int *, int))(*(_DWORD *)a2 + 52);
  v10 = 5;
  v5(a2, &v10, 1);
  v6 = 0;
  v12 = this + 320200;
  do
  {
    v7 = *(_DWORD *)a2;
    v9 = *v12 - v6 * 4 - (_DWORD)this - 800;
    (*(void (__thiscall **)(int, int *, int))(v7 + 52))(a2, &v9, 1);
    (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)a2 + 76))(a2, &this[v6 + 200], 256000);
    ++v12;
    v6 += 64000;
  }
  while ( v6 < 320000 );
  return sub_100D83D0(this, a2);
}
