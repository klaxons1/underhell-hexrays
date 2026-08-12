int __stdcall sub_10156460(int a1, int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // ebx
  int (***v7)(); // eax
  int v8; // eax
  int (***v9)(); // eax
  _BYTE v11[4]; // [esp+8h] [ebp-28h] BYREF
  _BYTE v12[36]; // [esp+Ch] [ebp-24h] BYREF

  sub_102214D0(a1);
  v2 = sub_1021D5F0(v11);
  v3 = sub_10222170(a1, a2);
  if ( v3 )
  {
    v4 = (int)*off_10646704;
    v5 = sub_101D3240();
    (*(void (__thiscall **)(int (***)(), int, int, _BYTE *, _DWORD))(v4 + 44))(off_10646704, v5, v2, v11, 0);
    v6 = (int)*off_10646704;
    v7 = sub_100A7090();
    (*(void (__thiscall **)(int (***)(), int (***)(), int, _BYTE *, _DWORD))(v6 + 44))(off_10646704, v7, v2, v11, 0);
  }
  v8 = sub_101D3240();
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 32))(v8);
  v9 = sub_100A7090();
  ((void (__thiscall *)(int (***)()))(*v9)[8])(v9);
  sub_102375F0(v12);
  return v3;
}
