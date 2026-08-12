char __cdecl sub_10189C80(int *a1)
{
  int v1; // eax
  int *v2; // eax
  int *v3; // eax
  char *v5; // [esp-8h] [ebp-8h]

  v1 = sub_100422D0();
  if ( v1 )
  {
    v1 = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 844))(v1);
    if ( v1 )
    {
      if ( *a1 == 2 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 320))(dword_1041315C) )
        {
          sub_100B1EE0();
          LOBYTE(v1) = sub_100B2B20();
          if ( !(_BYTE)v1 )
          {
            if ( *a1 > 1 )
            {
              v5 = (char *)a1[259];
              v3 = sub_100B1EE0();
              LOBYTE(v1) = (unsigned __int8)sub_100B2A90(v3, v5);
            }
            else
            {
              v2 = sub_100B1EE0();
              LOBYTE(v1) = (unsigned __int8)sub_100B2A90(v2, (char *)Locale);
            }
          }
        }
        else
        {
          LOBYTE(v1) = sub_10189A70(a1);
        }
      }
    }
  }
  return v1;
}
