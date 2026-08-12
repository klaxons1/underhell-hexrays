char __thiscall sub_10093A00(int this, int a2, char a3)
{
  char *v3; // eax
  char result; // al
  int v6; // ebx
  int v7; // ecx
  int v8; // ebx
  float *v9; // edi
  float *v10; // eax
  double v11; // st4
  double v12; // st7
  double v13; // st4
  double v14; // st5
  bool v15; // cc
  const char *v16; // eax
  float *v17; // [esp+4h] [ebp-4h]
  float v18; // [esp+10h] [ebp+8h]

  v3 = dword_10693788;
  if ( !dword_10693788 )
  {
    sub_101811E0("ai_ally_speech_manager", -1);
    v3 = dword_10693788;
    if ( dword_10693788 )
    {
      sub_10260750(dword_10693788);
      v3 = dword_10693788;
    }
  }
  v17 = (float *)v3;
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 264))(this) || (*(_BYTE *)(this + 248) & 2) != 0 )
    return 0;
  v6 = *(_DWORD *)(this + 2324);
  if ( v6 == 4 && !*(_BYTE *)(this + 4413)
    || (*(_DWORD *)(this + 252) & 0x100000) != 0
    || *(_BYTE *)(this + 2680) && !*(_BYTE *)(this + 4413) )
  {
    return 0;
  }
  if ( !a3 && (!sub_100927F0(v17, a2) || !sub_10092730((float *)this, a2))
    || !a2
    && (v6 != 1 && v6 != 2 || sub_10093940((_DWORD *)this) && *(float *)(sub_10093940((_DWORD *)this) + 808) < 0.001)
    || !sub_10262560(*(_DWORD *)(this + 24)) )
  {
    return 0;
  }
  if ( a2 == 2 )
    goto LABEL_31;
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 1656))(this);
  if ( !(unsigned __int8)sub_100AC6E0(this) )
    return 0;
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1656))(this);
  if ( !a3 )
  {
    if ( (unsigned __int8)sub_100AC5B0(v7) )
      goto LABEL_28;
    return 0;
  }
  result = sub_100AC5F0(v7);
  if ( result )
  {
LABEL_28:
    if ( *(int *)(dword_106B31C8 + 20) <= 1 )
    {
      v8 = sub_10261B20();
      if ( v8 )
      {
        v18 = *(float *)(dword_106937FC + 44);
        v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
        v10 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 576))(v8);
        v11 = *v10 - *v9;
        v12 = v11 * v11;
        v13 = v10[1] - v9[1];
        v14 = v10[2] - v9[2];
        if ( v18 * v18 < v14 * v14 + v13 * v13 + v12 )
          return 0;
      }
    }
LABEL_31:
    if ( a3 )
    {
      if ( (unsigned __int8)sub_10227430(this, 0) )
      {
        v15 = *(_DWORD *)(dword_10694194 + 48) <= 0;
        goto LABEL_36;
      }
    }
    else if ( (unsigned __int8)sub_102273F0(this, 1) )
    {
      v15 = *(_DWORD *)(dword_10694194 + 48) <= 0;
LABEL_36:
      if ( !v15 )
      {
        v16 = (const char *)sub_100D6390(this);
        DevMsg("%s not allowed to speak because they are in a scripted scene\n", v16);
      }
      return 0;
    }
    return 1;
  }
  return result;
}
