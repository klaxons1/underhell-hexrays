void __usercall sub_104094B0(int a1@<ecx>, int a2@<ebp>)
{
  _DWORD *v3; // edi

  sub_100D15C0((_DWORD *)a1);
  if ( *(_BYTE *)(a1 + 1393) )
  {
    v3 = (_DWORD *)sub_100D1940((_DWORD *)a1);
    if ( v3 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v3 + 320))(v3) )
      {
        if ( sub_100CF460(v3) == a1 )
          sub_10409420((_BYTE *)a1, a2);
      }
    }
  }
}
