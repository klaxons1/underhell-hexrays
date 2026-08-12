// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_10325350@<eax>(int a1@<ecx>, int a2@<edi>, int a3@<esi>, float a4)
{
  double v4; // st7
  int v6; // edi
  int (__thiscall *v7)(int, int); // edx
  _DWORD v10[3]; // [esp+Ch] [ebp-Ch] BYREF
  float v11; // [esp+20h] [ebp+8h]

  v4 = a4 + 25.0;
  if ( !*(_BYTE *)(a1 + 3692) && v4 + 100.0 > *(float *)(a1 + 3668) )
  {
    sub_1023C380((_DWORD *)a1, (int)"NPC_Barnacle.Scream", 0.0, 0);
    *(_BYTE *)(a1 + 3692) = 1;
  }
  sub_10321E60((_DWORD *)a1);
  v6 = (*(int (__thiscall **)(int, int, int, _DWORD, _DWORD))(*(_DWORD *)a1 + 368))(a1, a2, a3, v10[0], v10[1]);
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v11 = v4;
  if ( *(float *)(a1 + 588) - *(float *)((*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v6 + 504))(v6, v10) + 8) >= v11 )
    return sub_10325150(a1, 1);
  v7 = *(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 1416);
  *(_BYTE *)(a1 + 3676) = 0;
  return v7(a1, dword_106E509C);
}
