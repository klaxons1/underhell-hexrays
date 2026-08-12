char __thiscall sub_10286890(int this, char *String1, char *Buffer)
{
  int *v4; // ecx
  int *v5; // ecx
  int *v6; // ecx
  long double v8; // st7
  double v9; // st6
  char *v10; // edi
  char *v11; // edi
  int v12; // edi
  int v13; // esi
  char *v14; // eax
  int v15; // esi
  char *v16; // eax
  char v17[512]; // [esp+8h] [ebp-60Ch] BYREF
  char v18[512]; // [esp+208h] [ebp-40Ch] BYREF
  char ArgList[512]; // [esp+408h] [ebp-20Ch] BYREF
  float v20[3]; // [esp+608h] [ebp-Ch] BYREF

  if ( !_stricmp(String1, "Wind") )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 920);
    }
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 920);
    }
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 920);
    }
    sscanf(Buffer, "%f %f %f", this + 920, this + 924, this + 928);
    return 1;
  }
  else if ( !_stricmp(String1, "WindAngle") )
  {
    Buffer = (char *)atoi(Buffer);
    v8 = (double)(int)Buffer * 0.017453292;
    v9 = (double)*(int *)(this + 916);
    *(_DWORD *)(this + 912) = Buffer;
    v20[0] = cos(v8) * v9;
    v20[1] = v9 * sin(v8);
    v20[2] = 0.0;
    sub_102862E0((float *)(this + 920), v20);
    return 1;
  }
  else if ( !_stricmp(String1, "WindSpeed") )
  {
    *(_DWORD *)(this + 916) = atoi(Buffer);
    sub_10286640((int *)this);
    return 1;
  }
  else if ( !_stricmp(String1, "SmokeMaterial") )
  {
    v10 = Buffer;
    if ( sub_10429530(Buffer, ".vmt") )
    {
      *(_DWORD *)(this + 904) = *sub_10162BE0(&Buffer, v10);
    }
    else
    {
      sub_10429A00(v17, 0x200u, "%s.vmt", (char)v10);
      *(_DWORD *)(this + 904) = *sub_10162BE0(&Buffer, v17);
    }
    v11 = *(char **)(this + 904);
    if ( !v11 )
      v11 = (char *)String;
    Buffer = (char *)sub_100E8220((int)v11, v11);
    sub_10286450((_DWORD *)(this + 908), &Buffer);
    sub_10429B70(v11, ArgList, strlen(v11) + 1);
    v18[strlen(ArgList) + 511] = 0;
    v12 = 1;
    sub_10429A00(v18, 0x200u, "%s%d.vmt", (char)ArgList);
    v13 = *(_DWORD *)(dword_106B31D8 + 4);
    v14 = sub_1025F440("materials/%s", v18);
    if ( (*(unsigned __int8 (__thiscall **)(int, char *, _DWORD))(v13 + 40))(dword_106B31D8 + 4, v14, 0) )
    {
      do
      {
        sub_100E8220(v12++, v18);
        sub_10429A00(v18, 0x200u, "%s%d.vmt", (char)ArgList);
        v15 = *(_DWORD *)(dword_106B31D8 + 4);
        v16 = sub_1025F440("materials/%s", v18);
      }
      while ( (*(unsigned __int8 (__thiscall **)(int, char *, _DWORD))(v15 + 40))(dword_106B31D8 + 4, v16, 0) );
    }
    return 1;
  }
  else
  {
    return sub_100EBE90(this, String1, Buffer);
  }
}
