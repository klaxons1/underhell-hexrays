int __thiscall sub_100C7810(int *this, int *a2)
{
  int v4; // edi
  int v5; // eax
  int v6; // eax
  _BYTE v8[12]; // [esp+Ch] [ebp-18h] BYREF
  _BYTE v9[12]; // [esp+18h] [ebp-Ch] BYREF
  int v10; // [esp+2Ch] [ebp+8h]

  v4 = *this;
  v10 = *a2;
  v5 = (*(int (__thiscall **)(int *, _BYTE *, int))(*this + 504))(this, v9, 1);
  v6 = (*(int (__thiscall **)(int *, _BYTE *, int))(v10 + 520))(a2, v8, v5);
  return (*(int (__thiscall **)(int *, int))(v4 + 880))(this, v6);
}
