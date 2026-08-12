char *__thiscall sub_100E2DE0(_DWORD *this, int a2)
{
  _DWORD *v2; // ebx
  char v3; // al
  char *v4; // eax
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  char *v8; // eax
  double v9; // st7
  char *v10; // eax
  int v11; // esi
  void *v12; // ebx
  char v13; // al
  char *v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  char *result; // eax
  double ArgList; // [esp+0h] [ebp-20h]
  float v21; // [esp+1Ch] [ebp-4h]

  v2 = this;
  v3 = RandomInt(0, 100);
  v4 = (char *)sub_1025F440("%d", v3);
  sub_10067DE0(a2, "randomnum", v4, 1.0);
  v5 = *(char **)(dword_106B31C8 + 60);
  if ( !v5 )
    v5 = (char *)String;
  sub_10067DE0(a2, (void *)"map", v5, 1.0);
  v6 = (char *)v2[23];
  if ( !v6 )
    v6 = (char *)String;
  sub_10067DE0(a2, (void *)"classname", v6, 1.0);
  v7 = (char *)v2[65];
  if ( !v7 )
    v7 = (char *)String;
  sub_10067DE0(a2, (void *)"name", v7, 1.0);
  v8 = (char *)sub_1025F440("%i", v2[55]);
  sub_10067DE0(a2, (void *)"health", v8, 1.0);
  if ( (*(int (__thiscall **)(_DWORD *))(*v2 + 448))(v2) <= 0 )
  {
    v9 = (float)0.0;
  }
  else
  {
    v21 = (float)(int)v2[55];
    v9 = v21 / (double)(*(int (__thiscall **)(_DWORD *))(*v2 + 448))(v2);
  }
  ArgList = v9;
  v10 = (char *)sub_1025F440("%.3f", SLOBYTE(ArgList));
  sub_10067DE0(a2, "healthfrac", v10, 1.0);
  v11 = 0;
  if ( sub_10167720() > 0 )
  {
    do
    {
      v12 = (void *)sub_10167AA0(v11);
      v13 = sub_10167A00(v11);
      v14 = (char *)sub_1025F440("%i", v13);
      sub_10067DE0(a2, v12, v14, 1.0);
      ++v11;
    }
    while ( v11 < sub_10167720() );
    v2 = this;
  }
  sub_100E12F0(v2, a2, (char)String);
  if ( *(_DWORD *)(dword_10698344 + 48) )
    sub_10067DE0(a2, "episodic", "1", 1.0);
  v15 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
  if ( (v15 || (v15 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
    && (v16 = *(_DWORD *)(v15 + 12)) != 0 )
  {
    v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v16 + 20))(v16);
  }
  else
  {
    v17 = 0;
  }
  result = (char *)__RTDynamicCast(
                     v17,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                     (int)&CWorld `RTTI Type Descriptor',
                     0);
  if ( result )
    return sub_100E12F0(result, a2, (char)"world");
  return result;
}
