void __stdcall sub_101D50C0(int a1, _DWORD *a2, int a3, int a4)
{
  unsigned int v4; // eax
  int v5; // eax
  _DWORD v6[4]; // [esp+0h] [ebp-20h] BYREF
  const char *v7; // [esp+10h] [ebp-10h]
  int v8; // [esp+14h] [ebp-Ch]
  int v9; // [esp+18h] [ebp-8h]
  int (__stdcall ***v10)(int, int, int); // [esp+1Ch] [ebp-4h]

  if ( dword_106BAFF4 )
  {
    v6[0] = a1;
    v6[2] = *a2;
    v4 = a2[1];
    v6[1] = a3;
    if ( v4 == -1 || off_1061BE18[4 * (v4 & 0xFFF) + 2] != v4 >> 12 )
      v5 = 0;
    else
      v5 = off_1061BE18[4 * (v4 & 0xFFF) + 1];
    v6[3] = v5;
    v7 = (const char *)a2[4];
    if ( !v7 )
      v7 = String;
    v8 = a4;
    v10 = off_1063AFB8;
    v9 = dword_106BAFF4;
    (*(void (__stdcall **)(_DWORD *))(*(_DWORD *)dword_106BAFF4 + 212))(v6);
  }
}
