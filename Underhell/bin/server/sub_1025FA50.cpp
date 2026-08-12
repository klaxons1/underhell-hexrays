void __cdecl sub_1025FA50(_DWORD *a1)
{
  _DWORD *v1; // edi

  if ( a1 && !(unsigned __int8)sub_102357A0(a1) )
  {
    if ( sub_101B4DB0() )
    {
      sub_101BA8E0((int)a1);
    }
    else
    {
      sub_10235790(a1);
      v1 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a1 + 28))(a1);
      if ( v1 )
      {
        byte_106C8001 = 0;
        (*(void (__thiscall **)(_DWORD *))(*v1 + 404))(v1);
        v1[65] = 0;
      }
      sub_1012D8C0((int (__thiscall ***)(_DWORD))a1);
    }
  }
}
