void __usercall sub_101449A0(int a1@<ecx>, int a2@<edi>)
{
  sub_100E38F0((float *)a1);
  if ( *(_BYTE *)(a1 + 868) )
  {
    (**(void (__thiscall ***)(int, int, int))(a1 + 800))(a1 + 800, a1 + 804, a2);
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    sub_10422220(a1 + 704, a1 + 804);
    (**(void (__thiscall ***)(int, int))(a1 + 800))(a1 + 800, a1 + 804);
    *(float *)(a1 + 804) = *(float *)(a1 + 804) * -1.0;
    *(float *)(a1 + 808) = *(float *)(a1 + 808) * -1.0;
    *(float *)(a1 + 812) = -1.0 * *(float *)(a1 + 812);
  }
  sub_10144140(a1);
}
