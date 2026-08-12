int __usercall sub_10253440@<eax>(int a1@<ecx>, float a2@<edi>)
{
  int v3; // edi
  int result; // eax

  sub_102514A0((_DWORD *)a1, a2);
  sub_100D7260((float *)a1, &flt_106F1CB4);
  sub_100E11A0(a1, (float *)(a1 + 956));
  if ( *(_DWORD *)(a1 + 992) == 2 )
  {
    v3 = *(_DWORD *)(a1 + 976);
    *(_DWORD *)(v3 + 800) = sub_101AD320(*(_DWORD *)(a1 + 972), (float *)(v3 + 716));
  }
  *(_DWORD *)(a1 + 4) = 0;
  sub_100D8290((float *)a1, -1.0);
  result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 744))(a1, *(_DWORD *)(a1 + 800));
  *(_DWORD *)(a1 + 1000) = 1;
  return result;
}
