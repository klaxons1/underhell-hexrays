_DWORD *__cdecl sub_102E83D0(int a1, float *a2, float *a3, float *a4, bool *a5)
{
  _DWORD *v5; // esi
  bool v6; // al
  _BYTE v8[84]; // [esp+Ch] [ebp-B4h] BYREF
  _BYTE v9[55]; // [esp+60h] [ebp-60h] BYREF
  char v10; // [esp+97h] [ebp-29h]
  float v11[3]; // [esp+B4h] [ebp-Ch] BYREF
  int savedregs; // [esp+C0h] [ebp+0h] BYREF

  v5 = (_DWORD *)sub_101811E0("reserved_spot", -1);
  sub_100E0D20((int)v5, a2);
  sub_1025F360(v5, (int)a3, (int)a4);
  (*(void (__thiscall **)(_DWORD *, int))(*v5 + 76))(v5, a1);
  (*(void (__thiscall **)(_DWORD *))(*v5 + 96))(v5);
  sub_100231A0((int)&savedregs, (int)v5, a2, a2, a3, a4, 33636363, a1, 8, (int)v9);
  v6 = v10 == 0;
  *a5 = v10 == 0;
  if ( !v6 )
  {
    v11[0] = *a2;
    v11[1] = a2[1];
    v11[2] = a2[2] + 1.0;
    sub_100231A0((int)&savedregs, (int)v5, v11, v11, a3, a4, 33636363, a1, 8, (int)v8);
    *a5 = v8[55] == 0;
  }
  return v5;
}
