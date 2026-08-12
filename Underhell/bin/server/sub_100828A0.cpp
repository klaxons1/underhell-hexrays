char __usercall sub_100828A0@<al>(_DWORD *a1@<esi>, float a2, float a3, int a4)
{
  char *v4; // eax
  unsigned __int8 (__thiscall *v5)(_DWORD *, _DWORD *, _DWORD); // edx
  float v7; // [esp+18h] [ebp-154h]
  char Buffer[256]; // [esp+20h] [ebp-14Ch] BYREF
  int v9[3]; // [esp+120h] [ebp-4Ch] BYREF
  _DWORD v10[12]; // [esp+12Ch] [ebp-40h] BYREF
  int v11[3]; // [esp+15Ch] [ebp-10h] BYREF
  float v12; // [esp+168h] [ebp-4h]
  int v13; // [esp+17Ch] [ebp+10h]

  v13 = a4 - 1;
  if ( v13 < 0 )
    return 0;
  while ( 1 )
  {
    v12 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            LODWORD(a2),
            LODWORD(a3));
    v7 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.0,
           359.98999);
    sub_102650F0((int)v9, v7);
    if ( *(_DWORD *)(dword_106934A4 + 48) )
    {
      v4 = sub_1001E280(Buffer, "[Nav] %s", "Set vector goal\n");
      sub_10029660((_DWORD *)a1[1], (int)v4);
    }
    if ( sub_1007EF40(a1, (float *)v11, (float *)v9, v12, a2, 0.0) )
    {
      *(float *)&v10[8] = -1.0;
      *(float *)&v10[9] = -1.0;
      v10[1] = v11[0];
      v10[3] = v11[2];
      v5 = *(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(*a1 + 20);
      v10[11] = dword_10608878;
      v10[2] = v11[1];
      v10[0] = 4;
      memset(&v10[4], 255, 16);
      v10[10] = 0;
      if ( v5(a1, v10, 0) )
        break;
    }
    if ( --v13 < 0 )
      return 0;
  }
  return 1;
}
