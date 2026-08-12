char *__thiscall sub_101E73F0(float *this, int a2)
{
  char *v3; // eax
  double v4; // st7
  char *v5; // eax
  int v6; // eax
  char *v7; // eax
  char *v8; // eax
  char *v9; // eax
  double ArgList; // [esp+0h] [ebp-18h]
  double ArgLista; // [esp+0h] [ebp-18h]
  float v13; // [esp+8h] [ebp-10h]
  float v14; // [esp+14h] [ebp-4h]

  v3 = (char *)sub_1025F440("%i", *((_DWORD *)this + 55));
  sub_10067DE0(a2, "playerhealth", v3, 1.0);
  if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 448))(this) <= 0 )
  {
    v4 = (float)0.0;
  }
  else
  {
    v14 = (float)*((int *)this + 55);
    v4 = v14 / (double)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 448))(this);
  }
  ArgList = v4;
  v5 = (char *)sub_1025F440("%.3f", SLOBYTE(ArgList));
  sub_10067DE0(a2, "playerhealthfrac", v5, 1.0);
  v6 = sub_100CF460(this);
  if ( v6 )
  {
    v7 = *(char **)(v6 + 92);
    if ( !v7 )
      v7 = (char *)String;
    sub_10067DE0(a2, "playerweapon", v7, 1.0);
  }
  else
  {
    sub_10067DE0(a2, "playerweapon", "none", 1.0);
  }
  v8 = (char *)sub_10008F90(*((_DWORD *)this + 841));
  sub_10067DE0(a2, "playeractivity", v8, 1.0);
  if ( ((_DWORD)this[63] & 0x1000) != 0 )
    sub_100DAFD0((int)this);
  v13 = this[120] * this[120] + this[119] * this[119] + this[121] * this[121];
  ArgLista = off_10689708(v13);
  v9 = (char *)sub_1025F440("%.3f", SLOBYTE(ArgLista));
  sub_10067DE0(a2, "playerspeed", v9, 1.0);
  return sub_100E12F0(this, a2, (char)"player");
}
