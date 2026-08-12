int __thiscall sub_10129AC0(char *this, int *a2, int a3)
{
  int v4; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  char *v20; // [esp+18h] [ebp+8h]

  v4 = *a2;
  v6 = (*(int (__thiscall **)(int *, _DWORD, int, int))(*a2 + 124))(a2, 0, 12, 1);
  v7 = (*(int (__thiscall **)(int *, const char *, int, int, int, int))(v4 + 336))(
         a2,
         "dev/_rt_Scope",
         1024,
         1024,
         5,
         v6);
  sub_10233410(v7);
  v8 = *a2;
  v9 = (*(int (__thiscall **)(int *, _DWORD, int, int))(*a2 + 124))(a2, 0, 12, 1);
  v10 = (*(int (__thiscall **)(int *, const char *, int, int, int, int))(v8 + 336))(
          a2,
          "dev/_rt_geglowbuff1",
          1024,
          1024,
          5,
          v9);
  sub_10233410(v10);
  v11 = *a2;
  v12 = (*(int (__thiscall **)(int *, _DWORD, int, int))(*a2 + 124))(a2, 0, 12, 1);
  v13 = (*(int (__thiscall **)(int *, const char *, int, int, int, int))(v11 + 336))(
          a2,
          "dev/_rt_geglowbuff2",
          1024,
          1024,
          5,
          v12);
  sub_10233410(v13);
  v14 = *a2;
  v15 = (*(int (__thiscall **)(int *, _DWORD, _DWORD, int))(*a2 + 124))(a2, 0, 0, 1);
  v16 = (*(int (__thiscall **)(int *, const char *, int, int, int, int))(v14 + 336))(a2, "_rt_Camera", 256, 256, 5, v15);
  sub_10233410(v16);
  v17 = 0;
  v20 = this + 28;
  do
  {
    v18 = sub_101299B0(v17, a2, v17 >= 2 ? 512 : 256);
    if ( !v18 )
    {
      Msg("NewTexture is Null\n");
      v18 = 0;
    }
    sub_10233410(v18);
    v20 += 4;
    ++v17;
  }
  while ( v17 < 4 );
  return sub_1000A420(a2, a3, 1024, 1024);
}
