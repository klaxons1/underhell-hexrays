char __thiscall sub_1009EB90(float *this, int a2, float a3, char *a4, char *EndPtr)
{
  char *v6; // esi
  int v7; // eax
  char *v8; // eax
  int v9; // eax
  bool v10; // zf
  char *v12; // [esp-4h] [ebp-110h]
  char Str[256]; // [esp+Ch] [ebp-100h] BYREF

  v12 = a4;
  this[1] = 0.0;
  if ( !sub_1022A6A0(v12, 0) )
  {
    *this = *(float *)&EndPtr;
    goto LABEL_12;
  }
  if ( sub_1022AEE0(0) != 1 )
  {
    sub_1022A940(0, 0.0);
    *this = 0.0;
    LOBYTE(v7) = 1;
    return v7;
  }
  v6 = (char *)sub_1022B4C0(0, (int)Locale);
  v7 = sscanf(v6, "%f", &a3);
  if ( v7 != 1 )
  {
    if ( strchr(v6, 91) )
    {
      sub_102282F0(Str, v6, 0x100u);
      v8 = strchr(Str, 91);
      *v8 = 0;
      *((_DWORD *)this + 2) = strtol(v8 + 1, &EndPtr, 10);
      v6 = Str;
    }
    else
    {
      this[2] = NAN;
    }
    v9 = (*(int (__thiscall **)(int, char *, char *, int))(*(_DWORD *)a2 + 44))(a2, v6, (char *)&a4 + 3, 1);
    v10 = HIBYTE(a4) == 0;
    *((_DWORD *)this + 1) = v9;
    if ( v10 )
    {
      LOBYTE(v7) = 0;
      return v7;
    }
LABEL_12:
    LOBYTE(v7) = 1;
    return v7;
  }
  *this = a3;
  return v7;
}
