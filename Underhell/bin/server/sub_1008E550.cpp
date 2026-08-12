int __usercall sub_1008E550@<eax>(float *a1@<ecx>, int a2@<esi>)
{
  int v3; // edi

  if ( *(float *)(a2 + 716) == *a1
    && *(float *)(a2 + 720) == a1[1]
    && *(float *)(a2 + 724) == a1[2]
    && sub_100223E0((_DWORD *)a2) == 3 )
  {
    return 8;
  }
  if ( ((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1672))(a2) & 4) != 0 )
    return 20;
  if ( ((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1672))(a2) & 1) == 0 )
    return 0;
  v3 = 17;
  if ( ((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1672))(a2) & 2) != 0 )
    return 19;
  return v3;
}
