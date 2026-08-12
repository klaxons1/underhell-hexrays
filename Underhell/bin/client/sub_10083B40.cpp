int __usercall sub_10083B40@<eax>(int a1@<edx>, int a2)
{
  int v2; // eax
  _BYTE v4[12]; // [esp+0h] [ebp-18h] BYREF
  _BYTE v5[12]; // [esp+Ch] [ebp-Ch] BYREF

  sub_101F26A0(a1, v4, v5);
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 168))(dword_1041315C);
  return (*(int (__thiscall **)(int, _BYTE *, _BYTE *, int, _DWORD))(*(_DWORD *)v2 + 8))(v2, v4, v5, a2, 0);
}
