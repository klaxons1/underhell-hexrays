int __cdecl sub_10189BC0(int *a1)
{
  int result; // eax
  int *v2; // eax
  int v3; // eax
  int *v4; // eax
  int *v5; // eax
  int v6; // [esp-4h] [ebp-4h]

  result = sub_100422D0();
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 844))(result);
    if ( result )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 320))(dword_1041315C) )
      {
        sub_100B1EE0();
        if ( sub_100B2B20() )
        {
          v2 = sub_100B1EE0();
          sub_100B1F50(v2);
          sub_100B1EE0();
          return sub_100B1FD0(0);
        }
        else
        {
          if ( *a1 == 2 )
          {
            v3 = sub_10227CC0(a1[259]);
          }
          else
          {
            v4 = sub_100B1EE0();
            v3 = sub_100B1EF0(v4) + 1;
            if ( v3 > 6 )
              v3 = 4;
          }
          v6 = v3;
          v5 = sub_100B1EE0();
          sub_100B1F30(v5, v6);
          sub_100B1EE0();
          return sub_100B1FD0(0);
        }
      }
      else
      {
        return sub_10189A70(a1);
      }
    }
  }
  return result;
}
