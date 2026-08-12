bool __stdcall sub_102367C0(_DWORD *a1, int *a2)
{
  bool result; // al
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edi

  result = 0;
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*a2 + 968))(a2) || sub_100CF5D0(a1, a2[298]) > 0 )
  {
    if ( !sub_100CF460(a1) )
      return 1;
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*a2 + 1236))(a2) )
    {
      v3 = sub_100CF460(a1);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 1240))(v3) )
      {
        v4 = sub_100CF460(a1);
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 980))(v4) )
        {
          if ( a2 == (int *)sub_100CF460(a1) )
            return 1;
          v5 = sub_100CF460(a1);
          v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 1232))(v5);
          if ( (*(int (__thiscall **)(int *))(*a2 + 1232))(a2) > v6 )
            return 1;
        }
      }
    }
  }
  return result;
}
