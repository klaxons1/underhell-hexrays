void __usercall sub_103DF600(int a1@<ecx>, double a2@<st0>)
{
  void (__noreturn ***v3)(); // esi
  double v4; // st6
  float v5; // [esp+4h] [ebp-10h]

  if ( *(_BYTE *)(a1 + 1689) )
  {
    v3 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD))(*v3)[15])(v3, *(_DWORD *)(a1 + 1856));
    if ( *(_DWORD *)(a1 + 1788) && *(_DWORD *)(a1 + 1800) )
      v4 = 1.0;
    else
      v4 = 0.0;
    if ( v4 != a2 )
    {
      v5 = v4;
      ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v3)[12])(
        v3,
        *(_DWORD *)(a1 + 1856),
        LODWORD(v5),
        0.0099999998);
    }
  }
}
