DName *__cdecl UnDecorator::getArgumentTypes(DName *a1)
{
  int v1; // ecx
  char v2; // al
  DName *result; // eax
  char *v4; // eax
  DName *v5; // eax
  char *v6; // eax
  _BYTE v7[8]; // [esp+0h] [ebp-10h] BYREF
  int v8; // [esp+8h] [ebp-8h] BYREF
  int v9; // [esp+Ch] [ebp-4h]

  if ( *dword_10482860 == 88 )
  {
    ++dword_10482860;
    DName::DName(a1, "void");
    return a1;
  }
  if ( *dword_10482860 == 90 )
  {
    ++dword_10482860;
    v6 = "...";
    if ( (dword_10482870 & 0x40000) != 0 )
      v6 = "<ellipsis>";
    DName::DName(a1, v6);
    return a1;
  }
  UnDecorator::getArgumentList((DName *)&v8);
  v1 = v9;
  if ( (_BYTE)v9 )
    goto LABEL_12;
  v2 = *dword_10482860;
  if ( !*dword_10482860 )
    goto LABEL_12;
  if ( v2 == 64 )
  {
    ++dword_10482860;
LABEL_12:
    result = a1;
    *(_DWORD *)a1 = v8;
    *((_DWORD *)a1 + 1) = v1;
    return result;
  }
  if ( v2 == 90 )
  {
    ++dword_10482860;
    v4 = ",...";
    if ( (dword_10482870 & 0x40000) != 0 )
      v4 = ",<ellipsis>";
    v5 = DName::operator+(&v8, (DName *)v7, v4);
    *(_DWORD *)a1 = *(_DWORD *)v5;
    *((_DWORD *)a1 + 1) = *((_DWORD *)v5 + 1);
    return a1;
  }
  else
  {
    result = a1;
    *((_DWORD *)a1 + 1) &= 0xFFFF00FF;
    *(_DWORD *)a1 = 0;
    *((_BYTE *)a1 + 4) = 2;
  }
  return result;
}
