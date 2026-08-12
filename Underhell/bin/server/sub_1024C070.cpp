int __thiscall sub_1024C070(int this)
{
  char *v2; // eax
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // eax
  float v7; // [esp+8h] [ebp-Ch]
  float v8; // [esp+8h] [ebp-Ch]

  sub_10154AF0((_DWORD *)this, 0);
  v2 = *(char **)(this + 800);
  if ( !v2 || (v3 = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0)) == 0 )
    v3 = (_DWORD *)this;
  if ( (v3[63] & 0x800) != 0 )
    sub_100DAE60((int)v3);
  sub_10154CA0((int)(v3 + 145));
  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v3[6]);
  sub_10154C10(v4);
  sub_10154C70(*(float *)(this + 820));
  sub_10154BB0(*(unsigned __int8 *)(this + 808));
  sub_10154BB0(*(unsigned __int8 *)(this + 809));
  sub_10154BB0(*(unsigned __int8 *)(this + 810));
  sub_10154BB0(*(unsigned __int8 *)(this + 811));
  v5 = RandomInt(*(_DWORD *)(this + 812), *(_DWORD *)(this + 816));
  sub_10154BE0(v5);
  v7 = RandomFloat(*(float *)(this + 824), *(float *)(this + 828));
  sub_10154C70(v7);
  v8 = RandomFloat(*(float *)(this + 832), *(float *)(this + 836));
  sub_10154C70(v8);
  return sub_10154B90();
}
