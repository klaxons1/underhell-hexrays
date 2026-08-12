int __thiscall sub_103390C0(float *this, int a2)
{
  _DWORD *v3; // ebx
  float *v4; // edi
  float *v5; // eax
  double v6; // st7
  int v7; // edx
  int result; // eax
  int v9; // eax
  _DWORD *v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // edi
  float *v17; // edi
  _DWORD *v18; // eax
  float *v19; // eax
  double v20; // st4
  double v21; // st7
  double v22; // st4
  double v23; // st5
  float v24[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    v3 = (_DWORD *)sub_10261B20();
  else
    v3 = 0;
  switch ( a2 )
  {
    case 1:
    case 9:
      if ( *((_DWORD *)this + 581) == 3 )
        return sub_10397E20(a2);
      if ( !v3 )
        return sub_10397E20(a2);
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v3 + 264))(v3) )
        return sub_10397E20(a2);
      if ( !sub_10335530(this) )
        return sub_10397E20(a2);
      v4 = (float *)sub_10019640(this);
      v5 = (float *)sub_10019640(v3);
      v24[0] = *v5 - *v4;
      v24[1] = v5[1] - v4[1];
      v6 = v5[2] - v4[2];
      v24[2] = v6;
      sub_100D7A40(v24);
      if ( v6 >= 600.0 )
        return sub_10397E20(a2);
      sub_10035270((int)this, v7, 0x100000);
      return 102;
    case 17:
      v12 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
      if ( (unsigned __int8)sub_103960A0(v12) || !sub_103341B0(this) )
        return sub_10397E20(a2);
      goto LABEL_21;
    case 34:
    case 35:
      v9 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
      if ( (unsigned __int8)sub_103960A0(v9) || !sub_103341B0(this) )
        return sub_10397E20(a2);
      if ( !sub_100CF460(v10) )
        goto LABEL_21;
      v11 = sub_100CF460(this);
      if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v11 + 1364))(v11) & 0x2000) == 0
        || !(*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1)
        || !sub_10023D10(this, 10)
        || sub_10023D10(this, 4) )
      {
        goto LABEL_21;
      }
      result = (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 1248))(this, 43);
      break;
    case 43:
      v13 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
      if ( (unsigned __int8)sub_103960A0(v13) )
        return sub_10397E20(a2);
      if ( !sub_100CF460(this) )
        return sub_10397E20(a2);
      v14 = sub_100CF460(this);
      if ( *(char **)(v14 + 92) != "weapon_rpg" && !sub_100D6240((_DWORD *)v14, "weapon_rpg") )
        return sub_10397E20(a2);
      if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this)
        && ((v15 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this), *(char **)(v15 + 92) == "npc_strider")
         || sub_100D6240((_DWORD *)v15, "npc_strider")) )
      {
        result = sub_1004AE20(this, 8, 9) ? 104 : 47;
      }
      else
      {
        if ( *(int *)(dword_106B31C8 + 20) > 1 )
          goto LABEL_34;
        v16 = (_DWORD *)sub_10261B20();
        if ( !v16 )
          goto LABEL_34;
        if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this)
          && (v17 = (float *)sub_10019640(v16),
              v18 = (_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this),
              v19 = (float *)sub_10019640(v18),
              v20 = *v19 - *v17,
              v21 = v20 * v20,
              v22 = v19[1] - v17[1],
              v23 = v19[2] - v17[2],
              v23 * v23 + v22 * v22 + v21 < 69696.0) )
        {
LABEL_21:
          result = 47;
        }
        else
        {
LABEL_34:
          result = 100;
        }
      }
      break;
    default:
      return sub_10397E20(a2);
  }
  return result;
}
