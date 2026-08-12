char __usercall sub_101B26E0@<al>(int a1@<ecx>, int a2@<edi>)
{
  int v3; // eax

  sub_100E38F0((float *)a1);
  v3 = *(_DWORD *)(a1 + 248) >> 4;
  if ( (*(_DWORD *)(a1 + 248) & 0x10) == 0 )
  {
    LOBYTE(v3) = sub_101B1470(a1, a2);
    if ( !(_BYTE)v3 )
      LOBYTE(v3) = sub_1025FAC0(a1);
  }
  return v3;
}
