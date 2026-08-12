char __thiscall sub_102964A0(int this)
{
  _DWORD *v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  LOBYTE(v2) = sub_1004B510((void *)this, 100000, 1);
  if ( (_BYTE)v2 )
  {
    v2 = (_DWORD *)sub_10043EC0(*(_DWORD **)(this + 4));
    if ( *v2 == 100001 )
      return (char)v2;
    sub_10024230(*(char **)(this + 4), 25);
    LOBYTE(v2) = sub_10295D00((_DWORD *)this);
    if ( (_BYTE)v2 )
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
      v4 = sub_1007DB30((_DWORD *)(v3 + 52), 100002);
      LOBYTE(v2) = (unsigned __int8)sub_10024230(*(char **)(this + 4), v4);
    }
  }
  if ( !*(_BYTE *)(this + 52) )
  {
    LOBYTE(v2) = sub_1004B510((void *)this, 100003, 1);
    if ( !(_BYTE)v2 )
    {
      if ( *(_BYTE *)(this + 36) )
      {
        LOBYTE(v2) = sub_1004B510((void *)this, 100002, 1);
        if ( !(_BYTE)v2 )
        {
          v2 = (_DWORD *)(dword_106DB118 + 56 * *(_DWORD *)(this + 56));
          if ( v2 )
          {
            v2 = (_DWORD *)(v2[12] - 1);
            switch ( (unsigned int)v2 )
            {
              case 0u:
              case 2u:
                sub_10024230(*(char **)(this + 4), 17);
                sub_10024230(*(char **)(this + 4), 18);
                sub_10024230(*(char **)(this + 4), 50);
                sub_10024230(*(char **)(this + 4), 53);
                sub_10024230(*(char **)(this + 4), 56);
                sub_10024230(*(char **)(this + 4), 26);
                sub_10024230(*(char **)(this + 4), 10);
                sub_10024230(*(char **)(this + 4), 65);
                LOBYTE(v2) = (unsigned __int8)sub_10024230(*(char **)(this + 4), 64);
                break;
              case 1u:
                sub_10024230(*(char **)(this + 4), 17);
                sub_10024230(*(char **)(this + 4), 18);
                sub_10024230(*(char **)(this + 4), 50);
                sub_10024230(*(char **)(this + 4), 53);
                sub_10024230(*(char **)(this + 4), 56);
                sub_10024230(*(char **)(this + 4), 26);
                sub_10024230(*(char **)(this + 4), 65);
                sub_10024230(*(char **)(this + 4), 64);
                LOBYTE(v2) = (unsigned __int8)sub_10024230(*(char **)(this + 4), 32);
                break;
              case 3u:
                sub_10024230(*(char **)(this + 4), 17);
                sub_10024230(*(char **)(this + 4), 18);
                LOBYTE(v2) = (unsigned __int8)sub_10024230(*(char **)(this + 4), 50);
                break;
              case 4u:
                sub_10024230(*(char **)(this + 4), 17);
                LOBYTE(v2) = (unsigned __int8)sub_10024230(*(char **)(this + 4), 18);
                break;
              case 5u:
                sub_10024230(*(char **)(this + 4), 50);
                v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
                v6 = sub_1007DB30((_DWORD *)(v5 + 52), 100001);
                sub_10024230(*(char **)(this + 4), v6);
                v7 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
                v8 = sub_1007DB30((_DWORD *)(v7 + 52), 100002);
                LOBYTE(v2) = (unsigned __int8)sub_10024230(*(char **)(this + 4), v8);
                break;
              default:
                return (char)v2;
            }
          }
        }
      }
    }
  }
  return (char)v2;
}
