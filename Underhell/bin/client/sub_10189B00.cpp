char __cdecl sub_10189B00(int *a1)
{
  int v1; // eax
  int *v2; // eax

  v1 = sub_100422D0();
  if ( v1 )
  {
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 844))(v1);
    if ( v1 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 320))(dword_1041315C) )
      {
        sub_100B1EE0();
        LOBYTE(v1) = sub_100B2B20();
        if ( !(_BYTE)v1 )
        {
          v2 = sub_100B1EE0();
          LOBYTE(v1) = sub_100B2A00(v2, 0);
        }
      }
      else
      {
        LOBYTE(v1) = sub_10189A70(a1);
      }
    }
  }
  return v1;
}
