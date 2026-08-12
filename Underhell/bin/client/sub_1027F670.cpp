int __usercall sub_1027F670@<eax>(_DWORD **a1@<ecx>, int a2@<ebx>)
{
  _DWORD *v3; // edi
  int (__thiscall ***v4)(_DWORD); // eax
  int result; // eax
  int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // ebx
  int v9; // eax
  int (__thiscall ***v10)(_DWORD); // eax
  int v11; // esi
  int v12; // edi
  int v13; // eax

  v3 = a1 + 26;
  if ( sub_10237C80(a1 + 26)
    || (v4 = (int (__thiscall ***)(_DWORD))sub_1027F600(a1), sub_102393F0(v3, v4), (result = sub_10237C80(v3)) != 0) )
  {
    v6 = sub_10237C80(v3);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v6 + 124))(v6, 1, a2);
    a1[18] = a1[28];
    v7 = (_DWORD *)sub_10229D00(32);
    if ( v7 )
      v8 = sub_10229D20(v7, (int)"SetActiveControl");
    else
      v8 = 0;
    v9 = ((int (__thiscall *)(_DWORD **))(*a1)[2])(a1);
    sub_1022ACE0(v8, "PanelPtr", v9);
    v10 = (int (__thiscall ***)(_DWORD))sub_10237C80(v3);
    v11 = dword_1047CA74;
    v12 = *(_DWORD *)dword_1047CA74;
    v13 = (**v10)(v10);
    return (*(int (__thiscall **)(int, int))(v12 + 80))(v11, v13);
  }
  return result;
}
