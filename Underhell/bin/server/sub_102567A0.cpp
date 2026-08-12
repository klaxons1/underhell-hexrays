_DWORD *__thiscall sub_102567A0(int this, int *a2)
{
  int v3; // edi
  char *v4; // ecx
  int v5; // eax
  int v6; // eax
  _DWORD *result; // eax
  double v8; // st7
  int v9; // eax
  _DWORD *v10; // ebx
  const char *v11; // eax
  float v12; // [esp+10h] [ebp-1Ch]
  int v13; // [esp+20h] [ebp-Ch]
  int v14; // [esp+24h] [ebp-8h]
  char *String2; // [esp+28h] [ebp-4h]

  v3 = 0;
LABEL_2:
  v14 = a2[1];
  v13 = *a2;
  if ( *(_DWORD *)(this + 804) )
  {
    v4 = *(char **)(this + 804);
    String2 = v4;
    goto LABEL_6;
  }
  String2 = (char *)String;
  while ( 1 )
  {
    v4 = String2;
LABEL_6:
    v5 = *(_DWORD *)(this + 800);
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        result = (_DWORD *)(v6 - 1);
        if ( result )
          goto LABEL_16;
        v8 = 0.0 == *(float *)(this + 812) ? 3.4028235e38 : *(float *)(this + 812);
        v12 = v8;
        result = (_DWORD *)sub_1012BFF0(&dword_1069E3E0, v3, (float *)(this + 716), v12);
      }
      else
      {
        result = sub_1012C480(v3, v4, (float *)(this + 716), *(float *)(this + 812), 0);
      }
    }
    else
    {
      result = sub_1012C1F0(v3, v4, (float *)(this + 716), *(float *)(this + 812), 0, v13, v14, 0);
    }
    v3 = (int)result;
LABEL_16:
    if ( !v3 )
      return result;
    v9 = sub_100D7680(v3);
    v10 = (_DWORD *)v9;
    if ( v9 )
    {
      if ( *(_DWORD *)(this + 800) != 2 )
        goto LABEL_23;
      v11 = *(const char **)(v9 + 2808);
      if ( !v11 )
        v11 = String;
      if ( v11 == String2 || !_stricmp(v11, String2) )
      {
LABEL_23:
        v3 = (int)v10;
        sub_100211D0(v10, *(_DWORD *)(this + 808), *(_BYTE *)(this + 816));
        goto LABEL_2;
      }
    }
  }
}
