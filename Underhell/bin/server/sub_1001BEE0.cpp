char __thiscall sub_1001BEE0(float *this, int a2, int a3, int a4, int a5, int a6)
{
  const char *v7; // eax
  double v8; // st7
  bool v9; // c0
  bool v10; // c3
  double v11; // st7
  const char *v12; // eax
  const char *v13; // eax
  const char *v14; // eax
  const char *v15; // eax
  const char *v16; // eax
  const char *v17; // eax
  const char *v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  const char *v22; // eax
  const char *v23; // eax
  char result; // al
  const char *v25; // [esp+Ch] [ebp-10h]
  float v26; // [esp+28h] [ebp+Ch]
  float v27; // [esp+28h] [ebp+Ch]
  int v28; // [esp+30h] [ebp+14h]
  float v29; // [esp+34h] [ebp+18h]
  int v30; // [esp+34h] [ebp+18h]
  float v31; // [esp+34h] [ebp+18h]

  if ( sub_10418360(*(_DWORD *)a2) != 16 )
    return sub_100F16E0(a2, a3, a4, a5, a6);
  v7 = (const char *)sub_104183D0(a4);
  if ( !_stricmp(v7, "AI_BLINK") )
  {
    *(_DWORD *)(a2 + 56) = 1;
    sub_1001BE90((int)this);
    v29 = sub_10418520(a4);
    v26 = v29 - sub_1041CA40(a3);
    v8 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           1.5,
           4.5);
    v9 = v26 < v8;
    v10 = v26 == v8;
    v11 = v26;
    if ( v9 || v10 )
      v11 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              1.5,
              4.5);
    result = 1;
    this[935] = v11 + *(float *)(dword_106B31C8 + 12);
  }
  else
  {
    v12 = (const char *)sub_104183D0(a4);
    if ( !_stricmp(v12, "AI_HOLSTER") )
    {
      *(_DWORD *)(a2 + 56) = 2;
      *(_DWORD *)(a2 + 16) = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 1888))(this);
      return 1;
    }
    else
    {
      v13 = (const char *)sub_104183D0(a4);
      if ( !_stricmp(v13, "AI_UNHOLSTER") )
      {
        *(_DWORD *)(a2 + 56) = 3;
        *(_DWORD *)(a2 + 16) = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 1892))(this);
        return 1;
      }
      else
      {
        v14 = (const char *)sub_104183D0(a4);
        if ( !_stricmp(v14, "AI_AIM") )
        {
          *(_DWORD *)(a2 + 56) = 4;
          sub_10019680((_DWORD *)(a2 + 36), a6);
          return 1;
        }
        else
        {
          v15 = (const char *)sub_104183D0(a4);
          if ( !_stricmp(v15, "AI_RANDOMLOOK") )
          {
            *(float *)(a2 + 60) = 0.0;
            *(_DWORD *)(a2 + 56) = 5;
            return 1;
          }
          else
          {
            v16 = (const char *)sub_104183D0(a4);
            if ( !_stricmp(v16, "AI_RANDOMFACEFLEX") )
            {
              *(float *)(a2 + 60) = 0.0;
              *(_DWORD *)(a2 + 56) = 6;
              sub_100ECE90(this);
              return 1;
            }
            else
            {
              v17 = (const char *)sub_104183D0(a4);
              if ( !_stricmp(v17, "AI_RANDOMHEADFLEX") )
              {
                *(float *)(a2 + 60) = 0.0;
                *(_DWORD *)(a2 + 56) = 7;
                return 1;
              }
              else
              {
                v18 = (const char *)sub_104183D0(a4);
                if ( !_stricmp(v18, "AI_IGNORECOLLISION") )
                {
                  v30 = *(_DWORD *)this;
                  v19 = sub_10418450(a4);
                  v20 = (*(int (__thiscall **)(float *, int, _DWORD))(v30 + 2000))(this, v19, 0);
                  v28 = v20;
                  if ( v20 )
                  {
                    *(_DWORD *)(a2 + 56) = 8;
                    sub_10019680((_DWORD *)(a2 + 36), v20);
                    v31 = sub_10418520(a4);
                    v27 = v31 - sub_1041CA40(a3);
                    sub_101CABB0((int)this, v28, 1, v27);
                    result = 1;
                    *(float *)(a2 + 60) = *(float *)(dword_106B31C8 + 12) + v27;
                  }
                  else
                  {
                    v21 = sub_10418450(a4);
                    v22 = (const char *)sub_1041CAF0(a3, v21);
                    Warning("CSceneEntity %s unable to find actor named \"%s\"\n", v22, v25);
                    return 0;
                  }
                }
                else
                {
                  v23 = (const char *)sub_104183D0(a4);
                  if ( !_stricmp(v23, "AI_DISABLEAI") )
                  {
                    *(_DWORD *)(a2 + 56) = 9;
                    return 1;
                  }
                  else
                  {
                    return sub_100F16E0(a2, a3, a4, a5, a6);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
