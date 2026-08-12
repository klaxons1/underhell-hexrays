int __usercall sub_102D3540@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int (__thiscall *v4)(int, int, _DWORD, _DWORD); // edx
  int result; // eax

  sub_102CD410((unsigned __int16 *)a1, a2, a3);
  *(float *)(a1 + 1432) = *(float *)(dword_106B31C8 + 12);
  sub_102D11F0(a1, a3);
  v4 = *(int (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)a1 + 528);
  *(_BYTE *)(a1 + 1448) = 1;
  result = v4(a1, a1 + 1436, 0, 0);
  *(_BYTE *)(a1 + 1449) = 0;
  return result;
}
