char __thiscall sub_1010D100(int this, int a2)
{
  int v3; // ecx
  char result; // al
  double v5; // st7
  const char *v6; // eax
  const char *v7; // eax
  const char *v8; // eax
  char v9; // cl
  char v10; // dl
  int v11; // eax
  float v12; // [esp+4h] [ebp-18h] BYREF
  float v13; // [esp+8h] [ebp-14h] BYREF
  float v14; // [esp+Ch] [ebp-10h] BYREF
  int v15; // [esp+10h] [ebp-Ch] BYREF
  int v16; // [esp+14h] [ebp-8h] BYREF
  int v17; // [esp+18h] [ebp-4h] BYREF

  v3 = *(_DWORD *)(this + 16);
  if ( a2 == v3 )
    return 1;
  if ( a2 )
  {
    if ( a2 == 20 )
    {
      return 1;
    }
    else
    {
      switch ( v3 )
      {
        case 1:
          if ( a2 == 5 )
          {
            *(_DWORD *)this = (int)*(float *)this;
            *(_DWORD *)(this + 16) = 5;
            result = 1;
          }
          else
          {
            if ( a2 != 6 )
              goto LABEL_48;
            if ( 0.0 == *(float *)this )
            {
              *(_BYTE *)this = 0;
              *(_DWORD *)(this + 16) = 6;
              result = 1;
            }
            else
            {
              result = 1;
              *(_BYTE *)this = 1;
              *(_DWORD *)(this + 16) = 6;
            }
          }
          break;
        case 2:
          switch ( a2 )
          {
            case 1:
              if ( *(_DWORD *)this )
                *(float *)this = atof((const char *)*(_DWORD *)this);
              else
                *(float *)this = 0.0;
              *(_DWORD *)(this + 16) = 1;
              result = 1;
              break;
            case 3:
              v12 = flt_106F1CA8;
              v6 = *(const char **)this;
              v13 = flt_106F1CAC;
              v14 = flt_106F1CB0;
              if ( !v6 )
                v6 = String;
              if ( !sscanf(v6, "[%f %f %f]", &v12, &v13, &v14) )
              {
                v7 = *(const char **)this;
                if ( !*(_DWORD *)this )
                  v7 = String;
                sscanf(v7, "%f %f %f", &v12, &v13, &v14);
              }
              *(float *)this = v12;
              *(_DWORD *)(this + 16) = 3;
              result = 1;
              *(float *)(this + 4) = v13;
              *(float *)(this + 8) = v14;
              break;
            case 5:
              if ( *(_DWORD *)this )
                *(_DWORD *)this = atoi(*(const char **)this);
              else
                *(_DWORD *)this = 0;
              *(_DWORD *)(this + 16) = 5;
              result = 1;
              break;
            case 6:
              if ( *(_DWORD *)this )
                *(_BYTE *)this = atoi(*(const char **)this) != 0;
              else
                *(_BYTE *)this = 0;
              *(_DWORD *)(this + 16) = 6;
              result = 1;
              break;
            case 9:
              v8 = *(const char **)this;
              a2 = 0;
              v17 = 0;
              v16 = 0;
              v15 = 255;
              if ( !v8 )
                v8 = String;
              sscanf(v8, "%d %d %d %d", &a2, &v17, &v16, &v15);
              v9 = v17;
              v10 = v16;
              *(_BYTE *)this = a2;
              *(_BYTE *)(this + 3) = v15;
              *(_BYTE *)(this + 1) = v9;
              *(_BYTE *)(this + 2) = v10;
              *(_DWORD *)(this + 16) = 9;
              result = 1;
              break;
            case 13:
              v11 = 0;
              if ( *(_DWORD *)this )
                v11 = sub_1012BF20(0, *(char **)this, 0, 0, 0, 0);
              sub_10265EE0(v11);
              return 1;
            default:
              goto LABEL_48;
          }
          break;
        case 5:
          if ( a2 == 1 )
          {
            v5 = (double)*(int *)this;
            *(_DWORD *)(this + 16) = 1;
            *(float *)this = v5;
            result = 1;
          }
          else
          {
            if ( a2 != 6 )
              goto LABEL_48;
            *(_BYTE *)this = *(_DWORD *)this != 0;
            *(_DWORD *)(this + 16) = 6;
            result = 1;
          }
          break;
        case 13:
          if ( a2 != 2 )
            goto LABEL_48;
          if ( (unsigned __int8)sub_103E0CF0(0) )
          {
            *(_DWORD *)this = *(_DWORD *)(sub_1026A890(this + 12) + 260);
            *(_DWORD *)(this + 16) = 2;
          }
          result = 1;
          break;
        default:
LABEL_48:
          result = 0;
          break;
      }
    }
  }
  else
  {
    *(_DWORD *)this = 0;
    *(_DWORD *)(this + 16) = 0;
    return 1;
  }
  return result;
}
