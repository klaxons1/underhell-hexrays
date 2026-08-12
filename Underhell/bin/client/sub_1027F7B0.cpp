int __thiscall sub_1027F7B0(_DWORD *this, int a2)
{
  int (__thiscall ***v2)(void *, int, int); // edi
  int v4; // ebx
  int v6; // [esp+Ch] [ebp-Ch] BYREF
  int v7; // [esp+10h] [ebp-8h] BYREF
  int v8; // [esp+14h] [ebp-4h] BYREF

  v2 = (int (__thiscall ***)(void *, int, int))a2;
  sub_10236250((int (__thiscall ***)(void *, int, int))a2, (int)&v6, (int)&a2, (int)&v8, (int)&v7);
  v4 = this[4];
  v6 = this[3] * (v6 / this[3]);
  a2 = v4 * (a2 / v4);
  sub_10236140(v2, v6, a2);
  return sub_102361A0(v2, this[3] * ((v6 + v8) / this[3]) - v6, this[4] * ((a2 + v7) / this[4]) - a2);
}
