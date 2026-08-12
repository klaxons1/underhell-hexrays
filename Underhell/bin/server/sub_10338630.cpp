int __thiscall sub_10338630(int this, int a2, int a3)
{
  unsigned __int16 v4; // ax
  unsigned __int16 v6; // [esp-4h] [ebp-14h]
  float v7; // [esp+0h] [ebp-10h]
  float v8; // [esp+4h] [ebp-Ch]

  if ( a3 )
  {
    v8 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a3 + 1124))(a3);
    v7 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a3 + 1120))(a3);
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 1116))(a3);
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 1112))(a3);
    sub_100B8EC0((float *)(this + 2760), v4, v6, v7, v8);
  }
  return sub_10302780((_DWORD *)this, a2, a3);
}
