int __cdecl sub_100D2820(int a1)
{
  int result; // eax
  int v2; // esi
  char *v3; // eax
  int v4; // [esp+14h] [ebp-4h]

  sub_10229170(a1);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 104))(dword_1041315C);
  if ( (_BYTE)result )
  {
    v2 = *(_DWORD *)dword_1041315C;
    v3 = sub_10076640("fov %f\n", *(float *)(v4 + 44));
    return (*(int (__thiscall **)(int, char *, int))(v2 + 24))(dword_1041315C, v3, 1);
  }
  return result;
}
