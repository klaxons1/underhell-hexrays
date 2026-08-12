char *UnDecorator::operator char *()
{
  int (__thiscall ***v0)(_DWORD); // ecx
  unsigned int v1; // eax
  char v2; // al
  DName *v3; // eax
  _DWORD *TemplateName; // eax
  _DWORD *v5; // eax
  char *result; // eax
  char *v7; // eax
  char *v8; // edx
  char v9; // cl
  int DecoratedName; // [esp-4h] [ebp-24h]
  _DWORD v11[2]; // [esp+0h] [ebp-20h] BYREF
  char v12[8]; // [esp+8h] [ebp-18h] BYREF
  int (__thiscall ***v13)(_DWORD); // [esp+10h] [ebp-10h] BYREF
  unsigned int v14; // [esp+14h] [ebp-Ch]
  int (__thiscall ***v15)(_DWORD); // [esp+18h] [ebp-8h] BYREF
  unsigned int v16; // [esp+1Ch] [ebp-4h]

  v16 &= 0xFFFF0000;
  v0 = 0;
  v15 = 0;
  v1 = v14 & 0xFFFF0000;
  if ( dword_10482864 )
  {
    if ( *dword_10482864 == 63 )
    {
      v2 = dword_10482864[1];
      if ( v2 == 64 )
      {
        dword_10482860 += 2;
        DecoratedName = UnDecorator::getDecoratedName((int)v12);
        v3 = DName::DName((DName *)v11, "CV: ");
        DName::operator+(v3, (DName *)&v13, DecoratedName);
        v0 = v13;
        v1 = v14;
        goto LABEL_9;
      }
      if ( v2 == 36 )
      {
        TemplateName = UnDecorator::getTemplateName(v11, 0);
        v0 = (int (__thiscall ***)(_DWORD))*TemplateName;
        v1 = TemplateName[1];
        if ( (_BYTE)v1 != 2 )
          goto LABEL_9;
        dword_10482860 = dword_10482864;
      }
    }
    v5 = (_DWORD *)UnDecorator::getDecoratedName((int)v11);
    v0 = (int (__thiscall ***)(_DWORD))*v5;
    v1 = v5[1];
  }
LABEL_9:
  if ( (_BYTE)v1 == 3 )
    return 0;
  if ( (_BYTE)v1 == 2 || (dword_10482870 & 0x1000) == 0 && *dword_10482860 )
  {
    DName::operator=((DName *)&v15, dword_10482864);
  }
  else
  {
    v15 = v0;
    v16 = v1;
  }
  result = dword_10482868;
  if ( dword_10482868 )
    goto LABEL_20;
  if ( v15 )
    result = (char *)(**v15)(v15);
  dword_1048286C = (int)(result + 1);
  result = (char *)dword_10482840((unsigned int)(result + 8) & 0xFFFFFFF8);
  dword_10482868 = result;
  if ( result )
  {
LABEL_20:
    DName::getString((DName *)&v15, result, dword_1048286C);
    v7 = dword_10482868;
    v8 = dword_10482868;
    while ( 1 )
    {
      v9 = *v7;
      if ( !*v7 )
        break;
      if ( v9 == 32 )
      {
        ++v7;
        *v8++ = 32;
        while ( *v7 == 32 )
          ++v7;
      }
      else
      {
        *v8++ = v9;
        ++v7;
      }
    }
    *v8 = 0;
    return dword_10482868;
  }
  return result;
}
