int __thiscall sub_103C1060(int this, int a2, int a3)
{
  int result; // eax
  __int64 v5; // [esp-8h] [ebp-18h]

  if ( a2 )
    *(_DWORD *)(this + 164) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  else
    *(_DWORD *)(this + 164) = -1;
  *(float *)(this + 168) = *(float *)(dword_106B31C8 + 12);
  *(_WORD *)(this + 92) = 0;
  HIDWORD(v5) = this - 3672;
  LODWORD(v5) = this - 3672;
  sub_1010DD80((_DWORD *)(this + 268), v5, 0.0);
  result = (*(int (__thiscall **)(int, int))(*(_DWORD *)(this - 3672) + 1080))(this - 3672, a2);
  if ( result != 1 )
    *(float *)(this + 96) = *(float *)(dword_106B31C8 + 12) + 2.0;
  return result;
}
