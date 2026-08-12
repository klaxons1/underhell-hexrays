char __usercall sub_10045570@<al>(int a1@<ecx>, int a2@<edi>)
{
  char result; // al
  double v4; // st7
  int (__thiscall *v5)(int, int, int); // edx
  int v6; // edi
  int v7; // eax
  int v8; // eax
  float v9; // [esp+10h] [ebp-4h]

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1344))(a1);
  if ( result )
  {
    v4 = ((double (__thiscall *)(int, _DWORD, _DWORD, int))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.5,
           1.0,
           a2);
    v9 = v4;
    v5 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 2092);
    if ( (*(_BYTE *)(a1 + 2716) & 0x40) != 0 )
    {
      v6 = v5(a1, 0, 1);
      result = sub_10022CA0((_DWORD *)a1, v6);
      if ( result )
        result = sub_100C7570(v6, COERCE_FLOAT(1), 1);
    }
    else
    {
      v6 = v5(a1, 1, 1);
      result = sub_10022CA0((_DWORD *)a1, v6);
      if ( result )
        result = sub_100C7570(v6, COERCE_FLOAT(1), 1);
      *(_DWORD *)(a1 + 2716) |= 0x40u;
    }
    if ( v6 != -1 )
    {
      v7 = sub_100C4E40(v6);
      v8 = sub_100C4F80(v7);
      if ( v8 == -1 )
      {
        result = dword_106B31C8;
        *(float *)(a1 + 2824) = v9 + *(float *)(dword_106B31C8 + 12);
      }
      else
      {
        sub_10019B30((_DWORD *)a1, v8);
        result = dword_106B31C8;
        *(float *)(a1 + 2824) = v4 + v9 + *(float *)(dword_106B31C8 + 12);
      }
    }
  }
  return result;
}
