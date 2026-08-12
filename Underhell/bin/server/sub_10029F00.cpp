int __thiscall sub_10029F00(float *this, int a2)
{
  float *v3; // eax
  char *v4; // eax
  double ArgList_4; // [esp+4h] [ebp-14h]
  double ArgList_4a; // [esp+4h] [ebp-14h]
  char *v8; // [esp+8h] [ebp-10h]
  float v9; // [esp+Ch] [ebp-Ch]

  sub_100BCD70(a2);
  if ( 0.0 == this[684] )
  {
    sub_10067DE0("timesinceseenplayer", "-1", 1.0);
  }
  else
  {
    ArgList_4 = *(float *)(dword_106B31C8 + 12) - this[684];
    v8 = (char *)sub_1025F440("%f", SLOBYTE(ArgList_4));
    sub_10067DE0("timesinceseenplayer", v8, 1.0);
  }
  v9 = 1.0;
  if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) )
    return sub_10067DE0("distancetoenemy", "-1", v9);
  v3 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  sub_100271C0(this, v3);
  ArgList_4a = 1.0;
  v4 = (char *)sub_1025F440("%f", SLOBYTE(ArgList_4a));
  return sub_10067DE0("distancetoenemy", v4, v9);
}
