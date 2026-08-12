_DWORD *__usercall sub_101DD0B0@<eax>(float *a1@<esi>, char a2, char a3)
{
  char v3; // bl
  int v4; // eax
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // edi
  const char *v8; // eax

  v3 = a2;
  v4 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 24))(a1);
  v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 4))(dword_106B31F0, v4);
  if ( v5 && (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 36))(dword_106B31F0, v5) == 1 )
    v6 = sub_101811E0("simple_physics_brush", -1);
  else
    v6 = sub_101811E0("simple_physics_prop", -1);
  v7 = (_DWORD *)v6;
  v8 = *(const char **)(*(int (__thiscall **)(float *, char *))(*(_DWORD *)a1 + 28))(a1, &a2);
  if ( !v8 )
    v8 = String;
  (*(void (__thiscall **)(_DWORD *, const char *, const char *))(*v7 + 128))(v7, "model", v8);
  if ( ((_DWORD)a1[63] & 0x800) != 0 )
    sub_100DAE60((int)a1);
  sub_100E0D20((int)v7, a1 + 145);
  if ( ((_DWORD)a1[63] & 0x800) != 0 )
    sub_100DAE60((int)a1);
  sub_100E0EA0((int)v7, a1 + 176);
  (*(void (__thiscall **)(_DWORD *))(*v7 + 96))(v7);
  if ( !sub_101DD020(a1, v7, v3 == 0) )
    sub_100E9550(v7, 6, 0, v3, 0);
  if ( a3 )
    sub_100EBE30((int)v7, 1);
  return v7;
}
