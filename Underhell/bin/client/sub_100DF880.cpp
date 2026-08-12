int __thiscall sub_100DF880(_DWORD *this, int a2, int a3)
{
  int v3; // edi
  int v5; // ebx
  _DWORD *v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // [esp+4h] [ebp-4h] BYREF

  v3 = a3;
  if ( !a3 )
  {
    v3 = this[4287];
    if ( !v3 )
      return 0;
  }
  if ( a2 )
  {
    v5 = 0;
    v6 = (_DWORD *)(a2 + 8);
    do
    {
      (*(void (__thiscall **)(int, int, _DWORD, int *, int *, int *))(*(_DWORD *)dword_1047CA6C + 280))(
        dword_1047CA6C,
        v3,
        (char)v5,
        &a3,
        &a2,
        &v10);
      v7 = a3;
      v8 = a2;
      v9 = v10;
      *(v6 - 2) = a3;
      *(v6 - 1) = v8;
      *v6 = v9;
      v6[1] = v9 + v8 + v7;
      ++v5;
      v6 += 4;
    }
    while ( v5 < 256 );
  }
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, v3);
}
