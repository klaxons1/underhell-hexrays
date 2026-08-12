_DWORD *__thiscall sub_10283050(_DWORD **this)
{
  _DWORD *v2; // esi
  int v3; // ebp
  int v4; // eax
  int *v5; // eax
  int v6; // esi
  int v7; // edx
  int v8; // eax
  char *v9; // ebx
  int v10; // ecx
  int v11; // eax
  _DWORD *v13; // [esp+Ch] [ebp-204h]
  char String[512]; // [esp+10h] [ebp-200h] BYREF

  v2 = (_DWORD *)sub_10229D00(32);
  v3 = 0;
  if ( v2 )
  {
    v4 = (*(int (__thiscall **)(_DWORD *))(*this[113] + 72))(this[113]);
    v13 = sub_10229D20(v2, v4);
  }
  else
  {
    v13 = 0;
  }
  v5 = this[118];
  if ( v5[3] > 0 )
  {
    v6 = 0;
    do
    {
      v7 = *this[118];
      v8 = *v5;
      v9 = (char *)(v7 + v6 + 16);
      if ( *(_DWORD *)(v7 + v6 + 4) )
        v10 = *(_DWORD *)(v8 + v6 + 4);
      else
        v10 = *(_DWORD *)(v8 + v6 + 12);
      (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)v10 + 780))(v10, String, 512);
      if ( (unsigned int)(*(_DWORD *)(*this[118] + v6 + 80) - 4) > 1 )
      {
        sub_1022ABA0(v13, v9, String);
      }
      else
      {
        v11 = atoi(String);
        sub_1022ACA0(v13, v9, v11);
      }
      v5 = this[118];
      ++v3;
      v6 += 84;
    }
    while ( v3 < v5[3] );
  }
  return v13;
}
