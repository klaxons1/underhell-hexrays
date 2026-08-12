int __cdecl sub_102595B0(_DWORD *a1, char *String2)
{
  float *v3; // ebx
  _DWORD *v4; // esi
  int savedregs; // [esp+4h] [ebp+0h] BYREF
  int v6; // [esp+Ch] [ebp+8h]

  if ( ((*(int (__thiscall **)(_DWORD *))(*a1 + 144))(a1) & 4) != 0 )
    return 2;
  v3 = (float *)sub_100E99F0(a1);
  v6 = 1;
  v4 = sub_1012BF20(&dword_1069E3E0, 0, String2, 0, 0, 0, 0);
  if ( !v4 )
    return v6;
  while ( 1 )
  {
    if ( (char *)v4[23] != "trigger_transition" && !sub_100D6240(v4, "trigger_transition") )
      goto LABEL_8;
    if ( sub_102592A0(v3, (int)&savedregs, (int)String2, (int)v4, v4) )
      return 2;
    v6 = 0;
LABEL_8:
    v4 = sub_1012BF20(&dword_1069E3E0, (int)v4, String2, 0, 0, 0, 0);
    if ( !v4 )
      return v6;
  }
}
