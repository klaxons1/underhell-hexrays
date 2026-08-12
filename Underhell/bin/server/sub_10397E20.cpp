int __thiscall sub_10397E20(int this, int a2)
{
  int *v3; // edi
  _DWORD *v4; // ebx
  int v5; // eax
  int *v6; // edi
  int v7; // eax
  int result; // eax
  unsigned int *v9; // eax
  unsigned int *v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  double v18; // [esp+Ch] [ebp-8h]
  double v19; // [esp+Ch] [ebp-8h]

  switch ( a2 )
  {
    case 1:
    case 9:
      if ( !sub_100CF460((_DWORD *)this) )
        goto LABEL_42;
      v3 = (int *)sub_100CF460((_DWORD *)this);
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 2388))(this) )
        goto LABEL_42;
      if ( !(*(unsigned __int8 (__thiscall **)(int *))(*v3 + 1272))(v3) )
        goto LABEL_42;
      v18 = (double)v3[300];
      if ( (double)(*(int (__thiscall **)(int *))(*v3 + 1216))(v3) * 0.5 <= v18 || !sub_1004AFF0((_DWORD *)this, 4) )
        goto LABEL_42;
      if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
      {
        v4 = (_DWORD *)sub_10261B20();
        v5 = sub_100CF460(v4);
        v6 = (int *)v5;
        if ( v5 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 1272))(v5) )
          {
            v19 = (double)v6[300];
            if ( (double)(*(int (__thiscall **)(int *))(*v6 + 1216))(v6) * 0.75 > v19 )
            {
              v7 = (*(int (__thiscall **)(int *))(*v6 + 1284))(v6);
              if ( sub_100CF5D0(v4, v7) )
                (*(void (__thiscall **)(int, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2344))(
                  this,
                  "TLK_PLRELOAD",
                  0,
                  0,
                  0,
                  0);
            }
          }
        }
      }
      return 51;
    case 17:
      v14 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      if ( sub_103960A0(v14) )
        goto LABEL_24;
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
        goto LABEL_42;
      v15 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      if ( *(char **)(v15 + 92) != "npc_combinegunship" && !sub_100D6240((_DWORD *)v15, "npc_combinegunship") )
        goto LABEL_42;
      return 35;
    case 28:
      v9 = (unsigned int *)(*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1460))(this, 8);
      v10 = v9;
      if ( v9
        && sub_1026A890(v9)
        && (v11 = sub_1026A890(v10), (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 284))(v11))
        && ((v12 = sub_1026A890(v10), *(char **)(v12 + 92) == "npc_zombine")
         || sub_100D6240((_DWORD *)v12, "npc_zombine")) )
      {
        return 93;
      }
      else
      {
        return 92;
      }
    case 29:
      return 94;
    case 31:
      if ( !sub_10394DD0((void *)this) )
        goto LABEL_42;
      return 95;
    case 33:
      if ( !sub_10023D10((_DWORD *)this, 21) )
        goto LABEL_42;
      return 43;
    case 34:
    case 35:
      v13 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      if ( sub_103960A0(v13) )
        goto LABEL_24;
      goto LABEL_42;
    case 36:
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
        goto LABEL_42;
      v16 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      if ( *(char **)(v16 + 92) == "npc_combinegunship" )
        return 35;
      if ( !sub_100D6240((_DWORD *)v16, "npc_combinegunship") )
        goto LABEL_42;
      result = 35;
      break;
    case 40:
      return 91;
    case 43:
      v17 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
      if ( sub_103960A0(v17) )
      {
LABEL_24:
        result = 27;
      }
      else if ( !sub_100B8D10((float *)(this + 2760)) && sub_1004AE20((_DWORD *)this, 0, 1) )
      {
LABEL_42:
        result = sub_100930C0((_DWORD *)this, a2);
      }
      else
      {
        result = 47;
      }
      break;
    default:
      goto LABEL_42;
  }
  return result;
}
