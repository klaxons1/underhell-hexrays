int *__cdecl UnDecorator::getArrayType(int *a1, _DWORD *a2)
{
  int *v2; // eax
  int *v3; // ecx
  int v4; // eax
  _BYTE *v5; // eax
  int *v6; // eax
  int v7; // eax
  _BYTE *v8; // eax
  int *result; // eax
  int v10; // ecx
  _BYTE *v11; // eax
  DName *v12; // eax
  _BYTE *v13; // eax
  DName *v14; // eax
  DName *v15; // [esp-10h] [ebp-4Ch]
  int Dimension; // [esp-Ch] [ebp-48h]
  DName *v17; // [esp-8h] [ebp-44h]
  _BYTE v18[8]; // [esp+4h] [ebp-38h] BYREF
  _BYTE v19[8]; // [esp+Ch] [ebp-30h] BYREF
  int v20; // [esp+14h] [ebp-28h] BYREF
  int v21; // [esp+18h] [ebp-24h]
  int v22; // [esp+1Ch] [ebp-20h] BYREF
  int v23; // [esp+20h] [ebp-1Ch]
  int v24; // [esp+24h] [ebp-18h] BYREF
  int v25; // [esp+28h] [ebp-14h]
  int v26; // [esp+2Ch] [ebp-10h] BYREF
  int v27; // [esp+30h] [ebp-Ch]
  int v28; // [esp+34h] [ebp-8h] BYREF
  int NumberOfDimensions; // [esp+38h] [ebp-4h]

  if ( !*dword_10482860 )
  {
    if ( *a2 )
    {
      v11 = DName::operator=(v18, 40);
      DName::operator+(v11, (DName *)&v20, (int)a2);
      v24 = v20;
      v25 = v21;
      DName::operator+=((DName *)&v24, ")[");
      v26 = v24;
      v27 = v25;
      DName::operator+=((int **)&v26, 1);
      v28 = v26;
      NumberOfDimensions = v27;
      DName::operator+=((DName *)&v28, 93);
      v12 = (DName *)&v28;
LABEL_22:
      UnDecorator::getBasicDataType(a1, v12);
      return a1;
    }
    v17 = (DName *)v18;
    v2 = (int *)v19;
    v3 = &v20;
LABEL_21:
    v15 = (DName *)v2;
    v13 = DName::operator=(v3, 91);
    v14 = DName::operator+(v13, v15, 1);
    v12 = DName::operator+(v14, v17, 93);
    goto LABEL_22;
  }
  NumberOfDimensions = UnDecorator::getNumberOfDimensions();
  if ( NumberOfDimensions < 0 )
    NumberOfDimensions = 0;
  if ( !NumberOfDimensions )
  {
    v17 = (DName *)&v20;
    v2 = &v22;
    v3 = &v24;
    goto LABEL_21;
  }
  v27 &= 0xFFFF0000;
  v26 = 0;
  if ( (a2[1] & 0x800) != 0 )
    DName::operator+=((DName *)&v26, "[]");
  while ( (char)v27 <= 1 )
  {
    v4 = NumberOfDimensions--;
    if ( !v4 || !*dword_10482860 )
      break;
    Dimension = UnDecorator::getDimension((int)v19, 0);
    v5 = DName::operator=(v18, 91);
    DName::operator+(v5, (DName *)&v22, Dimension);
    v24 = v22;
    v25 = v23;
    DName::operator+=((DName *)&v24, 93);
    DName::operator+=((DName *)&v26, (int)&v24);
  }
  if ( *a2 )
  {
    if ( (a2[1] & 0x800) != 0 )
    {
      v6 = (int *)DName::operator+(a2, (DName *)v18, (int)&v26);
      v26 = *v6;
      v7 = v6[1];
    }
    else
    {
      v8 = DName::operator=(v18, 40);
      DName::operator+(v8, (DName *)&v22, (int)a2);
      v28 = v22;
      NumberOfDimensions = v23;
      DName::operator+=((DName *)&v28, 41);
      v24 = v28;
      v25 = NumberOfDimensions;
      DName::operator+=((DName *)&v24, (int)&v26);
      v26 = v24;
      v7 = v25;
    }
    v27 = v7;
  }
  UnDecorator::getPrimaryDataType(&v20, &v26);
  result = a1;
  v10 = v21 | 0x800;
  *a1 = v20;
  a1[1] = v10;
  return result;
}
