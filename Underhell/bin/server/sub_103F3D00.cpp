int *__thiscall sub_103F3D00(void *this, int a2)
{
  int *result; // eax
  int v4; // eax
  char **v5; // edi
  int v6; // ebx
  int *v7; // ecx
  char *v8; // eax
  const char *v9; // edi
  const char *v10; // eax
  const char *v11; // esi
  int v12; // edi
  int v13; // eax
  int *v14; // [esp+18h] [ebp-4h]

  result = (int *)sub_1025FB50(1);
  v14 = result;
  if ( result )
  {
    sub_10266030((int)result);
    v4 = *(_DWORD *)(a2 + 24);
    v5 = (char **)(a2 + 8);
    v6 = -1;
    if ( v4 == 2 )
    {
      v7 = (int *)(a2 + 8);
    }
    else
    {
      a2 = 0;
      v7 = &a2;
    }
    if ( !*v7 )
      goto LABEL_19;
    if ( v4 == 2 )
    {
      v8 = *v5;
      if ( !*v5 )
        v8 = (char *)String;
    }
    else
    {
      v8 = (char *)sub_1010D460((int)v5);
    }
    v6 = sub_100BDF40((int)this, v8);
    if ( v6 == -1 )
    {
      if ( v5[4] == (char *)2 )
      {
        v9 = *v5;
        if ( v9 )
          v10 = v9;
        else
          v10 = String;
      }
      else
      {
        v10 = sub_1010D460((int)v5);
      }
      v11 = (const char *)*((_DWORD *)this + 65);
      if ( !v11 )
        v11 = String;
      return (int *)Warning("vehicle_viewcontroller %s could not find specified entry animation %s\n", v11, v10);
    }
    else
    {
LABEL_19:
      v12 = *v14;
      v13 = (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 340))(this, 0);
      result = (int *)(*(int (__thiscall **)(int *, int))(v12 + 1408))(v14, v13);
      if ( (_BYTE)result )
      {
        sub_10031B50((int)this, 0.0);
        sub_100BC090((float *)this + 31, (float *)(dword_106B31C8 + 12));
        sub_100C3330((int)this, v6);
        sub_100C1A10((int)this);
        HIBYTE(a2) = 1;
        return (int *)sub_102679E0((_BYTE *)this + 1712, (_BYTE *)&a2 + 3);
      }
    }
  }
  return result;
}
