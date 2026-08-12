int __stdcall sub_101EE050(int a1)
{
  int *v1; // esi
  const char **v2; // eax
  int result; // eax
  int v4; // esi
  double v5; // st7
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  float v11; // [esp+8h] [ebp-14h]
  const char *v12; // [esp+18h] [ebp-4h]

  v1 = (int *)a1;
  v2 = (const char **)(a1 + 8);
  if ( *(_DWORD *)(a1 + 24) != 2 )
  {
    a1 = 0;
    v2 = (const char **)&a1;
  }
  v12 = *v2;
  if ( !*v2 )
    v12 = String;
  if ( *v1 && (result = (*(int (__thiscall **)(int))(*(_DWORD *)*v1 + 320))(*v1), (_BYTE)result) )
  {
    v4 = *v1;
  }
  else
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 196))(dword_106B3CDC);
    if ( (_BYTE)result )
      return result;
    result = sub_10261B20();
    v4 = result;
  }
  if ( v4 )
  {
    if ( !strcmp("inputstrings", "flare") && *(_BYTE *)(v4 + 2122) )
    {
      v5 = *(float *)(v4 + 2128);
      sub_101E9580((void *)v4, COERCE_INT(*(float *)(v4 + 2128)), 0, 0, 0);
      v6 = sub_101E7EA0((_DWORD *)v4, 1);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 836))(v6, 2);
      HIBYTE(a1) = 0;
      sub_100F7B70((_BYTE *)(v4 + 2122), (_BYTE *)&a1 + 3);
      v7 = sub_101E7EA0((_DWORD *)v4, 1);
      sub_100D18C0(v7);
      v11 = v5 * 0.2 + *(float *)(dword_106B31C8 + 12);
      sub_100EC4A0((int *)v4, v11, (int)"FlashLightContext");
    }
    if ( !sub_100CF460((_DWORD *)v4)
      || (v8 = sub_100CF460((_DWORD *)v4),
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 1004))(v8, 0),
          sub_100CF460((_DWORD *)v4))
      && (v9 = sub_100CF460((_DWORD *)v4),
          !strcmp((const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 1256))(v9), v12)) )
    {
      sub_100CE740((_DWORD *)v4, v12);
      return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 1248))(v4);
    }
    else
    {
      v10 = sub_100CF460((_DWORD *)v4);
      sub_100CE740((_DWORD *)v4, v12);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v4 + 964))(v4, v10, 0);
      return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 1248))(v4);
    }
  }
  return result;
}
