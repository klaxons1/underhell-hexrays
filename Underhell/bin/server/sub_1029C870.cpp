unsigned int __usercall sub_1029C870@<eax>(int a1@<ecx>, double a2@<st0>)
{
  int v3; // edi
  unsigned int v4; // eax
  unsigned int result; // eax

  sub_1004B420((int (__thiscall ****)(_DWORD))a1);
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 368))(*(_DWORD *)(a1 + 4)) )
  {
    if ( !sub_10023D10(*(_DWORD **)(a1 + 4), 10) )
    {
      v3 = dword_106B31C8;
      sub_10021820(*(void **)(a1 + 4));
      if ( *(float *)(v3 + 12) - a2 >= 3.0 )
        sub_10021850(*(void **)(a1 + 4));
    }
  }
  v4 = *(_DWORD *)(a1 + 20);
  if ( v4 == -1
    || (result = v4 >> 12, off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 2] != result)
    || !off_1061BE18[4 * (*(_DWORD *)(a1 + 20) & 0xFFF) + 1] )
  {
    result = *(_DWORD *)(a1 + 4);
    *(_BYTE *)(a1 + 24) = 0;
    *(_DWORD *)(result + 2792) = 3;
  }
  return result;
}
