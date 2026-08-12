int __thiscall sub_102797D0(int this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v7; // [esp-4h] [ebp-20h]
  int v8; // [esp+Ch] [ebp-10h] BYREF
  int v9; // [esp+10h] [ebp-Ch] BYREF
  _BYTE v10[4]; // [esp+14h] [ebp-8h] BYREF
  _BYTE v11[4]; // [esp+18h] [ebp-4h] BYREF

  sub_1024A6C0(this);
  sub_10236250((int (__thiscall ***)(void *, int, int))this, (int)v11, (int)&v8, (int)v10, (int)&v9);
  v2 = *(_DWORD *)(this + 292);
  v8 = v9 - 2;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, v2);
  v3 = dword_1047CA6C;
  v4 = *(_DWORD *)dword_1047CA6C;
  v7 = v8 + 1;
  v5 = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))this);
  return (*(int (__thiscall **)(int, int, int, int, int))(v4 + 48))(v3, 1, v8, v5 - 2, v7);
}
