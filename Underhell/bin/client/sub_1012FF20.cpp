float *__thiscall sub_1012FF20(_DWORD *this, int a2)
{
  int v3; // ecx
  const char *v4; // eax
  const char *v5; // edi
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  float *result; // eax
  int v10; // edi
  float *v11; // ebx
  int v12; // eax
  int v13; // [esp+Ch] [ebp-Ch] BYREF
  int v14; // [esp+10h] [ebp-8h] BYREF
  int v15; // [esp+14h] [ebp-4h] BYREF

  sub_10241C00(a2);
  v3 = this[51];
  if ( v3 && *((_BYTE *)this + 224) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 24))(v3, 1);
    this[51] = 0;
  }
  this[55] = 255;
  this[54] = 255;
  this[53] = 255;
  this[52] = 255;
  v4 = (const char *)sub_1022B4C0("color", (int)"255 255 255 255");
  v5 = v4;
  if ( v4 && *v4 )
  {
    if ( sscanf(v4, "%i %i %i %i", &a2, &v15, &v14, &v13) == 4 )
    {
      v6 = v15;
      v7 = v14;
      this[52] = a2;
      v8 = v13;
      this[53] = v6;
      this[54] = v7;
      this[55] = v8;
    }
    else
    {
      Warning("Couldn't scan four color values from %s\n", v5);
    }
  }
  *((_BYTE *)this + 225) = 0;
  result = (float *)sub_1022B4C0("material", (int)Locale);
  v10 = (int)result;
  if ( result && *(_BYTE *)result && *((_BYTE *)this + 224) )
  {
    v11 = (float *)sub_100DDA40(72);
    if ( v11 )
    {
      v12 = (*(int (__thiscall **)(_DWORD *))*this)(this);
      result = sub_1012FD80(v11, v12, v10);
      this[51] = result;
    }
    else
    {
      result = 0;
      this[51] = 0;
    }
  }
  return result;
}
