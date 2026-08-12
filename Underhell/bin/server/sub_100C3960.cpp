int __thiscall sub_100C3960(_DWORD *this, int a2)
{
  int v2; // edi
  int v3; // eax
  int v5; // eax
  int result; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int *v17; // ebx
  int v18; // edi
  int v19; // eax
  const char *v20; // eax
  const char *v21; // eax
  const char *v22; // esi
  float v23; // [esp+8h] [ebp-A0h]
  char String1[128]; // [esp+18h] [ebp-90h] BYREF
  float v25; // [esp+98h] [ebp-10h] BYREF
  float v26; // [esp+9Ch] [ebp-Ch] BYREF
  double v27; // [esp+A0h] [ebp-8h] BYREF

  v2 = a2;
  v3 = *(_DWORD *)(a2 + 16);
  if ( (v3 & 0x400) == 0 || (v3 & 1) == 0 )
    goto LABEL_14;
  v5 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 16 )
    return sub_1023C380(*(_DWORD *)(a2 + 4), 0.0, 0);
  if ( v5 == 33 )
    return (*(int (__thiscall **)(_DWORD *, float *))(*this + 748))(this, &flt_106F1CA8);
  if ( v5 == 31 )
  {
    if ( sscanf(*(const char *const *)(a2 + 4), "%s %f %f", String1, &v26, &v25) == 3 )
    {
      a2 = -1;
      v7 = sub_102833C0();
      sub_10019680(&a2, v7);
      result = sub_1026A890(&a2);
      if ( result )
      {
        HIDWORD(v27) = 4;
        v8 = sub_1026A890(&a2);
        sub_100C1CA0((float *)(v8 + 816), (int *)&v27 + 1);
        v27 = 1.5;
        v9 = sub_1026A890(&a2);
        sub_100C1D00((float *)(v9 + 820), &v27);
        v10 = sub_1026A890(&a2);
        sub_100C34C0((float *)(v10 + 800), 0.5, 0.46000001, 0.44);
        v11 = sub_1026A890(&a2);
        sub_100C1D60((float *)(v11 + 836), &v25);
        *((float *)&v27 + 1) = *(float *)(sub_1026A890(&a2) + 836) * 8.0;
        sub_10115580((char *)&v27 + 4);
        HIDWORD(v27) = 3;
        v12 = sub_1026A890(&a2);
        sub_100C1DB0((float *)(v12 + 844), (int *)&v27 + 1);
        HIDWORD(v27) = 4;
        v13 = sub_1026A890(&a2);
        sub_100C1E10((float *)(v13 + 828), (int *)&v27 + 1);
        HIDWORD(v27) = 10;
        v14 = sub_1026A890(&a2);
        sub_100C1E70((float *)(v14 + 832), (int *)&v27 + 1);
        *((float *)&v27 + 1) = 0.5;
        v15 = sub_1026A890(&a2);
        sub_100C1ED0((float *)(v15 + 812), (float *)&v27 + 1);
        v23 = v26;
        sub_1026A890(&a2);
        sub_100F5880(v23);
        *((float *)&v27 + 1) = *(float *)(dword_106B31C8 + 12) + v26;
        v16 = sub_1026A890(&a2);
        sub_100C1F20((float *)(v16 + 824), (float *)&v27 + 1);
        v17 = (int *)sub_1026A890(&a2);
        v18 = *v17;
        v19 = sub_100BEF30((int)this, String1);
        (*(void (__thiscall **)(int *, _DWORD *, int))(v18 + 140))(v17, this, v19);
        sub_1026A890(&a2);
        return sub_100E10C0(&flt_106F1CA8);
      }
    }
    else
    {
      v20 = *(const char **)(*(int (__thiscall **)(_DWORD *, int *))(*this + 28))(this, &a2);
      if ( !v20 )
        v20 = String;
      return DevWarning(1, "%s unable to parse AE_SV_DUSTTRAIL event \"%s\"\n", v20, *(const char **)(v2 + 4));
    }
  }
  else
  {
LABEL_14:
    v21 = (const char *)sub_1013BD20(*(_DWORD *)a2);
    v22 = (const char *)this[23];
    if ( v21 )
    {
      if ( !v22 )
        v22 = String;
      return DevWarning(1, "Unhandled animation event %s for %s\n", v21, v22);
    }
    else
    {
      if ( !v22 )
        v22 = String;
      return DevWarning(1, "Unhandled animation event %d for %s\n", *(_DWORD *)v2, v22);
    }
  }
  return result;
}
