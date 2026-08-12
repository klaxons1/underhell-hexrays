void __usercall sub_101AEFB0(int a1@<ecx>, int a2@<esi>)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 260);
  switch ( v2 )
  {
    case 1:
      sub_101AE920((char *)(a1 - 44));
      break;
    case 2:
      sub_101AECC0(a1 - 44);
      break;
    case 3:
      sub_101AE630(a1 - 44, a2);
      break;
  }
}
