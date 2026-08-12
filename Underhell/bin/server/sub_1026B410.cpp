unsigned int __thiscall sub_1026B410(int this, _BYTE *a2)
{
  double v3; // st7
  unsigned int v4; // ecx
  bool v5; // bl
  int v6; // eax
  unsigned int result; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // [esp+Ch] [ebp-4h]

  v3 = *(float *)(dword_106B31C8 + 12) - *(float *)(this + 408);
  v4 = *(_DWORD *)(this + 404);
  v5 = v3 > *(float *)(this + 4 * v4 + 304);
  v10 = v4;
  v6 = __RTDynamicCast(
         *(_DWORD *)(this + 44),
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CPropVehicleDriveable `RTTI Type Descriptor',
         0);
  if ( v6 && *(float *)(v6 + 1136) > 0.0 )
    a2[12] = 1;
  result = *(_DWORD *)(this + 404);
  if ( a2[16] )
  {
    if ( result > 2 )
      return 1;
  }
  else
  {
    switch ( result )
    {
      case 2u:
      case 3u:
        if ( a2[15] )
          goto LABEL_18;
        return 4;
      case 5u:
        if ( !a2[15] )
          goto LABEL_18;
        return 2;
      case 6u:
      case 7u:
      case 8u:
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
      case 0xDu:
      case 0xEu:
      case 0xFu:
      case 0x10u:
      case 0x11u:
      case 0x13u:
        if ( a2[15] )
          return 2;
        if ( a2[14] )
        {
LABEL_17:
          result = 18;
        }
        else
        {
LABEL_11:
          if ( sub_1026B3A0((float *)this, (int)a2) )
          {
LABEL_12:
            result = 5;
          }
          else
          {
LABEL_18:
            switch ( *(_DWORD *)(this + 404) )
            {
              case 0:
                return (a2[15] == 0) + 3;
              case 4:
                if ( !v5 && !a2[12] )
                  goto LABEL_57;
                return 5;
              case 5:
                if ( !v5 || !a2[12] )
                  goto LABEL_57;
                if ( a2[14] )
                  goto LABEL_17;
                return a2[13] != 0 ? 19 : 6;
              case 6:
              case 0xD:
                if ( v5 && !a2[12] || a2[13] )
                  goto LABEL_12;
                if ( *(int *)(this + 388) <= 0 )
                  goto LABEL_57;
                return 7;
              case 7:
              case 0xE:
                if ( v5 && !a2[12] )
                  goto LABEL_49;
                v8 = *(_DWORD *)(this + 388);
                if ( v8 == 1 )
                  goto LABEL_57;
                goto LABEL_42;
              case 8:
              case 0xF:
                if ( !v5 )
                  goto LABEL_57;
                if ( !a2[12] )
                  goto LABEL_49;
                v8 = *(_DWORD *)(this + 388);
                if ( v8 != 2 )
                  goto LABEL_42;
                goto LABEL_57;
              case 9:
              case 0x10:
                if ( !v5 )
                  goto LABEL_57;
                if ( !a2[12] )
                  goto LABEL_49;
                v8 = *(_DWORD *)(this + 388);
                if ( v8 == 3 )
                  goto LABEL_57;
LABEL_42:
                result = sub_1026A260(v8, (int)a2);
                break;
              case 0xA:
              case 0x11:
                if ( v5 && !a2[12] )
                  goto LABEL_49;
                v9 = *(_DWORD *)(this + 388);
                if ( v9 == 4 )
                  goto LABEL_57;
                return sub_1026A2B0(v9, (int)a2);
              case 0xB:
              case 0xC:
                if ( a2[12] )
                  return sub_1026A2B0(*(_DWORD *)(this + 388), (int)a2);
                if ( *(_DWORD *)(this + 388) )
                  goto LABEL_57;
                return 5;
              case 0x12:
                if ( !v5 || a2[14] )
                  goto LABEL_57;
                return sub_1026A2B0(*(_DWORD *)(this + 388), (int)a2);
              case 0x13:
                if ( !v5 || a2[13] )
                  goto LABEL_57;
LABEL_49:
                result = 11;
                break;
              default:
LABEL_57:
                result = v10;
                break;
            }
          }
        }
        break;
      case 0x12u:
        if ( !a2[15] )
          goto LABEL_11;
        return 2;
      default:
        goto LABEL_18;
    }
  }
  return result;
}
