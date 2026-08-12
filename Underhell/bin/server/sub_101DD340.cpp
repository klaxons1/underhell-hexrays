char *__thiscall sub_101DD340(int this)
{
  char *result; // eax
  float *v3; // edi
  float *v4; // ebx
  float v5; // ecx
  float v6; // edx
  float v7; // eax
  double v8; // st7
  double v9; // st7
  char v10; // dl
  double v11; // st7
  const char *v12; // eax
  const char *v13; // ecx
  const char *v14; // eax
  const char *v15; // [esp-8h] [ebp-4Ch]
  const char *v16; // [esp-4h] [ebp-48h]
  float v17[11]; // [esp+4h] [ebp-40h] BYREF
  float v18; // [esp+30h] [ebp-14h]
  float v19; // [esp+34h] [ebp-10h]
  float v20; // [esp+38h] [ebp-Ch]
  int v21; // [esp+3Ch] [ebp-8h] BYREF
  int v22; // [esp+40h] [ebp-4h] BYREF

  result = sub_100E38F0((float *)this);
  if ( !*(_DWORD *)(this + 800) )
  {
    sub_101DCBB0((_DWORD *)this, *(char **)(this + 824), *(char **)(this + 828), (char **)&v21, (char **)&v22);
    if ( v21 && v22 && v21 != v22 )
    {
      v3 = (float *)(this + 832);
      v4 = (float *)(this + 844);
      if ( !sub_101DCB30(v22, (float *)(this + 844), (float *)(this + 832)) )
      {
        v5 = *v3;
        v6 = *(float *)(this + 836);
        v7 = *(float *)(this + 840);
        *v3 = *v4;
        v8 = *(float *)(this + 848);
        v18 = v5;
        *(float *)(this + 836) = v8;
        v19 = v6;
        v9 = *(float *)(this + 852);
        v20 = v7;
        *(float *)(this + 840) = v9;
        *v4 = v18;
        *(float *)(this + 848) = v19;
        *(float *)(this + 852) = v20;
      }
      memset(v17, 0, sizeof(v17));
      v17[0] = *(float *)(this + 808);
      v10 = *(_BYTE *)(this + 248);
      v17[2] = *(float *)(this + 816);
      v11 = *(float *)(this + 812);
      BYTE1(v17[10]) = v10 & 1;
      v17[1] = v11;
      v17[3] = *(float *)(this + 820);
      v17[4] = *v3;
      v17[5] = *(float *)(this + 836);
      LOBYTE(v17[10]) = 0;
      v17[6] = *(float *)(this + 840);
      v17[7] = *v4;
      v17[8] = *(float *)(this + 848);
      v17[9] = *(float *)(this + 852);
      result = (char *)(*(int (__thiscall **)(int, int, int, float *))(*(_DWORD *)dword_106BAFF4 + 52))(
                         dword_106BAFF4,
                         v21,
                         v22,
                         v17);
      *(_DWORD *)(this + 800) = result;
    }
    else
    {
      v12 = *(const char **)(this + 828);
      if ( !v12 )
        v12 = String;
      v13 = *(const char **)(this + 824);
      if ( !v13 )
        v13 = String;
      v16 = v12;
      v15 = v13;
      v14 = sub_100D6390((_DWORD *)this);
      DevMsg("ERROR: Can't init spring %s from \"%s\" to \"%s\"\n", v14, v15, v16);
      return (char *)sub_1025FAC0(this);
    }
  }
  return result;
}
