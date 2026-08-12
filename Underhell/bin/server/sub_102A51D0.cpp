char __usercall sub_102A51D0@<al>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  double v4; // st7

  sub_1029ED70((int *)a1, a2, a3);
  *(_DWORD *)(a1 + 196) = 0;
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4, 4.0, 15.0);
  if ( *(float *)(dword_106B31C8 + 12) <= (double)*(float *)(a1 + 212) )
    v4 = *(float *)(a1 + 212) + 4.0;
  else
    v4 = *(float *)(dword_106B31C8 + 12) + 4.0;
  *(float *)(a1 + 212) = v4;
  return sub_102A01C0((int *)a1, (int)"TLK_PASSENGER_FINISH_ENTRANCE", 0, 0, 0, 0);
}
