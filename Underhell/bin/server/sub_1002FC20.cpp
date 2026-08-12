int __stdcall sub_1002FC20(int a1, _DWORD *a2)
{
  int result; // eax
  int v3; // eax
  _BYTE v4[256]; // [esp+8h] [ebp-100h] BYREF

  if ( a2 )
  {
    *a2 = 0;
    a2[1] = 0;
    a2[2] = 0;
    a2[3] = 0;
    a2[4] = 0;
    a2[5] = 0;
    a2[6] = 0;
    a2[7] = 0;
  }
  for ( result = (*(int (__thiscall **)(int, _BYTE *, int, _DWORD))(*(_DWORD *)a1 + 80))(a1, v4, 256, 0);
        v4[0];
        result = (*(int (__thiscall **)(int, _BYTE *, int, _DWORD))(*(_DWORD *)a1 + 80))(a1, v4, 256, 0) )
  {
    v3 = sub_1007DA60(v4);
    if ( v3 != -1 )
      a2[(v3 - 1000000000) >> 5] |= 1 << (v3 & 0x1F);
  }
  return result;
}
