_DWORD *__cdecl UnDecorator::getZName(_DWORD *a1, char a2, char a3)
{
  char v3; // cl
  unsigned int v4; // eax
  _DWORD *result; // eax
  int **TemplateName; // eax
  int *v7; // ecx
  char *v8; // eax
  const char *v9; // eax
  const char *v10; // esi
  char *v11; // ecx
  char *v12; // ecx
  const char *v13; // esi
  int v14; // ebx
  char *v15; // esi
  int v16; // eax
  char *v17; // eax
  DName *v18; // eax
  DName *v19; // eax
  int *v20; // ecx
  unsigned int v21; // eax
  _BYTE v22[4]; // [esp+Ch] [ebp-34h] BYREF
  int v23; // [esp+10h] [ebp-30h]
  _DWORD v24[2]; // [esp+14h] [ebp-2Ch] BYREF
  int v25; // [esp+1Ch] [ebp-24h] BYREF
  int v26; // [esp+20h] [ebp-20h]
  int *v27; // [esp+24h] [ebp-1Ch] BYREF
  unsigned int v28; // [esp+28h] [ebp-18h]
  char String[16]; // [esp+2Ch] [ebp-14h] BYREF

  v3 = *dword_10482860;
  v4 = *dword_10482860 - 48;
  if ( v4 <= 9 )
  {
    ++dword_10482860;
    Replicator::operator[]((_DWORD *)dword_10482858, (int)a1, v4);
    return a1;
  }
  v27 = 0;
  v28 &= 0xFFFF0000;
  if ( v3 == 63 )
  {
    TemplateName = (int **)UnDecorator::getTemplateName(v24, 0);
    v7 = *TemplateName;
    v28 = (unsigned int)TemplateName[1];
    v27 = v7;
    LOBYTE(v7) = *dword_10482860;
    v8 = ++dword_10482860;
    if ( (_BYTE)v7 != 64 )
    {
      dword_10482860 = v8 - 1;
      DName::operator=(&v27, (*(v8 - 1) != 0) + 1);
    }
    goto LABEL_26;
  }
  v9 = "template-parameter-";
  v10 = "template-parameter-";
  v11 = dword_10482860;
  v26 = 18;
  do
  {
    if ( !*v11 )
      break;
    if ( *v11 != *v10 )
      break;
    ++v11;
    ++v10;
    --v26;
  }
  while ( v26 );
  if ( *v11 == *v10 )
  {
    dword_10482860 += 19;
LABEL_18:
    v15 = (char *)v9;
    UnDecorator::getSignedDimension((DName *)&v25);
    if ( (dword_10482870 & 0x4000) != 0
      && (DName::getString((DName *)&v25, String, 0x10u), v16 = atol(String), (v17 = (char *)dword_10482874(v16)) != 0) )
    {
      DName::operator=((DName *)&v27, v17);
    }
    else
    {
      DName::operator=((DName *)&v27, "`");
      v18 = DName::DName((DName *)v22, v15);
      DName::operator+(v18, (DName *)v24, (int)&v25);
      v25 = v24[0];
      v26 = v24[1];
      DName::operator+=((DName *)&v25, "'");
      DName::operator+=((DName *)&v27, (int)&v25);
    }
    goto LABEL_26;
  }
  v9 = "generic-type-";
  v12 = dword_10482860;
  v13 = "generic-type-";
  v14 = 12;
  do
  {
    if ( !*v12 )
      break;
    if ( *v12 != *v13 )
      break;
    ++v12;
    ++v13;
    --v14;
  }
  while ( v14 );
  if ( *v12 == *v13 )
  {
    dword_10482860 += 13;
    goto LABEL_18;
  }
  if ( a3 && *dword_10482860 == 64 )
  {
    ++dword_10482860;
    v27 = 0;
    v28 = v23 & 0xFFFF0000;
  }
  else
  {
    v19 = DName::DName((DName *)v22, &dword_10482860, 64);
    v20 = *(int **)v19;
    v21 = *((_DWORD *)v19 + 1);
    v27 = v20;
    v28 = v21;
  }
LABEL_26:
  if ( a2 )
  {
    if ( *(_DWORD *)dword_10482858 != 9 )
      Replicator::operator+=((_DWORD *)dword_10482858, &v27);
  }
  result = a1;
  *a1 = v27;
  a1[1] = v28;
  return result;
}
