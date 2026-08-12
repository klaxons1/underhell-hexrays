int __usercall sub_102B1880@<eax>(int *a1@<ecx>, int a2@<ebx>)
{
  float v5; // [esp+0h] [ebp-Ch]

  sub_102B1360((int)a1, a2);
  if ( a1[350]-- == 1 )
  {
    sub_100EC3F0(a1, 0, 0.0, 0);
    return (*(int (__thiscall **)(int *, _DWORD))(*a1 + 960))(a1, *(float *)(dword_106B31C8 + 12));
  }
  else
  {
    v5 = ((double (__thiscall *)(int *))*(_DWORD *)(*a1 + 1108))(a1) + *(float *)(dword_106B31C8 + 12);
    return sub_100EC4A0(a1, v5, 0);
  }
}
