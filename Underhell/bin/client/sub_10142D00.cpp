double __usercall sub_10142D00@<st0>(int a1@<esi>)
{
  if ( !a1
    || *(float *)(dword_10439DC4 + 44) > 0.0
    || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 60))(dword_1044CC48) )
  {
    return 1.0;
  }
  if ( !*(_DWORD *)(dword_1043C1A4 + 48) || -1.0 == *(float *)(dword_1043C474 + 44) )
    return *(float *)(a1 + 44);
  return *(float *)(dword_1043C474 + 44);
}
