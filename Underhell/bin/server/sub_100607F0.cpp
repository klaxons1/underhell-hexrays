int __thiscall sub_100607F0(int this, int a2)
{
  int v3; // eax
  int v4; // eax
  char *v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  int v14; // eax
  int v15; // [esp-Ch] [ebp-10h]

  v3 = ((int (*)(void))sub_10078330)();
  v4 = sub_1007DD80(v3);
  if ( *(_DWORD *)(this + 176) != -1 && v4 == *(_DWORD *)(this + 172) )
    return *(_DWORD *)(this + 176);
  *(_DWORD *)(this + 172) = v4;
  if ( sub_100BDFA0(v4) && sub_1042ACB0("interior", 0) )
  {
    v6 = (char *)sub_1042B460(0, (int)String);
    v7 = sub_100BDEE0(v6);
    if ( v7 == -1 )
    {
      v7 = sub_10008FB0((int)v6);
      if ( v7 == -1 )
      {
LABEL_11:
        *(_DWORD *)(this + 176) = sub_100BDF40(v6);
        goto LABEL_12;
      }
      v15 = a2;
    }
    else
    {
      v15 = a2;
    }
    v8 = sub_10039AE0(*(_DWORD **)(this + 4), v7, 0);
    v9 = sub_100BDD50(v8, v15);
    *(_DWORD *)(this + 176) = v9;
    if ( v9 == -1 )
      goto LABEL_11;
  }
LABEL_12:
  if ( *(_DWORD *)(this + 176) == -1 )
  {
    v10 = sub_10078330(this);
    v11 = sub_1007DE30(v10);
    if ( v11 == 7 || (v12 = v11 == 12, v13 = 1, v12) )
      v13 = 76;
    v14 = sub_10039AE0(*(_DWORD **)(this + 4), v13, 0);
    *(_DWORD *)(this + 176) = sub_100BDD50(v14, a2);
  }
  return *(_DWORD *)(this + 176);
}
