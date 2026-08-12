void __thiscall sub_10329A00(int this, int a2, int a3)
{
  int (__thiscall *v4)(int, const char *); // eax
  const char *v5; // eax
  float v6; // [esp+0h] [ebp-110h]
  const char *v7; // [esp+4h] [ebp-10Ch]
  char Buffer[256]; // [esp+10h] [ebp-100h] BYREF

  if ( a2 )
    *(_DWORD *)(this + 160) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(this + 160) = -1;
  *(float *)(this + 164) = *(float *)(dword_106B31C8 + 12);
  sub_10023E00((char *)(this - 3680), 75);
  sub_10023CB0((char *)(this - 3680), 76);
  if ( a3 == 3 )
  {
    *(float *)(this + 116) = *(float *)(dword_106B31C8 + 12) + 2.0;
    v6 = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
    sub_100EC4A0((int *)(this - 3680), v6, 0);
    v4 = *(int (__thiscall **)(int, const char *))(*(_DWORD *)(this - 3680) + 2228);
    Buffer[0] = 0;
    v5 = (const char *)v4(this - 3680, "DiveBomb");
    sub_1001E280(Buffer, "%s.%s", v5, v7);
    *(_BYTE *)(this + 108) = 1;
    sub_1023C380((_DWORD *)(this - 3680), (int)Buffer, 0.0, 0);
  }
}
