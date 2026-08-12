int __thiscall sub_1025A390(int this, int a2, int a3)
{
  int v3; // ebp
  void (__thiscall *v5)(int, _DWORD, _DWORD); // edx
  int v6; // edi
  int v8; // [esp-8h] [ebp-14h]

  v3 = a3;
  sub_102366A0((void *)this, a2, a3);
  *(_BYTE *)(this + 292) = 1;
  *(_DWORD *)(this + 256) = 0;
  v8 = *(_DWORD *)(this + 256);
  a3 = 999999;
  sub_100C2010((int *)(this + 244), v8, &a3);
  v5 = *(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)this + 244);
  *(_DWORD *)(this + 288) = 0;
  *(_BYTE *)(this + 284) = 1;
  v5(this, 0, 0);
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 212) + 128))(*(_DWORD *)(this + 212)) )
    return sub_10236200(*(int (__thiscall ****)(void *, int, int))(this + 376), 0, 0, a2, v3);
  sub_10236050(*(int (__thiscall ****)(void *, int))(this + 212));
  v6 = a2 - sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 212));
  return sub_10236200(*(int (__thiscall ****)(void *, int, int))(this + 376), 0, 0, v6, v3);
}
