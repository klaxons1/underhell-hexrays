void __cdecl sub_1025FAE0(_DWORD *a1)
{
  if ( a1 && (a1[63] & 1) == 0 )
  {
    if ( dword_106C8004 )
    {
      sub_1025FA50(a1 + 3);
    }
    else
    {
      a1[63] |= 1u;
      byte_106C8001 = 0;
      (*(void (__thiscall **)(_DWORD *))(*a1 + 404))(a1);
      byte_106C8000 = 1;
      (*(void (__thiscall **)(_DWORD *, int))*a1)(a1, 1);
      byte_106C8000 = 0;
    }
  }
}
