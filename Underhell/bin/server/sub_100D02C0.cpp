void __thiscall sub_100D02C0(char **this, int a2, int a3, int a4, int a5)
{
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  float v12; // [esp+28h] [ebp-Ch] BYREF
  float v13; // [esp+2Ch] [ebp-8h]
  float v14; // [esp+30h] [ebp-4h]
  _DWORD *v15; // [esp+3Ch] [ebp+8h]

  if ( a2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
  {
    sub_1010DD80(a2, a3, 0.0);
    if ( this[23] == "weapon_frag" || (unsigned __int8)sub_100D6240("weapon_frag") )
    {
      v7 = sub_100CF610((_DWORD *)a2, "grenade");
      if ( v7 < 4 )
      {
        sub_100C7A30((void *)a2, 1, "grenade", 0);
        if ( v7 <= 0 )
          sub_102600F0(a2, "Valve_Hint_Frag");
        sub_1025FAC0(this);
      }
    }
    else if ( *(_BYTE *)(a2 + 1670)
           || !(*(unsigned __int8 (__thiscall **)(int, char **))(*(_DWORD *)a2 + 948))(a2, this)
           || sub_100D1940(this)
           || !(*(unsigned __int8 (__thiscall **)(int, int, char **))(*(_DWORD *)dword_106B3CDC + 320))(
                 dword_106B3CDC,
                 a2,
                 this) )
    {
      sub_1010DD80(a2, a3, 0.0);
      (*(void (__thiscall **)(int, char **, int))(*(_DWORD *)a2 + 1472))(a2, this, 1);
    }
    else
    {
      if ( *(_DWORD *)(dword_106BB9AC + 48) )
      {
        v8 = sub_100D0CC0(this);
        if ( sub_100CF740((_DWORD *)a2, *(_DWORD *)(v8 + 440)) )
        {
          v9 = 0;
          while ( 1 )
          {
            if ( sub_10001CE0((_DWORD *)a2, v9) )
            {
              v10 = sub_10001CE0((_DWORD *)a2, v9);
              v15 = (_DWORD *)(sub_100D0CC0(v10) + 440);
              if ( *v15 == *(_DWORD *)(sub_100D0CC0(this) + 440) )
                break;
            }
            if ( ++v9 >= 48 )
              goto LABEL_21;
          }
          sub_100F5A30(&v12, 0, 0);
          v12 = v12 * 300.0;
          v13 = v13 * 300.0;
          v14 = 300.0 * v14;
          v11 = sub_10001CE0((_DWORD *)a2, v9);
          (*(void (__thiscall **)(int, int, _DWORD, float *))(*(_DWORD *)a2 + 960))(a2, v11, 0, &v12);
        }
      }
LABEL_21:
      sub_1010DD80(a2, a3, 0.0);
      (*((void (__thiscall **)(char **))*this + 338))(this);
      sub_101129A0(*((unsigned __int16 *)this + 178) | 4);
      sub_100EAB80(this, 32);
      (*(void (__thiscall **)(int, char **))(*(_DWORD *)a2 + 952))(a2, this);
      (*(void (__thiscall **)(int, char **, _DWORD))(*(_DWORD *)a2 + 964))(a2, this, 0);
    }
  }
}
