int __thiscall sub_1001E8A0(void *this)
{
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // eax

  result = ((int (*)(void))sub_100CF460)();
  if ( result )
  {
    result = sub_10020B70(this);
    if ( !(_BYTE)result )
    {
      v3 = sub_100CF460(this);
      if ( (unsigned __int8)sub_100D1400(v3) )
      {
        v4 = sub_100CF460(this);
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 972))(v4) )
        {
          v5 = sub_100CF460(this);
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 1272))(v5) )
          {
            v6 = sub_100CF460(this);
            v7 = *(_DWORD *)(sub_100CF460(this) + 1200);
            if ( v7 < (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 1216))(v6) / 4 + 1 )
              sub_10023CB0(3);
          }
        }
        else
        {
          sub_10023CB0(4);
        }
      }
      v8 = sub_100CF460(this);
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 976))(v8);
      if ( !(_BYTE)result )
      {
        v9 = sub_100CF460(this);
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 1276))(v9);
        if ( (_BYTE)result )
          return sub_10023CB0(5);
      }
    }
  }
  return result;
}
