char __usercall sub_10401830@<al>(int a1@<ecx>, float a2@<ebx>)
{
  sub_10401510(a1, a2);
  sub_103FF610((_DWORD *)a1, a2);
  *(_DWORD *)(a1 + 9828) = 2;
  if ( *(_BYTE *)(dword_106B3CDC + 12) == 1 )
    sub_103FE6A0((_DWORD *)a1);
  else
    sub_103FDD20((_DWORD *)a1);
  if ( *(_BYTE *)(dword_106B3CDC + 12) == 1 )
    sub_10112D90((unsigned __int16 *)(a1 + 320), 0, 0.0);
  *(float *)(a1 + 9856) = *(float *)(dword_106B31C8 + 12);
  return sub_102B2150(a1);
}
