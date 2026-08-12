void __usercall sub_101B6B60(int a1@<esi>, float a2)
{
  char v2; // al
  char *v3; // eax

  if ( *(_BYTE *)(a1 + 306) == 6 )
  {
    if ( *(int *)(*(_DWORD *)(dword_106B2C88 + 28) + 48) > 1 )
      *(_DWORD *)(a1 + 236) |= 0x20u;
    v2 = (unsigned __int8)sub_100D6390((_DWORD *)a1);
    v3 = (char *)sub_1025F440("VPhysics Penetration Error (%s)!", v2);
    sub_100D5D60((_DWORD *)a1, v3, (int)a2);
  }
}
