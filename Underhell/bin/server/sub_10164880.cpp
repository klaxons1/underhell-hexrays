float *__usercall sub_10164880@<eax>(int *a1@<ecx>, float *a2@<ebx>)
{
  int v2; // eax

  v2 = a1[906];
  if ( v2 )
    return (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 164))(a1[906]);
  else
    return sub_1002D0E0(a1, a2);
}
