char *__cdecl sub_10403F00(float *a1, float *a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  char *v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  float v11[3]; // [esp+Ch] [ebp-18h] BYREF
  float v12[3]; // [esp+18h] [ebp-Ch] BYREF

  v3 = a3;
  if ( (a3 || (v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
    && (v4 = *(_DWORD *)(v3 + 12)) != 0 )
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 20))(v4);
  }
  else
  {
    v5 = 0;
  }
  v6 = sub_100E3960((int)"rpg_missile", a1, a2, v5);
  v7 = a3;
  if ( (a3 || (v7 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
    && (v8 = *(_DWORD *)(v7 + 12)) != 0 )
  {
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 20))(v8);
  }
  else
  {
    v9 = 0;
  }
  (*(void (__thiscall **)(char *, int))(*(_DWORD *)v6 + 76))(v6, v9);
  (*(void (__thiscall **)(char *))(*(_DWORD *)v6 + 96))(v6);
  sub_100EAB80(v6, 16);
  sub_10422220(a2, v12);
  v11[0] = v12[0] * 300.0;
  v11[1] = v12[1] * 300.0;
  v11[2] = 300.0 * v12[2] + 128.0;
  sub_100DD660((int)v6, v11);
  return v6;
}
