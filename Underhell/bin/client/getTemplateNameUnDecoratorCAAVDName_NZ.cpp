_DWORD *__cdecl UnDecorator::getTemplateName(_DWORD *a1, char a2)
{
  int v2; // ebx
  int v3; // esi
  int v4; // edi
  char *v5; // eax
  bool v6; // zf
  DName *OperatorName; // eax
  int v8; // ecx
  _BYTE *v9; // eax
  _DWORD *result; // eax
  DName *TemplateArgumentList; // [esp-10h] [ebp-B8h]
  int v12; // [esp+0h] [ebp-A8h] BYREF
  int v13; // [esp+2Ch] [ebp-7Ch] BYREF
  int v14; // [esp+58h] [ebp-50h] BYREF
  _BYTE v15[8]; // [esp+84h] [ebp-24h] BYREF
  _BYTE v16[8]; // [esp+8Ch] [ebp-1Ch] BYREF
  int v17[2]; // [esp+94h] [ebp-14h] BYREF
  int v18; // [esp+9Ch] [ebp-Ch] BYREF
  int v19; // [esp+A0h] [ebp-8h]
  char v20; // [esp+A7h] [ebp-1h] BYREF

  if ( *dword_10482860 == 63 && dword_10482860[1] == 36 )
  {
    v14 = -1;
    v13 = -1;
    v12 = -1;
    v2 = dword_1048285C;
    v3 = dword_10482854;
    dword_10482854 = (int)&v14;
    v4 = dword_10482858;
    dword_10482858 = (int)&v13;
    v5 = dword_10482860 + 2;
    dword_10482860 = v5;
    dword_1048285C = (int)&v12;
    v6 = *v5 == 63;
    v20 = 0;
    if ( v6 )
    {
      dword_10482860 = v5 + 1;
      OperatorName = UnDecorator::getOperatorName((DName *)v17, 1, &v20);
    }
    else
    {
      OperatorName = (DName *)UnDecorator::getZName(v17, 1, 1);
    }
    v8 = *(_DWORD *)OperatorName;
    v19 = *((_DWORD *)OperatorName + 1);
    v18 = v8;
    if ( !v8 )
      byte_10482878 = 1;
    if ( !v20 )
    {
      TemplateArgumentList = UnDecorator::getTemplateArgumentList((DName *)v16);
      v9 = DName::operator=(v15, 60);
      DName::operator+(v9, (DName *)v17, (int)TemplateArgumentList);
      DName::operator+=((DName *)&v18, (int)v17);
      if ( v18 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v18 + 4))(v18) == 62 )
        DName::operator+=((DName *)&v18, 32);
      DName::operator+=((DName *)&v18, 62);
      if ( a2 )
      {
        if ( *dword_10482860 )
          ++dword_10482860;
      }
    }
    result = a1;
    dword_10482858 = v4;
    dword_10482854 = v3;
    *a1 = v18;
    dword_1048285C = v2;
    a1[1] = v19;
  }
  else
  {
    result = a1;
    a1[1] &= 0xFFFF00FF;
    *a1 = 0;
    *((_BYTE *)a1 + 4) = 2;
  }
  return result;
}
