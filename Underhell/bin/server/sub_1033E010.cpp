int __thiscall sub_1033E010(_DWORD *this)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  double v6; // st7
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  float *v10; // edi
  float *v11; // eax
  double v12; // st4
  double v13; // st6
  double v14; // st4
  double v15; // st5
  double v16; // st6
  int v17; // edi
  int v18; // eax
  int v19; // edi
  int v20; // eax
  double v21; // st7
  int (__thiscall *v22)(_DWORD *); // eax
  int v23; // eax
  float *v24; // edi
  _DWORD *v25; // eax
  float *v26; // eax
  double v27; // st7
  int v28; // eax
  int v29; // [esp-Ch] [ebp-20h]
  int v30; // [esp-8h] [ebp-1Ch]
  int v31; // [esp-4h] [ebp-18h]
  float v32[3]; // [esp+4h] [ebp-10h] BYREF
  float v33; // [esp+10h] [ebp-4h]

  if ( sub_10023D10(this, 77) )
    return 112;
  if ( sub_10023D10(this, 23) )
    return 41;
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
  {
    v3 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 220))(v3) == 9 )
    {
      v4 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
      if ( *(char **)(v4 + 92) == "npc_turret_floor" || sub_100D6240((_DWORD *)v4, "npc_turret_floor") )
      {
        v31 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
        v5 = (*(int (__thiscall **)(_DWORD *))(*this + 1868))(this);
        v6 = sub_100777B0(v5, v31);
        if ( -3.402823466385289e38 != v6
          && *(float *)(dword_106B31C8 + 12) - v6 > 4.0
          && (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 2316))(this, 1)
          && sub_1004AFF0(this, 8) )
        {
          return 44;
        }
        v7 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
        v8 = sub_100D7680(v7);
        if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD *))(*(_DWORD *)v8 + 876))(v8, this) )
        {
          if ( sub_1004AFF0(this, 8) )
            return 111;
        }
      }
    }
  }
  if ( sub_1033D050(this) )
  {
    v9 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
    v10 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 576))(this);
    v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 576))(v9);
    v12 = v11[1] - v10[1];
    v13 = v12 * v12;
    v14 = *v11 - *v10;
    v15 = v13;
    v16 = v11[2] - v10[2];
    if ( v14 * v14 + v15 + v16 * v16 <= 36864.0 )
    {
      if ( sub_10023D10(this, 10) )
      {
        if ( sub_1004AE20(this, 0, 1) )
          return 43;
      }
      else if ( sub_1004AE20(this, 0, 1) )
      {
        return 98;
      }
    }
    if ( sub_10023D10(this, 10) )
    {
      v17 = *this;
      v18 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(v17 + 1768))(this, v18) )
        return 113;
    }
  }
  if ( sub_10023D10(this, 21) )
  {
    if ( sub_1004AE20(this, 0, 1) )
      return 43;
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 2316))(this, 1) || !sub_1004AFF0(this, 8) )
    {
      (*(void (__thiscall **)(_DWORD *))(*this + 2180))(this);
      return 27;
    }
    return 44;
  }
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
  {
    if ( !sub_10023D10(this, 10) )
    {
      v19 = dword_106B31C8;
      v29 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
      v20 = (*(int (__thiscall **)(_DWORD *))(*this + 1868))(this);
      v21 = sub_10077680(v20, v29, 1);
      v22 = *(int (__thiscall **)(_DWORD *))(*this + 368);
      v33 = *(float *)(v19 + 12) - v21;
      v30 = v22(this);
      v23 = (*(int (__thiscall **)(_DWORD *))(*this + 1868))(this);
      v24 = (float *)sub_100775F0(v23, v30);
      v25 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
      v26 = (float *)sub_10019640(v25);
      v32[0] = *v26 - *v24;
      v32[1] = v26[1] - v24[1];
      v27 = v26[2] - v24[2];
      v32[2] = v27;
      sub_100D7A40(v32);
      if ( v33 <= 3.0
        && v27 <= 256.0
        && (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*this + 2316))(this, 0)
        && sub_1004AFF0(this, 8) )
      {
        return 44;
      }
    }
  }
  if ( sub_10023D10(this, 45) && (v28 = sub_10020820(this)) != 0 && *(int *)(v28 + 220) > 0 && sub_1004AFF0(this, 10) )
    return 39;
  else
    return 0;
}
