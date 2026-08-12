int __usercall sub_10276500@<eax>(int a1@<ecx>, double a2@<st0>)
{
  int result; // eax
  int v4; // edi
  void (__thiscall *v5)(int, int); // edx
  int v6; // ebx
  int *v7; // ecx
  int *v8; // ecx
  float v9; // [esp+8h] [ebp-4h]

  sub_100C1600(a1, 1, 1);
  result = sub_100D1940((_DWORD *)a1);
  v4 = result;
  if ( result )
  {
    v5 = *(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 944);
    *(_BYTE *)(a1 + 1144) = 0;
    v5(a1, 253);
    v6 = dword_106B31C8;
    if ( *(_DWORD *)(v4 + 1672) != *(_DWORD *)(dword_106B31C8 + 12) )
    {
      if ( *(_BYTE *)(v4 + 84) )
      {
        *(_BYTE *)(v4 + 88) |= 1u;
      }
      else
      {
        v7 = *(int **)(v4 + 24);
        if ( v7 )
          sub_100194B0(v7, 1672);
      }
      a2 = *(float *)(v6 + 12);
      *(float *)(v4 + 1672) = *(float *)(v6 + 12);
    }
    sub_100D18C0(a1);
    result = dword_106B31C8;
    v9 = a2 + *(float *)(dword_106B31C8 + 12);
    if ( *(_DWORD *)(a1 + 1132) != LODWORD(v9) )
    {
      result = a1;
      if ( *(_BYTE *)(a1 + 84) )
      {
        *(_BYTE *)(a1 + 88) |= 1u;
        *(float *)(a1 + 1132) = v9;
      }
      else
      {
        v8 = *(int **)(a1 + 24);
        if ( v8 )
          result = sub_100194B0(v8, 1132);
        *(float *)(a1 + 1132) = v9;
      }
    }
  }
  return result;
}
