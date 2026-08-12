void __thiscall sub_1017D110(unsigned int this, unsigned int *a2)
{
  const char *v3; // eax
  char *v4; // eax
  const char *v5; // esi
  char *v6; // ecx
  int v7; // eax
  const char *v8; // eax
  int v9; // eax
  unsigned int *v10; // eax
  unsigned int v11; // ebx

  v3 = *(const char **)(this + 824);
  if ( !v3 )
    v3 = String;
  if ( sub_101679A0((int)v3) < 0 )
  {
    v4 = *(char **)(dword_106B31C8 + 60);
    v5 = *(const char **)(this + 824);
    if ( !v4 )
      v4 = (char *)String;
    v6 = *(char **)(this + 824);
    if ( !v5 )
      v6 = (char *)String;
    sub_10167E00(v6, v4, 1);
    if ( !v5 )
      v5 = String;
    v7 = sub_101679A0((int)v5);
    sub_101678E0(v7, 0);
  }
  v8 = *(const char **)(this + 824);
  if ( !v8 )
    v8 = String;
  v9 = sub_101679A0((int)v8);
  v10 = (unsigned int *)sub_10167A30(v9);
  v11 = *a2;
  a2 = v10;
  sub_1010C270((float *)(this + 800), 5, (__int16 *)&a2);
  sub_1010DA50(
    (_DWORD *)(this + 800),
    *(_DWORD *)(this + 800),
    *(_DWORD *)(this + 804),
    *(_DWORD *)(this + 808),
    *(_DWORD *)(this + 812),
    *(_DWORD *)(this + 816),
    __SPAIR64__(this, v11),
    0.0);
}
