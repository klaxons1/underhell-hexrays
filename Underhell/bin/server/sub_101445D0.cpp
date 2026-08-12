void __thiscall sub_101445D0(int this, int a2)
{
  char **v3; // ecx
  char *v4; // eax
  _BYTE v5[12]; // [esp+Ch] [ebp-18h] BYREF
  int v6[3]; // [esp+18h] [ebp-Ch] BYREF

  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      v4 = (char *)String;
  }
  else
  {
    v4 = (char *)sub_1010D460((int)v3);
  }
  sub_10264F10((int)v6, v4);
  sub_10422220(v6, v5);
  sub_100E0EA0(this, (float *)v6);
  (**(void (__thiscall ***)(int, int))(this + 800))(this + 800, this + 804);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_10422220(this + 704, this + 804);
  (**(void (__thiscall ***)(int, int))(this + 800))(this + 800, this + 804);
  *(float *)(this + 804) = *(float *)(this + 804) * -1.0;
  *(float *)(this + 808) = *(float *)(this + 808) * -1.0;
  *(float *)(this + 812) = -1.0 * *(float *)(this + 812);
  sub_10144140(this);
}
