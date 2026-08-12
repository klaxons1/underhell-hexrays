int __cdecl sub_10273EB0(const char *ArgList)
{
  float *v1; // esi
  const char *v2; // eax
  float *v3; // ebx
  double v4; // st7
  int result; // eax
  int v6; // eax
  int v7; // edi
  float v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  char *v12; // eax
  char *v13; // eax
  char v14[2048]; // [esp+3Ch] [ebp-91Ch] BYREF
  char Buffer[256]; // [esp+83Ch] [ebp-11Ch] BYREF
  int v16[3]; // [esp+93Ch] [ebp-1Ch] BYREF
  int v17; // [esp+948h] [ebp-10h]
  float v18; // [esp+94Ch] [ebp-Ch]
  float v19; // [esp+950h] [ebp-8h]
  float v20; // [esp+954h] [ebp-4h]

  v1 = (float *)ArgList;
  if ( (*((_DWORD *)ArgList + 63) & 0x800) != 0 )
    sub_100DAE60((int)ArgList);
  if ( (*((_DWORD *)ArgList + 63) & 0x800) != 0 )
    sub_100DAE60((int)ArgList);
  v2 = (const char *)*((_DWORD *)ArgList + 23);
  v3 = (float *)(ArgList + 704);
  if ( !v2 )
    v2 = String;
  v4 = *((float *)ArgList + 145);
  DevMsg(
    1,
    "%s\n   origin %f %f %f\n   angles %f %f %f\n",
    v2,
    v4,
    *((float *)ArgList + 146),
    *((float *)ArgList + 147),
    *v3,
    *((float *)ArgList + 177),
    *((float *)ArgList + 178));
  if ( sub_101CB470((int)ArgList) )
  {
    sub_101CBD10(v14, 2048, (int)ArgList);
    DevMsg(1, "pose: %s\n", v14);
  }
  result = (*(int (__thiscall **)(const char *))(*(_DWORD *)ArgList + 144))(ArgList);
  if ( (result & 0x40000000) == 0 )
    return result;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 12))(dword_106B31D0);
  if ( !result )
    return result;
  v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *((_DWORD *)ArgList + 6));
  v7 = 12 * v6;
  v18 = *(float *)(12 * v6 + dword_106CFCC8);
  v8 = *(float *)(12 * v6 + dword_106CFCC8 + 8);
  v19 = *(float *)(12 * v6 + dword_106CFCC8 + 4);
  v9 = *(_DWORD *)(dword_106CFCD0 + 4 * v6);
  v20 = v8;
  LOBYTE(ArgList) = v9;
  if ( !v9 )
    ArgList = String;
  if ( !sub_100D7240(v1)
    || (v17 = *(_DWORD *)dword_106B31F0,
        v10 = sub_100D7240(v1),
        (*(int (__thiscall **)(int, int))(v17 + 36))(dword_106B31F0, v10) != 1) )
  {
    if ( sub_101CB470((int)v1) )
    {
      sub_101CBD10(v14, 2048, (int)v1);
      if ( sub_10123E30((char)ArgList, v18, v19, v20, (int)"angleOverride", (int)v14, 0) )
        return sub_1011BBD0((int)v1, 255, 0, 0, 0, 5.0);
    }
    v12 = sub_1001E280(Buffer, "%f %f %f", *v3, v1[177], v1[178]);
    v11 = sub_10123E30((char)ArgList, v18, v19, v20, (int)"angles", (int)v12, 0);
LABEL_20:
    if ( v11 )
      return sub_1011BBD0((int)v1, 255, 0, 0, 0, 5.0);
    goto LABEL_21;
  }
  sub_104255C0(dword_106CFCCC + v7, v1 + 176, v16);
  sub_100D7A40((float *)v16);
  if ( v4 > 0.0001 )
  {
    v11 = sub_10123E90((char)ArgList, v18, v19, v20, (int)v16, 0);
    goto LABEL_20;
  }
LABEL_21:
  v13 = sub_1001E280(Buffer, "%f %f %f", v1[145], v1[146], v1[147]);
  if ( sub_10123E30((char)ArgList, v18, v19, v20, (int)"origin", (int)v13, 0) )
    return sub_1011BBD0((int)v1, 255, 0, 0, 0, 5.0);
  sub_1011BBD0((int)v1, 0, 255, 0, 0, 5.0);
  return sub_10273D90((int)v1);
}
