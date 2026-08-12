int __thiscall sub_1026B690(int this)
{
  int v2; // edi
  int v3; // eax
  int (__thiscall ***v4)(void *, int *, _BYTE *); // ecx
  int v5; // eax
  int v6; // eax
  int v8; // [esp+18h] [ebp-24h]
  int v9; // [esp+24h] [ebp-18h] BYREF
  int v10; // [esp+28h] [ebp-14h] BYREF
  int v11; // [esp+2Ch] [ebp-10h] BYREF
  int v12; // [esp+30h] [ebp-Ch] BYREF
  int v13; // [esp+34h] [ebp-8h] BYREF
  _BYTE v14[4]; // [esp+38h] [ebp-4h] BYREF

  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 228) + 200))(*(_DWORD *)(this + 228), 0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 228) + 784))(
    *(_DWORD *)(this + 228),
    *(_DWORD *)(this + 280));
  v2 = **(_DWORD **)(this + 228);
  v3 = sub_1026B630((_DWORD *)this);
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(v2 + 776))(*(_DWORD *)(this + 228), 0, v3);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 228) + 816))(*(_DWORD *)(this + 228), 1);
  sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v9, (int)&v11);
  (*(void (__thiscall **)(int, _BYTE *, int *, int *, int *))(*(_DWORD *)this + 24))(this, v14, &v10, &v12, &v13);
  v4 = *(int (__thiscall ****)(void *, int *, _BYTE *))(this + 228);
  v9 -= v10;
  v5 = sub_102374C0(v4);
  sub_10236140(*(int (__thiscall ****)(void *, int, int))(this + 228), v9 - v5, 1);
  v8 = v11 - v12 - v13;
  v6 = sub_102374C0(*(int (__thiscall ****)(void *, int *, _BYTE *))(this + 228));
  return sub_102361A0(*(int (__thiscall ****)(void *, int, int))(this + 228), v6, v8);
}
