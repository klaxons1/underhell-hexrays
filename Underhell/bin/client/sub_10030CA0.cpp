int __usercall sub_10030CA0@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // edi
  int v5[1536]; // [esp+1Ch] [ebp-4800h] BYREF
  int v6[1536]; // [esp+181Ch] [ebp-3000h] BYREF
  int v7[1536]; // [esp+301Ch] [ebp-1800h] BYREF

  sub_10035F90(1);
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1);
  v3 = sub_10030A60(a1, a2);
  (*(void (__thiscall **)(int, int *, int *, int *, _DWORD))(*(_DWORD *)a1 + 672))(a1, v5, v7, v6, 0.1);
  sub_1002B650(v3, (int)v5, (int)v7, (int)v6, 0.1);
  return v3;
}
