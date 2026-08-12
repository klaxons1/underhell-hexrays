int __thiscall sub_10184E80(int this, int a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int v8; // [esp-Ch] [ebp-20h]
  _DWORD v10[2]; // [esp+Ch] [ebp-8h] BYREF

  v3 = **(_DWORD **)(this + 400);
  v10[0] = *(_DWORD *)(this + 400);
  v8 = sub_1022AD00(a2);
  v4 = sub_1022B4C0("label", (int)Locale);
  v5 = (*(int (__thiscall **)(_DWORD, int, int, int, int))(v3 + 780))(*(_DWORD *)(this + 400), v4, v8, this, a2);
  v6 = *(_DWORD *)(this + 700);
  v10[1] = v5;
  return sub_100F9FF0((int *)(this + 688), v6, v10);
}
