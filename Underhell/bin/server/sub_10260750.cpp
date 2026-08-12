int __cdecl sub_10260750(char *String1)
{
  int *v1; // esi
  int v2; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // edi
  char *v8; // eax
  unsigned int v9; // [esp+Ch] [ebp-4h]
  char *String1a; // [esp+18h] [ebp+8h]

  v1 = (int *)String1;
  if ( !String1 )
    return 0;
  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  v9 = *(_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)String1 + 8))(String1);
  LOBYTE(String1) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_10700AC8 + 128))(dword_10700AC8, 3, 0);
  v3 = (*(int (__thiscall **)(int *))(*v1 + 208))(v1);
  v4 = v3;
  if ( v3 )
  {
    *(_WORD *)(v3 + 1060) |= 2u;
    (*(void (__thiscall **)(int *))(*v1 + 96))(v1);
    *(_WORD *)(v4 + 1060) &= ~2u;
  }
  else
  {
    (*(void (__thiscall **)(int *))(*v1 + 96))(v1);
  }
  (*(void (__thiscall **)(int, int, char *))(*(_DWORD *)dword_10700AC8 + 128))(dword_10700AC8, 3, String1);
  if ( v9 != -1
    && off_1061BE18[4 * (v9 & 0xFFF) + 2] == v9 >> 12
    && off_1061BE18[4 * (v9 & 0xFFF) + 1]
    && (v1[63] & 1) == 0 )
  {
    if ( v1[24] )
    {
      v5 = sub_101679A0(v1[24]);
      v6 = v5;
      if ( v5 < 0 )
      {
        sub_1017B330((char *)v1[24], *(char **)(dword_106B31C8 + 60), 1);
      }
      else
      {
        if ( sub_10167A00(v5) == 2 )
        {
          sub_100D6A00(v1);
          (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
          return -1;
        }
        String1a = *(char **)(dword_106B31C8 + 60);
        if ( !String1a )
          String1a = (char *)String;
        v8 = (char *)sub_10167A60(v6);
        if ( !sub_10043F40(String1a, v8) )
          sub_100E2610((int)v1);
      }
    }
    sub_1012CAB0(&dword_1069E3E0, (int)v1);
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
    return 0;
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  return -1;
}
